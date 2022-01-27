%% Create Empty Matrices
clc
clear
close all

numParticipants = 18;
numSonifications = 9;

nameVector = strings([numParticipants,1]);
ageVector = zeros(numParticipants,1);
genderVector = strings([numParticipants,1]);
omsiVector = zeros(numParticipants,1);

error_T = zeros(numParticipants,numSonifications);
error_M = zeros(numParticipants,numSonifications);
time_T = zeros(numParticipants,numSonifications);
time_M = zeros(numParticipants,numSonifications);
overshoots_T = zeros(numParticipants,numSonifications);
overshoots_M = zeros(numParticipants,numSonifications);
pleasantness_T = zeros(numParticipants,numSonifications);
pleasantness_M = zeros(numParticipants,numSonifications);
longevity_T = zeros(numParticipants,numSonifications);
longevity_M = zeros(numParticipants,numSonifications);

%% Read CSV File

temp_name = '';
temp_age = 0;
temp_OMSI = 0;
temp_gender = '';
temp_errors = zeros(1,2*numSonifications);
temp_time = zeros(1,2*numSonifications);
temp_overshoots = zeros(1,2*numSonifications);
temp_pleasantness = zeros(1,2*numSonifications);
temp_longevity = zeros(1,2*numSonifications);

%subset_M = [3 5 7 9];
%subset_T = [4 5 7 8];

startParticipant = 1;

for i = 0 : numParticipants - 1
    filename = ['Participant ' num2str(startParticipant + i) '.csv'];
    fid_currentParticipant = fopen(filename);
    data_header = textscan(fid_currentParticipant,'%s%s%s%s%s','Delimiter',',');
    col1 = string(data_header{1});
    col2 = string(data_header{2});
    col3 = string(data_header{3});
    col4 = string(data_header{4});
    col5 = string(data_header{5});
    
    temp_name = col1(1);    nameVector(i+1) = temp_name;
    temp_age = col2(1);     ageVector(i+1) = temp_age;
    temp_gender = col3(1);  genderVector(i+1) = temp_gender;
    temp_OMSI = col4(1);    omsiVector(i+1) = temp_OMSI;
    
    temp_errors = double(col1(2:19));
    temp_time = double(col2(2:19));
    temp_overshoots = double(col3(2:19));
    temp_pleasantness = double(col4(2:19));
    temp_longevity = double(col5(2:19));
    
    for j = 1 : 18
        if j <= 9
            error_M(i+1,j) = abs(temp_errors(j));
            time_M(i+1,j) = temp_time(j);
            overshoots_M(i+1,j) = temp_overshoots(j);
            pleasantness_M(i+1,j) = temp_pleasantness(j);
            longevity_M(i+1,j) = temp_longevity(j);
        end
        if j > 9
            error_T(i+1,j-9) = abs(temp_errors(j));
            time_T(i+1,j-9) = temp_time(j);
            overshoots_T(i+1,j-9) = temp_overshoots(j);
            pleasantness_T(i+1,j-9) = temp_pleasantness(j);
            longevity_T(i+1,j-9) = temp_longevity(j);
        end
    end
end

clear temp_name temp_age temp_OMSI temp_gender temp_errors temp_time temp_overshoots ...
    temp_pleasantness temp_longevity col1 col2 col3 col4 col5 ...
    startParticipant;

%% Plot All Data

% Eliminate unwanted strategies
corrSet_T = [1 2 4 5 6 7];
corrSet_M = [1 2 3 6 4 5];

error_M = error_M(:,corrSet_M);
error_T = error_T(:,corrSet_T);
time_M = time_M(:,corrSet_M);
time_T = time_T(:,corrSet_T);
overshoots_M = overshoots_M(:,corrSet_M);
overshoots_T = overshoots_T(:,corrSet_T);
pleasantness_M = pleasantness_M(:,corrSet_M);
pleasantness_T = pleasantness_T(:,corrSet_T);
longevity_M = longevity_M(:,corrSet_M);
longevity_T = longevity_T(:,corrSet_T);

XtickLabs = ({'P','L','Br','AM','Sy','Hm'});

% Error
figure
subplot(1,2,1)
violinplot(error_M)
title('Musical')
ylabel('Error (%)')
xticklabels(XtickLabs);
ylim([0 30])
subplot(1,2,2)
violinplot(error_T)
title('Traditional')
ylim([0 30])
ylabel('Error (%)')
xticklabels(XtickLabs);

% Time
% Error
figure
subplot(1,2,1)
violinplot(time_M)
title('Musical')
ylabel('Time (s)')
xticklabels(XtickLabs);
ylim([0 30])
subplot(1,2,2)
violinplot(time_T)
title('Traditional')
ylim([0 30])
ylabel('Time (s)')
xticklabels(XtickLabs);

% Overshoots
figure
subplot(1,2,1)
violinplot(overshoots_M)
title('Musical')
ylabel('# Overshoots')
xticklabels(XtickLabs);
ylim([0 30])
subplot(1,2,2)
violinplot(overshoots_T)
title('Traditional')
ylim([0 30])
ylabel('# Overshoots')
xticklabels(XtickLabs);

% Pleasantness
figure
subplot(1,2,1)
violinplot(pleasantness_M)
title('Musical')
ylabel('Pleasantness Rating')
xticklabels(XtickLabs);
ylim([0 7])
subplot(1,2,2)
violinplot(pleasantness_T)
title('Traditional')
ylim([0 7])
ylabel('Pleasantness Rating')
xticklabels(XtickLabs);

% Longevity
figure
subplot(1,2,1)
violinplot(longevity_M)
title('Musical')
ylabel('Preferred Use Duration')
ylim([0 7])
xticklabels(XtickLabs);
subplot(1,2,2)
violinplot(longevity_T)
title('Traditional')
ylim([0 7])
ylabel('Preferred Use Duration')
xticklabels(XtickLabs);

%% Matrices with Direct Dimension Comparison

error_M_T = [];
time_M_T = [];
overshoots_M_T = [];
pleasantness_M_T = [];
longevity_M_T = [];

error_M_T(:,:,1) = error_M;
error_M_T(:,:,2) = error_T;
dimMean_error_M_T = [mean(error_M_T,3) omsiVector];

time_M_T(:,:,1) = time_M;
time_M_T(:,:,2) = time_T;
dimMean_time_M_T = [mean(time_M_T,3) omsiVector];

overshoots_M_T(:,:,1) = overshoots_M;
overshoots_M_T(:,:,2) = overshoots_T;
dimMean_overshoots_M_T = [mean(overshoots_M_T,3) omsiVector];

pleasantness_M_T(:,:,1) = pleasantness_M;
pleasantness_M_T(:,:,2) = pleasantness_T;
dimMean_pleasantness_M_T = [mean(pleasantness_M_T,3) omsiVector];

longevity_M_T(:,:,1) = longevity_M;
longevity_M_T(:,:,2) = longevity_T;
dimMean_longevity_M_T = [mean(longevity_M_T,3) omsiVector];

error_M_T = [];
time_M_T = [];
overshoots_M_T = [];
pleasantness_M_T = [];
longevity_M_T = [];

 for i = 1 : 6
     error_M_T = [error_M_T error_M(:,i) error_T(:,i)];
     time_M_T = [time_M_T time_M(:,i) time_T(:,i)];
     overshoots_M_T = [overshoots_M_T overshoots_M(:,i) overshoots_T(:,i)];
     pleasantness_M_T = [pleasantness_M_T pleasantness_M(:,i) pleasantness_T(:,i)];
     longevity_M_T = [longevity_M_T longevity_M(:,i) longevity_T(:,i)];
 end

%% Pleasantness - Longevity Correlation

ALL_Pleasantness = [pleasantness_M(:) ; pleasantness_T(:)];
ALL_Longevity = [longevity_M(:) ; longevity_T(:)];
MAT_P_L_Corr  = [ALL_Pleasantness ALL_Longevity];

[R_P_L, R_P_L_p] = corrplot([ALL_Pleasantness ALL_Longevity],'varNames',{'Pleasantness', 'Longevity'});

%% Correlations B/W Objective and Subjective Outcomes
% Sig correlations: Longevity, Time || Pleasantness, Longevity ||
% Pleasantness, Time
% Nearing Sig: Error, Time || Pleasantness, Error
colMat_OUTCOMES = [error_M_T(:) time_M_T(:) overshoots_M_T(:) pleasantness_M_T(:) longevity_M_T(:)];

[corr_R_OVERALL corr_P_OVERALL] = corrcoef(colMat_OUTCOMES)

% 
% 
% figure
% [R_P_E, R_P_E_p] = corrplot([error_M_T(:) pleasantness_M_T(:)],'varNames',{'Error', 'Pleasantness'});
% figure
% [R_P_T, R_P_T_p] = corrplot([time_M_T(:) pleasantness_M_T(:)],'varNames',{'Time', 'Pleasantness'});
% figure
% [R_P_O, R_P_O_p] = corrplot([overshoots_M_T(:) pleasantness_M_T(:)],'varNames',{'Overshoots', 'Pleasantness'});
% 
% 
% figure
% [R_L_E, R_L_E_p] = corrplot([error_M_T(:) longevity_M_T(:)],'varNames',{'Error', 'Longevity'});
% figure
% [R_L_T, R_L_T_p] = corrplot([time_M_T(:) longevity_M_T(:)],'varNames',{'Time', 'Longevity'});
% figure
% [R_L_O, R_L_O_p] = corrplot([overshoots_M_T(:) longevity_M_T(:)],'varNames',{'Overshoots', 'Longevity'});
% 
% figure
% [R_E_T, R_E_T_p] = corrplot([error_M_T(:) time_M_T(:)],'varNames',{'Error', 'Time'});