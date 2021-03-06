#pragma once

class PercPatternLibrary
{
public:
	PercPatternLibrary() {};
	~PercPatternLibrary() {};

	int percPatternsPerLevel = 5;
	int kickPatternsPerCategory = 20;
	int snarePatternsPerCategory = 20;
	int hhPatternsPerCategory = 20;
	int riffVelPatterns = 20;
	int riffOctPatterns = 5;

	int numCrashPatterns = 20;
	int numArpDegreePatterns = 20;
	int numArpVelPatterns = 5;
	int numChordStabVelPatterns = 5;

													//Kick
	short kick_S1[20][16] =
	{
		{9, 0, 0, 0,	9, 0, 0, 0,		9, 0, 0, 0,		9, 0, 0, 0},	//L1
		{9, 0, 0, 0,	9, 0, 0, 0,		9, 0, 0, 0,		9, 0, 0, 0},
		{9, 0, 0, 0,	9, 0, 0, 0,		9, 0, 0, 0,		9, 0, 0, 0},
		{9, 0, 0, 0,	9, 0, 0, 0,		9, 0, 0, 0,		9, 0, 0, 0},
		{9, 0, 0, 0,	9, 0, 0, 0,		9, 0, 0, 0,		9, 0, 0, 0},
		{9, 0, 0, 0,	9, 0, 0, 0,		9, 0, 0, 0,		9, 0, 0, 0},	//L2
		{9, 0, 0, 0,	9, 0, 0, 0,		9, 0, 0, 0,		9, 0, 0, 0},
		{9, 0, 0, 0,	9, 0, 0, 0,		9, 0, 0, 0,		9, 0, 0, 0},
		{9, 0, 0, 0,	9, 0, 0, 0,		9, 0, 0, 0,		9, 0, 0, 0},
		{9, 0, 0, 0,	9, 0, 0, 0,		9, 0, 0, 0,		9, 0, 0, 0},
		{9, 0, 0, 0,	9, 0, 0, 0,		9, 0, 0, 0,		9, 0, 0, 0},	//L3
		{9, 0, 0, 0,	9, 0, 0, 0,		9, 0, 0, 0,		9, 0, 0, 0},
		{9, 0, 0, 0,	9, 0, 0, 0,		9, 0, 0, 0,		9, 0, 0, 0},
		{9, 0, 0, 0,	9, 0, 0, 0,		9, 0, 0, 0,		9, 0, 0, 0},
		{9, 0, 0, 0,	9, 0, 0, 0,		9, 0, 0, 0,		9, 0, 0, 0},
		{9, 0, 0, 0,	9, 0, 0, 0,		9, 0, 0, 0,		9, 7, 0, 0},	//L4
		{9, 0, 0, 0,	9, 0, 0, 0,		9, 0, 0, 0,		9, 7, 0, 0},
		{9, 0, 0, 0,	9, 7, 0, 0,		9, 0, 0, 0,		9, 7, 0, 0},
		{9, 0, 0, 0,	9, 7, 0, 0,		9, 0, 0, 0,		9, 7, 0, 0},
		{9, 0, 0, 0,	9, 7, 0, 0,		9, 0, 0, 0,		9, 7, 0, 0}
	};

	short kick_S2[20][16] =
	{
		{9, 0, 0, 0,	9, 0, 0, 0,		9, 0, 0, 0,		9, 0, 0, 0},	//L1
		{9, 0, 0, 0,	9, 0, 0, 0,		9, 0, 0, 0,		9, 0, 0, 0},
		{9, 0, 0, 0,	9, 0, 0, 0,		9, 0, 0, 0,		9, 0, 0, 0},
		{9, 0, 0, 0,	9, 0, 0, 0,		9, 0, 0, 0,		9, 0, 0, 0},
		{9, 0, 0, 0,	9, 0, 0, 0,		9, 0, 0, 0,		9, 0, 0, 0},
		{9, 0, 0, 0,	9, 0, 0, 0,		9, 0, 0, 0,		9, 0, 0, 0},	//L2
		{9, 0, 0, 0,	9, 0, 0, 0,		9, 0, 0, 0,		9, 0, 0, 0},
		{9, 0, 0, 0,	9, 0, 0, 0,		9, 0, 0, 0,		9, 0, 0, 0},
		{9, 0, 0, 0,	9, 0, 0, 0,		9, 0, 0, 0,		9, 0, 0, 0},
		{9, 0, 0, 0,	9, 0, 0, 0,		9, 0, 0, 0,		9, 0, 0, 0},
		{9, 0, 0, 0,	9, 0, 0, 0,		9, 0, 0, 0,		9, 0, 0, 0},	//L3
		{9, 0, 0, 0,	9, 0, 0, 0,		9, 0, 0, 0,		9, 0, 0, 0},
		{9, 0, 0, 0,	9, 0, 0, 0,		9, 0, 0, 0,		9, 0, 0, 0},
		{9, 0, 0, 0,	9, 0, 0, 0,		9, 0, 0, 0,		9, 0, 0, 0},
		{9, 0, 0, 0,	9, 0, 0, 0,		9, 0, 0, 0,		9, 0, 0, 0},
		{9, 0, 0, 0,	9, 0, 0, 0,		9, 0, 0, 0,		9, 0, 0, 0},	//L4
		{9, 0, 0, 0,	9, 0, 0, 0,		9, 0, 0, 0,		9, 0, 0, 0},
		{9, 0, 0, 0,	9, 0, 0, 0,		9, 0, 0, 0,		9, 0, 0, 0},
		{9, 0, 0, 0,	9, 0, 0, 0,		9, 0, 0, 0,		9, 0, 0, 0},
		{9, 0, 0, 0,	9, 0, 0, 0,		9, 0, 0, 0,		9, 0, 0, 0}
	};

	short kick_S3[20][16] =
	{
		{9, 0, 0, 0,	9, 0, 0, 0,		9, 0, 0, 0,		9, 0, 0, 0},	//L1
		{9, 0, 0, 0,	9, 0, 0, 0,		9, 0, 0, 0,		9, 0, 0, 0},
		{9, 0, 0, 0,	9, 0, 0, 0,		9, 0, 0, 0,		9, 0, 0, 0},
		{9, 0, 0, 0,	9, 0, 0, 0,		9, 0, 0, 0,		9, 0, 0, 0},
		{9, 0, 0, 0,	9, 0, 0, 0,		9, 0, 0, 0,		9, 0, 0, 0},
		{9, 0, 0, 0,	9, 0, 0, 0,		9, 0, 0, 0,		9, 0, 0, 0},	//L2
		{9, 0, 0, 0,	9, 0, 0, 0,		9, 0, 0, 0,		9, 0, 0, 0},
		{9, 0, 0, 0,	9, 0, 0, 0,		9, 0, 0, 0,		9, 0, 0, 0},
		{9, 0, 0, 0,	9, 0, 0, 0,		9, 0, 0, 0,		9, 0, 0, 0},
		{9, 0, 0, 0,	9, 0, 0, 0,		9, 0, 0, 0,		9, 0, 0, 0},
		{9, 0, 0, 0,	9, 0, 0, 0,		9, 0, 0, 0,		9, 0, 0, 0},	//L3
		{9, 0, 0, 0,	9, 0, 0, 0,		9, 0, 0, 0,		9, 0, 0, 0},
		{9, 0, 0, 0,	9, 0, 0, 0,		9, 0, 0, 0,		9, 0, 0, 0},
		{9, 0, 0, 0,	9, 0, 0, 0,		9, 0, 0, 0,		9, 0, 0, 0},
		{9, 0, 0, 0,	9, 0, 0, 0,		9, 0, 0, 0,		9, 0, 0, 0},
		{9, 0, 0, 0,	9, 0, 0, 0,		9, 0, 0, 0,		9, 7, 0, 0},	//L4
		{9, 0, 0, 0,	9, 0, 0, 0,		9, 0, 0, 0,		9, 7, 0, 0},
		{9, 0, 0, 0,	9, 7, 0, 0,		9, 0, 0, 0,		9, 7, 0, 0},
		{9, 0, 0, 0,	9, 7, 0, 0,		9, 0, 0, 0,		9, 7, 0, 0},
		{9, 0, 0, 0,	9, 7, 0, 0,		9, 0, 0, 0,		9, 7, 0, 0}
	};

	short kick_S4[20][16] =
	{
		{9, 0, 0, 0,	9, 0, 0, 0,		9, 0, 0, 0,		9, 0, 0, 0},	//L1
		{9, 0, 0, 0,	9, 0, 0, 0,		9, 0, 0, 0,		9, 0, 0, 0},
		{9, 0, 0, 0,	9, 0, 0, 0,		9, 0, 0, 0,		9, 0, 0, 0},
		{9, 0, 0, 0,	9, 0, 0, 0,		9, 0, 0, 0,		9, 0, 0, 0},
		{9, 0, 0, 0,	9, 0, 0, 0,		9, 0, 0, 0,		9, 0, 0, 0},
		{9, 0, 0, 0,	9, 0, 0, 0,		9, 0, 0, 0,		9, 0, 0, 0},	//L2
		{9, 0, 0, 0,	9, 0, 0, 0,		9, 0, 0, 0,		9, 0, 0, 0},
		{9, 0, 0, 0,	9, 0, 0, 0,		9, 0, 0, 0,		9, 0, 0, 0},
		{9, 0, 0, 0,	9, 0, 0, 0,		9, 0, 0, 0,		9, 0, 0, 0},
		{9, 0, 0, 0,	9, 0, 0, 0,		9, 0, 0, 0,		9, 0, 0, 0},
		{9, 0, 0, 0,	9, 0, 0, 0,		9, 0, 0, 0,		9, 0, 0, 0},	//L3
		{9, 0, 0, 0,	9, 0, 0, 0,		9, 0, 0, 0,		9, 0, 0, 0},
		{9, 0, 0, 0,	9, 0, 0, 0,		9, 0, 0, 0,		9, 0, 0, 0},
		{9, 0, 0, 0,	9, 0, 0, 0,		9, 0, 0, 0,		9, 0, 0, 0},
		{9, 0, 0, 0,	9, 0, 0, 0,		9, 0, 0, 0,		9, 0, 0, 0},
		{9, 0, 0, 0,	9, 0, 0, 0,		9, 0, 0, 0,		9, 7, 0, 0},	//L4
		{9, 0, 0, 0,	9, 0, 0, 0,		9, 0, 0, 0,		9, 7, 0, 0},
		{9, 0, 0, 0,	9, 7, 0, 0,		9, 0, 0, 0,		9, 7, 0, 0},
		{9, 0, 0, 0,	9, 7, 0, 0,		9, 0, 0, 0,		9, 7, 0, 0},
		{9, 0, 0, 0,	9, 7, 0, 0,		9, 0, 0, 0,		9, 7, 0, 0}
	};

													//Snare

	short snare_S1[20][16] =
	{
		{0, 0, 0, 0,	9, 0, 0, 0,		0, 0, 0, 0,		9, 0, 0, 0},	//L1
		{0, 0, 0, 0,	9, 0, 0, 0,		0, 0, 0, 0,		9, 0, 0, 5},
		{0, 5, 0, 0,	9, 0, 0, 0,		0, 0, 0, 0,		9, 0, 0, 0},
		{0, 0, 0, 0,	9, 7, 0, 0,		0, 0, 0, 0,		9, 0, 0, 0},
		{0, 0, 0, 0,	9, 0, 0, 0,		0, 0, 0, 0,		9, 7, 0, 0},
		{0, 0, 0, 0,	9, 0, 0, 0,		0, 0, 0, 0,		9, 0, 5, 7},	//L2
		{0, 0, 0, 0,	9, 0, 0, 7,		0, 5, 0, 0,		9, 0, 0, 7},
		{0, 0, 0, 0,	9, 0, 0, 5,		0, 0, 0, 0,		9, 0, 5, 0},
		{0, 0, 0, 0,	9, 0, 5, 7,		0, 0, 0, 0,		9, 0, 5, 0},
		{0, 0, 0, 7,	9, 0, 0, 0,		0, 7, 0, 0,		9, 0, 0, 0},
		{0, 0, 0, 7,	9, 0, 0, 0,		0, 7, 0, 0,		9, 0, 0, 7},	//L3
		{0, 0, 0, 0,	9, 0, 0, 7,		0, 0, 0, 0,		9, 7, 0, 7},
		{0, 0, 4, 0,	9, 7, 5, 0,		0, 7, 0, 0,		9, 0, 0, 0},
		{0, 0, 0, 0,	9, 7, 5, 0,		0, 0, 0, 7,		9, 0, 0, 7},
		{0, 5, 0, 0,	9, 0, 0, 7,		0, 5, 0, 0,		9, 0, 7, 8},
		{0, 0, 0, 0,	9, 0, 0, 0,		0, 0, 0, 0,		9, 3, 5, 7},	//L4
		{0, 0, 0, 0,	9, 0, 0, 7,		0, 5, 3, 0,		9, 0, 0, 7},
		{0, 0, 0, 0,	9, 0, 0, 5,		0, 0, 0, 5,		9, 0, 5, 0},
		{0, 0, 0, 5,	9, 0, 5, 7,		0, 0, 0, 0,		9, 0, 5, 0},
		{0, 0, 5, 7,	9, 0, 0, 0,		0, 7, 0, 0,		9, 5, 0, 0}
	};

	short snare_S1_Fills[20][16] =
	{
		{0, 0, 0, 0,	9, 0, 0, 0,		0, 0, 0, 6,		9, 0, 7, 0},	//L1
		{0, 0, 0, 0,	9, 0, 0, 0,		0, 0, 0, 6,		9, 7, 5, 0},
		{0, 0, 0, 0,	9, 0, 0, 0,		0, 9, 0, 6,		9, 0, 5, 0},
		{0, 0, 0, 0,	9, 0, 0, 0,		0, 4, 6, 0,		9, 0, 5, 0},
		{0, 0, 0, 0,	9, 0, 0, 0,		0, 4, 6, 0,		9, 0, 5, 7},
		{0, 0, 0, 0,	9, 0, 0, 0,		3, 4, 5, 6,		7, 8, 9, 9},	//L2
		{0, 0, 0, 0,	9, 0, 0, 0,		0, 0, 5, 7,		9, 7, 5, 0},
		{0, 0, 0, 0,	9, 0, 0, 0,		9, 0, 0, 9,		0, 0, 9, 0},
		{0, 0, 0, 0,	9, 0, 0, 0,		9, 7, 0, 9,		0, 0, 9, 0},
		{0, 0, 0, 0,	9, 0, 0, 0,		9, 7, 0, 9,		8, 0, 9, 0},
		{0, 0, 0, 0,	9, 0, 0, 0,		9, 0, 0, 9,		8, 0, 5, 7},	//L3
		{0, 0, 0, 0,	9, 0, 0, 0,		0, 9, 0, 9,		0, 0, 9, 0},
		{0, 0, 0, 0,	9, 0, 0, 0,		0, 9, 0, 9,		0, 0, 8, 9},
		{0, 0, 0, 0,	9, 0, 0, 0,		0, 9, 0, 3,		5, 7, 8, 9},
		{0, 0, 0, 0,	9, 0, 0, 0,		0, 9, 0, 3,		5, 7, 0, 9},
		{0, 0, 0, 0,	9, 0, 0, 0,		0, 9, 7, 3,		8, 0, 8, 0},	//L4
		{0, 0, 0, 0,	9, 0, 0, 0,		0, 9, 7, 3,		8, 0, 8, 9},	
		{0, 0, 0, 0,	9, 0, 0, 0,		0, 9, 7, 3,		6, 8, 9, 0},	
		{0, 0, 0, 0,	9, 0, 0, 0,		0, 9, 7, 3,		6, 0, 9, 0},	
		{0, 0, 0, 0,	9, 0, 0, 0,		0, 9, 7, 3,		6, 9, 0, 9},	

	};

	short snare_S2[20][16] =
	{
		{0, 0, 0, 9,	0, 0, 9, 0,		0, 0, 0, 9,		0, 0, 9, 0},	
		{0, 0, 0, 9,	0, 0, 9, 0,		0, 0, 0, 9,		0, 0, 9, 0},	
		{0, 0, 0, 9,	0, 0, 9, 0,		0, 0, 0, 9,		0, 0, 9, 0},	
		{0, 0, 0, 9,	0, 0, 9, 0,		0, 0, 0, 9,		0, 0, 9, 0},	
		{0, 0, 0, 9,	0, 0, 9, 0,		0, 0, 0, 9,		0, 0, 9, 0},	
		{0, 0, 0, 9,	0, 0, 9, 0,		0, 0, 0, 9,		0, 0, 9, 0},	
		{0, 0, 0, 9,	0, 0, 9, 0,		0, 0, 0, 9,		0, 0, 9, 0},	
		{0, 0, 0, 9,	0, 0, 9, 0,		0, 0, 0, 9,		0, 0, 9, 0},	
		{0, 0, 0, 9,	0, 0, 9, 0,		0, 0, 0, 9,		0, 0, 9, 0},	
		{0, 0, 0, 9,	0, 0, 9, 0,		0, 0, 0, 9,		0, 0, 9, 0},	
		{0, 0, 0, 9,	0, 0, 9, 0,		0, 0, 0, 9,		0, 0, 9, 0},	
		{0, 0, 0, 9,	0, 0, 9, 0,		0, 0, 0, 9,		0, 0, 9, 0},	
		{0, 0, 0, 9,	0, 0, 9, 0,		0, 0, 0, 9,		0, 0, 9, 0},	
		{0, 0, 0, 9,	0, 0, 9, 0,		0, 0, 0, 9,		0, 0, 9, 0},	
		{0, 0, 0, 9,	0, 0, 9, 0,		0, 0, 0, 9,		0, 0, 9, 0},	
		{0, 0, 0, 9,	0, 0, 9, 0,		0, 0, 0, 9,		0, 0, 9, 0},	
		{0, 0, 0, 9,	0, 0, 9, 0,		0, 0, 0, 9,		0, 0, 9, 0},	
		{0, 0, 0, 9,	0, 0, 9, 0,		0, 0, 0, 9,		0, 0, 9, 0},	
		{0, 0, 0, 9,	0, 0, 9, 0,		0, 0, 0, 9,		0, 0, 9, 0},	
		{0, 0, 0, 9,	0, 0, 9, 0,		0, 0, 0, 9,		0, 0, 9, 0}
		
	};

	short snare_S3[20][16] =
	{
		{0, 0, 0, 0,	9, 0, 0, 0,		0, 0, 0, 0,		9, 0, 0, 0},	//L1
		{0, 0, 0, 0,	9, 0, 0, 0,		0, 0, 0, 0,		9, 0, 0, 5},
		{0, 5, 0, 0,	9, 0, 0, 0,		0, 0, 0, 0,		9, 0, 0, 0},
		{0, 0, 0, 0,	9, 7, 0, 0,		0, 0, 0, 0,		9, 0, 0, 0},
		{0, 0, 0, 0,	9, 0, 0, 0,		0, 0, 0, 0,		9, 7, 0, 0},
		{0, 0, 0, 0,	9, 0, 0, 0,		0, 0, 0, 0,		9, 0, 5, 7},	//L2
		{0, 0, 0, 0,	9, 0, 0, 7,		0, 5, 0, 0,		9, 0, 0, 7},
		{0, 0, 0, 0,	9, 0, 0, 5,		0, 0, 0, 0,		9, 0, 5, 0},
		{0, 0, 0, 0,	9, 0, 5, 7,		0, 0, 0, 0,		9, 0, 5, 0},
		{0, 0, 0, 7,	9, 0, 0, 0,		0, 7, 0, 0,		9, 0, 0, 0},
		{0, 0, 0, 7,	9, 0, 0, 0,		0, 7, 0, 0,		9, 0, 0, 7},	//L3
		{0, 0, 0, 0,	9, 0, 0, 7,		0, 0, 0, 0,		9, 7, 0, 7},
		{0, 0, 4, 0,	9, 7, 5, 0,		0, 7, 0, 0,		9, 0, 0, 0},
		{0, 0, 0, 0,	9, 7, 5, 0,		0, 0, 0, 7,		9, 0, 0, 7},
		{0, 5, 0, 0,	9, 0, 0, 7,		0, 5, 0, 0,		9, 0, 7, 8},
		{0, 0, 0, 0,	9, 0, 0, 0,		0, 0, 0, 0,		9, 3, 5, 7},	//L4
		{0, 0, 0, 0,	9, 0, 0, 7,		0, 5, 3, 0,		9, 0, 0, 7},
		{0, 0, 0, 0,	9, 0, 0, 5,		0, 0, 0, 5,		9, 0, 5, 0},
		{0, 0, 0, 5,	9, 0, 5, 7,		0, 0, 0, 0,		9, 0, 5, 0},
		{0, 0, 5, 7,	9, 0, 0, 0,		0, 7, 0, 0,		9, 5, 0, 0}
	};
	
	short snare_S4[20][16] =
	{
		{0, 0, 0, 0,	9, 0, 0, 0,		0, 0, 0, 0,		9, 0, 0, 0},	//L1
		{0, 0, 0, 0,	9, 0, 0, 0,		0, 0, 0, 0,		9, 0, 0, 5},
		{0, 5, 0, 0,	9, 0, 0, 0,		0, 0, 0, 0,		9, 0, 0, 0},
		{0, 0, 0, 0,	9, 7, 0, 0,		0, 0, 0, 0,		9, 0, 0, 0},
		{0, 0, 0, 0,	9, 0, 0, 0,		0, 0, 0, 0,		9, 7, 0, 0},
		{0, 0, 0, 0,	9, 0, 0, 0,		0, 0, 0, 0,		9, 0, 5, 7},	//L2
		{0, 0, 0, 0,	9, 0, 0, 7,		0, 5, 0, 0,		9, 0, 0, 7},
		{0, 0, 0, 0,	9, 0, 0, 5,		0, 0, 0, 0,		9, 0, 5, 0},
		{0, 0, 0, 0,	9, 0, 5, 7,		0, 0, 0, 0,		9, 0, 5, 0},
		{0, 0, 0, 7,	9, 0, 0, 0,		0, 7, 0, 0,		9, 0, 0, 0},
		{0, 0, 0, 7,	9, 0, 0, 0,		0, 7, 0, 0,		9, 0, 0, 7},	//L3
		{0, 0, 0, 0,	9, 0, 0, 7,		0, 0, 0, 0,		9, 7, 0, 7},
		{0, 0, 4, 0,	9, 7, 5, 0,		0, 7, 0, 0,		9, 0, 0, 0},
		{0, 0, 0, 0,	9, 7, 5, 0,		0, 0, 0, 7,		9, 0, 0, 7},
		{0, 5, 0, 0,	9, 0, 0, 7,		0, 5, 0, 0,		9, 0, 7, 8},
		{0, 0, 0, 0,	9, 0, 0, 0,		0, 0, 0, 0,		9, 3, 5, 7},	//L4
		{0, 0, 0, 0,	9, 0, 0, 7,		0, 5, 3, 0,		9, 0, 0, 7},
		{0, 0, 0, 0,	9, 0, 0, 5,		0, 0, 0, 5,		9, 0, 5, 0},
		{0, 0, 0, 5,	9, 0, 5, 7,		0, 0, 0, 0,		9, 0, 5, 0},
		{0, 0, 5, 7,	9, 0, 0, 0,		0, 7, 0, 0,		9, 5, 0, 0}
	};

	//Hi Hat

	short hh_S1[20][16] = 
	{
		{0, 0, 4, 0,	0, 0, 4, 0,		0, 0, 4, 0,		0, 0, 4, 0},	//L1
		{0, 0, 4, 0,	0, 0, 4, 0,		0, 0, 4, 0,		0, 0, 9, 1},
		{0, 0, 4, 0,	0, 0, 3, 4,		0, 0, 4, 0,		0, 0, 9, 1},
		{0, 0, 4, 0,	0, 0, 4, 0,		0, 0, 4, 0,		0, 0, 3, 4},
		{0, 0, 4, 0,	0, 0, 3, 9,		1, 0, 4, 0,		0, 0, 3, 4},
		{4, 0, 8, 1,	4, 0, 8, 1,		4, 0, 8, 1,		4, 0, 8, 1},	//L2
		{4, 0, 4, 8,	4, 0, 8, 1,		4, 0, 3, 2,		2, 0, 8, 1},
		{4, 3, 2, 0,	4, 0, 8, 1,		4, 3, 2, 0,		4, 0, 4, 0},
		{4, 3, 2, 0,	4, 0, 4, 0,		8, 1, 4, 0,		2, 0, 3, 0},
		{0, 0, 8, 1,	4, 0, 8, 1,		4, 0, 4, 8,		4, 0, 8, 1},
		{2, 0, 4, 8,	3, 0, 4, 0,		2, 0, 4, 0,		2, 0, 8, 1},	//L3
		{2, 0, 3, 4,	2, 0, 4, 8,		2, 0, 3, 4,		2, 0, 8, 1},
		{2, 0, 4, 0,	2, 0, 4, 8,		2, 0, 4, 0,		2, 0, 8, 1},
		{2, 0, 4, 0,	2, 8, 4, 0,		2, 0, 4, 0,		2, 0, 8, 1},
		{2, 0, 8, 1,	2, 0, 4, 8,		2, 0, 8, 1,		2, 0, 3, 4},
		{4, 3, 2, 2,	4, 3, 2, 2,		4, 3, 2, 2,		4, 3, 2, 2},	//L4
		{3, 3, 4, 8,	3, 3, 4, 8,		3, 3, 4, 8,		3, 3, 4, 8},
		{4, 3, 2, 2,	4, 3, 2, 2,		4, 3, 2, 0,		4, 3, 2, 0},
		{4, 3, 2, 2,	4, 3, 2, 2,		4, 3, 8, 0,		4, 3, 2, 0},
		{4, 3, 2, 2,	4, 3, 8, 1,		4, 3, 2, 0,		4, 0, 8, 1}
	};

	short hh_S2[20][16] =
	{
		{0, 0, 4, 0,	0, 0, 4, 0,		0, 0, 4, 0,		0, 0, 4, 0},	//L1
		{0, 0, 4, 0,	0, 0, 4, 0,		0, 0, 4, 0,		0, 0, 9, 1},
		{0, 0, 4, 0,	0, 0, 3, 4,		0, 0, 4, 0,		0, 0, 9, 1},
		{0, 0, 4, 0,	0, 0, 4, 0,		0, 0, 4, 0,		0, 0, 3, 4},
		{0, 0, 4, 0,	0, 0, 3, 9,		1, 0, 4, 0,		0, 0, 3, 4},
		{4, 0, 8, 1,	4, 0, 8, 1,		4, 0, 8, 1,		4, 0, 8, 1},	//L2
		{4, 0, 4, 8,	4, 0, 8, 1,		4, 0, 3, 2,		2, 0, 8, 1},
		{4, 3, 2, 0,	4, 0, 8, 1,		4, 3, 2, 0,		4, 0, 4, 0},
		{4, 3, 2, 0,	4, 0, 4, 0,		8, 1, 4, 0,		2, 0, 3, 0},
		{0, 0, 8, 1,	4, 0, 8, 1,		4, 0, 4, 8,		4, 0, 8, 1},
		{2, 0, 4, 8,	3, 0, 4, 0,		2, 0, 4, 0,		2, 0, 8, 1},	//L3
		{2, 0, 3, 4,	2, 0, 4, 8,		2, 0, 3, 4,		2, 0, 8, 1},
		{2, 0, 4, 0,	2, 0, 4, 8,		2, 0, 4, 0,		2, 0, 8, 1},
		{2, 0, 4, 0,	2, 8, 4, 0,		2, 0, 4, 0,		2, 0, 8, 1},
		{2, 0, 8, 1,	2, 0, 4, 8,		2, 0, 8, 1,		2, 0, 3, 4},
		{4, 3, 2, 2,	4, 3, 2, 2,		4, 3, 2, 2,		4, 3, 2, 2},	//L4
		{3, 3, 4, 8,	3, 3, 4, 8,		3, 3, 4, 8,		3, 3, 4, 8},
		{4, 3, 2, 2,	4, 3, 2, 2,		4, 3, 2, 0,		4, 3, 2, 0},
		{4, 3, 2, 2,	4, 3, 2, 2,		4, 3, 8, 0,		4, 3, 2, 0},
		{4, 3, 2, 2,	4, 3, 8, 1,		4, 3, 2, 0,		4, 0, 8, 1}
	};

	short hh_S3[20][16] =
	{
		{0, 0, 4, 0,	0, 0, 4, 0,		0, 0, 4, 0,		0, 0, 4, 0},	//L1
		{0, 0, 4, 0,	0, 0, 4, 0,		0, 0, 4, 0,		0, 0, 9, 1},
		{0, 0, 4, 0,	0, 0, 3, 4,		0, 0, 4, 0,		0, 0, 9, 1},
		{0, 0, 4, 0,	0, 0, 4, 0,		0, 0, 4, 0,		0, 0, 3, 4},
		{0, 0, 4, 0,	0, 0, 3, 9,		1, 0, 4, 0,		0, 0, 3, 4},
		{4, 0, 8, 1,	4, 0, 8, 1,		4, 0, 8, 1,		4, 0, 8, 1},	//L2
		{4, 0, 4, 8,	4, 0, 8, 1,		4, 0, 3, 2,		2, 0, 8, 1},
		{4, 3, 2, 0,	4, 0, 8, 1,		4, 3, 2, 0,		4, 0, 4, 0},
		{4, 3, 2, 0,	4, 0, 4, 0,		8, 1, 4, 0,		2, 0, 3, 0},
		{0, 0, 8, 1,	4, 0, 8, 1,		4, 0, 4, 8,		4, 0, 8, 1},
		{2, 0, 4, 8,	3, 0, 4, 0,		2, 0, 4, 0,		2, 0, 8, 1},	//L3
		{2, 0, 3, 4,	2, 0, 4, 8,		2, 0, 3, 4,		2, 0, 8, 1},
		{2, 0, 4, 0,	2, 0, 4, 8,		2, 0, 4, 0,		2, 0, 8, 1},
		{2, 0, 4, 0,	2, 8, 4, 0,		2, 0, 4, 0,		2, 0, 8, 1},
		{2, 0, 8, 1,	2, 0, 4, 8,		2, 0, 8, 1,		2, 0, 3, 4},
		{4, 3, 2, 2,	4, 3, 2, 2,		4, 3, 2, 2,		4, 3, 2, 2},	//L4
		{3, 3, 4, 8,	3, 3, 4, 8,		3, 3, 4, 8,		3, 3, 4, 8},
		{4, 3, 2, 2,	4, 3, 2, 2,		4, 3, 2, 0,		4, 3, 2, 0},
		{4, 3, 2, 2,	4, 3, 2, 2,		4, 3, 8, 0,		4, 3, 2, 0},
		{4, 3, 2, 2,	4, 3, 8, 1,		4, 3, 2, 0,		4, 0, 8, 1}
	};

	short hh_S4[20][16] =
	{
		{0, 0, 4, 0,	0, 0, 4, 0,		0, 0, 4, 0,		0, 0, 4, 0},	//L1
		{0, 0, 4, 0,	0, 0, 4, 0,		0, 0, 4, 0,		0, 0, 9, 1},
		{0, 0, 4, 0,	0, 0, 3, 4,		0, 0, 4, 0,		0, 0, 9, 1},
		{0, 0, 4, 0,	0, 0, 4, 0,		0, 0, 4, 0,		0, 0, 3, 4},
		{0, 0, 4, 0,	0, 0, 3, 9,		1, 0, 4, 0,		0, 0, 3, 4},
		{4, 0, 8, 1,	4, 0, 8, 1,		4, 0, 8, 1,		4, 0, 8, 1},	//L2
		{4, 0, 4, 8,	4, 0, 8, 1,		4, 0, 3, 2,		2, 0, 8, 1},
		{4, 3, 2, 0,	4, 0, 8, 1,		4, 3, 2, 0,		4, 0, 4, 0},
		{4, 3, 2, 0,	4, 0, 4, 0,		8, 1, 4, 0,		2, 0, 3, 0},
		{0, 0, 8, 1,	4, 0, 8, 1,		4, 0, 4, 8,		4, 0, 8, 1},
		{2, 0, 4, 8,	3, 0, 4, 0,		2, 0, 4, 0,		2, 0, 8, 1},	//L3
		{2, 0, 3, 4,	2, 0, 4, 8,		2, 0, 3, 4,		2, 0, 8, 1},
		{2, 0, 4, 0,	2, 0, 4, 8,		2, 0, 4, 0,		2, 0, 8, 1},
		{2, 0, 4, 0,	2, 8, 4, 0,		2, 0, 4, 0,		2, 0, 8, 1},
		{2, 0, 8, 1,	2, 0, 4, 8,		2, 0, 8, 1,		2, 0, 3, 4},
		{4, 3, 2, 2,	4, 3, 2, 2,		4, 3, 2, 2,		4, 3, 2, 2},	//L4
		{3, 3, 4, 8,	3, 3, 4, 8,		3, 3, 4, 8,		3, 3, 4, 8},
		{4, 3, 2, 2,	4, 3, 2, 2,		4, 3, 2, 0,		4, 3, 2, 0},
		{4, 3, 2, 2,	4, 3, 2, 2,		4, 3, 8, 0,		4, 3, 2, 0},
		{4, 3, 2, 2,	4, 3, 8, 1,		4, 3, 2, 0,		4, 0, 8, 1}
	};

	//Crash

	short crash_AllS[20][16] = 
	{
		{0, 0, 0, 0,	0, 0, 0, 0,		0, 0, 0, 0,		0, 0, 0, 0},	//L1
		{0, 0, 0, 0,	0, 0, 0, 0,		0, 0, 0, 0,		0, 0, 0, 0},	
		{0, 0, 0, 0,	0, 0, 0, 0,		0, 0, 0, 0,		0, 0, 0, 0},	
		{0, 0, 0, 0,	0, 0, 0, 0,		0, 0, 0, 0,		0, 0, 0, 0},	
		{0, 0, 0, 0,	0, 0, 0, 0,		0, 0, 0, 0,		0, 0, 0, 0},	
		{9, 0, 0, 0,	0, 0, 0, 0,		0, 0, 0, 0,		0, 0, 0, 0},	//L2
		{9, 0, 0, 0,	0, 0, 0, 0,		0, 0, 0, 0,		0, 0, 0, 0},
		{9, 0, 0, 0,	0, 0, 0, 0,		0, 0, 0, 0,		0, 0, 0, 0},
		{9, 0, 0, 0,	0, 0, 0, 0,		0, 0, 0, 0,		0, 0, 0, 0},
		{9, 0, 0, 0,	0, 0, 0, 0,		0, 0, 0, 0,		0, 0, 0, 0},
		{9, 0, 0, 0,	0, 0, 0, 0,		0, 0, 0, 0,		0, 0, 0, 0},	//L3
		{9, 0, 0, 0,	0, 0, 0, 0,		0, 0, 0, 0,		0, 0, 0, 0},
		{9, 0, 0, 0,	0, 0, 0, 0,		0, 0, 0, 0,		0, 0, 0, 0},
		{9, 0, 0, 0,	0, 0, 0, 0,		0, 0, 0, 0,		0, 0, 0, 0},
		{9, 0, 0, 0,	0, 0, 0, 0,		0, 0, 0, 0,		0, 0, 0, 0},
		{9, 0, 0, 0,	0, 0, 0, 0,		0, 0, 0, 0,		0, 0, 0, 0},	//L4
		{9, 0, 0, 0,	0, 0, 0, 0,		0, 0, 0, 0,		0, 0, 0, 0},
		{9, 0, 0, 0,	0, 0, 0, 0,		0, 0, 0, 0,		0, 0, 0, 0},
		{9, 0, 0, 0,	0, 0, 0, 0,		0, 0, 0, 0,		0, 0, 0, 0},
		{9, 0, 0, 0,	0, 0, 0, 0,		0, 0, 0, 0,		0, 0, 0, 0},
	};

	//Riff

	short riffVel_S1[20][16] =
	{
		{9, 0, 0, 9,    0, 0, 9, 0,     9, 0, 0, 9,    0, 0, 9, 0},
		{9, 0, 0, 9,    0, 0, 9, 0,     9, 0, 0, 9,    0, 0, 9, 0},
		{9, 0, 0, 9,    0, 0, 9, 0,     9, 0, 0, 9,    0, 0, 9, 0},
		{9, 0, 0, 9,    0, 0, 9, 0,     9, 0, 0, 9,    0, 0, 9, 0},
		{9, 0, 0, 9,    0, 0, 9, 0,     9, 0, 0, 9,    0, 0, 9, 0},
		{9, 0, 0, 9,    0, 0, 9, 0,     9, 0, 0, 9,    0, 0, 9, 0},
		{9, 0, 0, 9,    0, 0, 9, 0,     9, 0, 0, 9,    0, 0, 9, 0},
		{9, 0, 0, 9,    0, 0, 9, 0,     9, 0, 0, 9,    0, 0, 9, 0},
		{9, 0, 0, 9,    0, 0, 9, 0,     9, 0, 0, 9,    0, 0, 9, 0},
		{9, 0, 0, 9,    0, 0, 9, 0,     9, 0, 0, 9,    0, 0, 9, 0},
		{9, 0, 0, 9,    0, 0, 9, 0,     9, 0, 0, 9,    0, 0, 9, 0},
		{9, 0, 0, 9,    0, 0, 9, 0,     9, 0, 0, 9,    0, 0, 9, 0},
		{9, 0, 0, 9,    0, 0, 9, 0,     9, 0, 0, 9,    0, 0, 9, 0},
		{9, 0, 0, 9,    0, 0, 9, 0,     9, 0, 0, 9,    0, 0, 9, 0},
		{9, 0, 0, 9,    0, 0, 9, 0,     9, 0, 0, 9,    0, 0, 9, 0},
		{9, 0, 0, 9,    0, 0, 9, 0,     9, 0, 0, 9,    0, 0, 9, 0},
		{9, 0, 0, 9,    0, 0, 9, 0,     9, 0, 0, 9,    0, 0, 9, 0},
		{9, 0, 0, 9,    0, 0, 9, 0,     9, 0, 0, 9,    0, 0, 9, 0},
		{9, 0, 0, 9,    0, 0, 9, 0,     9, 0, 0, 9,    0, 0, 9, 0},
		{9, 0, 0, 9,    0, 0, 9, 0,     9, 0, 0, 9,    0, 0, 9, 0}
	};

	//short riffVel_S1[20][16] = 
	//{
	//	{9, 0, 5, 0,	9, 0, 5, 0,		9, 0, 5, 0,		9, 0, 5, 0},	//L1
	//	{9, 0, 5, 0,	9, 0, 7, 0,		9, 0, 5, 0,		9, 7, 5, 0},
	//	{9, 0, 5, 0,	9, 0, 5, 0,		9, 0, 9, 0,		9, 0, 9, 0},
	//	{9, 0, 5, 0,	9, 0, 5, 8,		9, 0, 5, 0,		9, 0, 7, 0},
	//	{9, 0, 0, 7,	9, 0, 9, 0,		9, 0, 7, 0,		9, 0, 7, 0},
	//	{9, 0, 5, 0,	9, 0, 7, 0,		9, 0, 0, 9,		0, 0, 9, 0},	//L2
	//	{9, 0, 5, 0,	9, 0, 7, 0,		9, 0, 0, 6,		9, 0, 9, 0},
	//	{9, 0, 0, 9,	0, 0, 9, 0,		9, 0, 7, 0,		9, 0, 7, 0},
	//	{9, 0, 0, 9,	0, 0, 9, 0,		9, 0, 7, 8,		9, 0, 7, 0},
	//	{9, 0, 0, 9,	0, 0, 9, 0,		9, 0, 0, 9,		0, 0, 9, 7},
	//	{9, 0, 0, 9,	0, 0, 9, 7,		9, 0, 7, 0,		9, 0, 7, 0},	//L3
	//	{9, 0, 0, 9,	0, 0, 9, 7,		9, 0, 0, 9,		0, 0, 3, 7},
	//	{9, 0, 0, 9,	9, 0, 0, 7,		9, 0, 0, 9,		0, 0, 3, 7},
	//	{9, 0, 0, 9,	0, 0, 9, 0,		9, 0, 0, 9,		9, 0, 9, 7},
	//	{9, 0, 5, 0,	9, 7, 0, 0,		9, 0, 0, 7,		9, 0, 0, 7},
	//	{9, 0, 0, 9,	0, 0, 9, 7,		9, 0, 0, 9,		0, 0, 3, 7},	//L4
	//	{9, 0, 0, 9,	9, 0, 0, 7,		9, 0, 0, 9,		0, 0, 3, 7},
	//	{9, 0, 0, 9,	0, 0, 9, 0,		9, 0, 0, 9,		9, 0, 9, 7},
	//	{9, 0, 5, 0,	9, 0, 5, 0,		9, 0, 0, 7,		9, 0, 7, 0},
	//	{9, 0, 5, 0,	9, 7, 0, 0,		9, 0, 0, 7,		9, 0, 0, 7}
	//};

	short riffVel_S2[20][16] =
	{
		{9, 0, 0, 9,    0, 0, 9, 0,     9, 0, 0, 9,    0, 0, 9, 0},
		{9, 0, 0, 9,    0, 0, 9, 0,     9, 0, 0, 9,    0, 0, 9, 0},
		{9, 0, 0, 9,    0, 0, 9, 0,     9, 0, 0, 9,    0, 0, 9, 0},
		{9, 0, 0, 9,    0, 0, 9, 0,     9, 0, 0, 9,    0, 0, 9, 0},
		{9, 0, 0, 9,    0, 0, 9, 0,     9, 0, 0, 9,    0, 0, 9, 0},
		{9, 0, 0, 9,    0, 0, 9, 0,     9, 0, 0, 9,    0, 0, 9, 0},
		{9, 0, 0, 9,    0, 0, 9, 0,     9, 0, 0, 9,    0, 0, 9, 0},
		{9, 0, 0, 9,    0, 0, 9, 0,     9, 0, 0, 9,    0, 0, 9, 0},
		{9, 0, 0, 9,    0, 0, 9, 0,     9, 0, 0, 9,    0, 0, 9, 0},
		{9, 0, 0, 9,    0, 0, 9, 0,     9, 0, 0, 9,    0, 0, 9, 0},
		{9, 0, 0, 9,    0, 0, 9, 0,     9, 0, 0, 9,    0, 0, 9, 0},
		{9, 0, 0, 9,    0, 0, 9, 0,     9, 0, 0, 9,    0, 0, 9, 0},
		{9, 0, 0, 9,    0, 0, 9, 0,     9, 0, 0, 9,    0, 0, 9, 0},
		{9, 0, 0, 9,    0, 0, 9, 0,     9, 0, 0, 9,    0, 0, 9, 0},
		{9, 0, 0, 9,    0, 0, 9, 0,     9, 0, 0, 9,    0, 0, 9, 0},
		{9, 0, 0, 9,    0, 0, 9, 0,     9, 0, 0, 9,    0, 0, 9, 0},
		{9, 0, 0, 9,    0, 0, 9, 0,     9, 0, 0, 9,    0, 0, 9, 0},
		{9, 0, 0, 9,    0, 0, 9, 0,     9, 0, 0, 9,    0, 0, 9, 0},
		{9, 0, 0, 9,    0, 0, 9, 0,     9, 0, 0, 9,    0, 0, 9, 0},
		{9, 0, 0, 9,    0, 0, 9, 0,     9, 0, 0, 9,    0, 0, 9, 0}
	};

	short riffVel_S3[20][16] =
	{
		{9, 0, 0, 0,	9, 0, 0, 0,		9, 0, 0, 0,		9, 0, 0, 0},
		{9, 0, 0, 0,	9, 0, 0, 0,		9, 0, 0, 6,		9, 0, 9, 0},
		{9, 0, 0, 0,	9, 0, 0, 0,		9, 0, 0, 9,		9, 0, 9, 6},
		{9, 0, 0, 0,	9, 6, 0, 0,		9, 0, 0, 9,		9, 0, 9, 0},
		{9, 0, 0, 6,	9, 0, 0, 0,		9, 0, 0, 6,		9, 0, 9, 0},
		{9, 0, 0, 0,	9, 0, 0, 0,		9, 0, 0, 6,		9, 0, 0, 6},
		{9, 0, 0, 0,	7, 9, 0, 7,		9, 0, 0, 6,		9, 0, 9, 0},
		{9, 0, 0, 9,	0, 0, 9, 0,		9, 0, 0, 9,		0, 0, 9, 0},
		{9, 0, 0, 9,	0, 0, 9, 0,		9, 0, 0, 9,		0, 0, 9, 7},
		{9, 0, 0, 9,	0, 0, 9, 7,		9, 0, 0, 9,		0, 0, 9, 0},
		{9, 0, 0, 9,	0, 0, 9, 7,		9, 0, 0, 9,		0, 0, 3, 7},
		{9, 0, 0, 9,	9, 0, 0, 7,		9, 0, 0, 9,		0, 0, 3, 7},
		{9, 0, 0, 9,	0, 0, 9, 0,		9, 0, 0, 9,		9, 0, 9, 7},
		{9, 0, 5, 0,	9, 0, 5, 0,		9, 0, 0, 7,		9, 0, 7, 0},
		{9, 0, 5, 0,	9, 7, 0, 0,		9, 0, 0, 7,		9, 0, 0, 7},
		{9, 0, 0, 9,	0, 0, 9, 7,		9, 0, 0, 9,		0, 0, 3, 7},
		{9, 0, 0, 9,	9, 0, 0, 7,		9, 0, 0, 9,		0, 0, 3, 7},
		{9, 0, 0, 9,	0, 0, 9, 0,		9, 0, 0, 9,		9, 0, 9, 7},
		{9, 0, 5, 0,	9, 0, 5, 0,		9, 0, 0, 7,		9, 0, 7, 0},
		{9, 0, 5, 0,	9, 7, 0, 0,		9, 0, 0, 7,		9, 0, 0, 7}
	};

	short riffVel_S4[20][16] =
	{
		{9, 0, 0, 0,	9, 0, 0, 0,		9, 0, 0, 0,		9, 0, 0, 0},
		{9, 0, 0, 0,	9, 0, 0, 0,		9, 0, 0, 6,		9, 0, 9, 0},
		{9, 0, 0, 0,	9, 0, 0, 0,		9, 0, 0, 9,		9, 0, 9, 6},
		{9, 0, 0, 0,	9, 6, 0, 0,		9, 0, 0, 9,		9, 0, 9, 0},
		{9, 0, 0, 6,	9, 0, 0, 0,		9, 0, 0, 6,		9, 0, 9, 0},
		{9, 0, 0, 0,	9, 0, 0, 0,		9, 0, 0, 6,		9, 0, 0, 6},
		{9, 0, 0, 0,	7, 9, 0, 7,		9, 0, 0, 6,		9, 0, 9, 0},
		{9, 0, 0, 9,	0, 0, 9, 0,		9, 0, 0, 9,		0, 0, 9, 0},
		{9, 0, 0, 9,	0, 0, 9, 0,		9, 0, 0, 9,		0, 0, 9, 7},
		{9, 0, 0, 9,	0, 0, 9, 7,		9, 0, 0, 9,		0, 0, 9, 0},
		{9, 0, 0, 9,	0, 0, 9, 7,		9, 0, 0, 9,		0, 0, 3, 7},
		{9, 0, 0, 9,	9, 0, 0, 7,		9, 0, 0, 9,		0, 0, 3, 7},
		{9, 0, 0, 9,	0, 0, 9, 0,		9, 0, 0, 9,		9, 0, 9, 7},
		{9, 0, 5, 0,	9, 0, 5, 0,		9, 0, 0, 7,		9, 0, 7, 0},
		{9, 0, 5, 0,	9, 7, 0, 0,		9, 0, 0, 7,		9, 0, 0, 7},
		{9, 0, 0, 9,	0, 0, 9, 7,		9, 0, 0, 9,		0, 0, 3, 7},
		{9, 0, 0, 9,	9, 0, 0, 7,		9, 0, 0, 9,		0, 0, 3, 7},
		{9, 0, 0, 9,	0, 0, 9, 0,		9, 0, 0, 9,		9, 0, 9, 7},
		{9, 0, 5, 0,	9, 0, 5, 0,		9, 0, 0, 7,		9, 0, 7, 0},
		{9, 0, 5, 0,	9, 7, 0, 0,		9, 0, 0, 7,		9, 0, 0, 7}
	};

	short riffOct[5][16] =
	{
		{0, 0, 0, 0,	0, 0, 0, 0,		0, 0, 0, 0,		0, 0, 0, 0},
		{0, 0, 0, 0,	0, 0, 0, 0,		0, 0, 0, 0,		0, 0, 0, 0},
		{0, 0, 0, 0,	0, 0, 0, 0,		0, 0, 0, 0,		0, 0, 0, 0},
		{0, 0, 0, 0,	0, 0, 0, 0,		0, 0, 0, 0,		0, 0, 0, 0},
		{0, 0, 0, 0,	0, 0, 0, 0,		0, 0, 0, 0,		0, 0, 0, 0}
	};

	//Chord Stabs

	short chordStabsVel_S1[5][16] =
	{
		{9, 0, 0, 9,	0, 0, 9, 0,		9, 0, 0, 9,		0, 0, 9, 0},
		{0, 0, 9, 0,	0, 9, 0, 0,		9, 0, 0, 9,		0, 0, 9, 0},
		{0, 0, 9, 0,	0, 9, 0, 0,		9, 0, 0, 9,		0, 0, 7, 9},
		{0, 0, 9, 0,	0, 0, 9, 0,		0, 0, 9, 0,		0, 0, 9, 0},
		{0, 9, 0, 0,	9, 0, 0, 9,		0, 9, 0, 0,		9, 0, 0, 9}		
	};

	short chordStabsVel_S2[5][16] =
	{
		{9, 0, 0, 9,	0, 0, 9, 0,		9, 0, 0, 9,		0, 0, 9, 0},
		{0, 0, 9, 0,	0, 9, 0, 0,		9, 0, 0, 9,		0, 0, 9, 0},
		{0, 0, 9, 0,	0, 9, 0, 0,		9, 0, 0, 9,		0, 0, 7, 9},
		{0, 0, 9, 0,	0, 0, 9, 0,		0, 0, 9, 0,		0, 0, 9, 0},
		{0, 9, 0, 0,	9, 0, 0, 9,		0, 9, 0, 0,		9, 0, 0, 9}
	};

	short chordStabsVel_S3[5][16] =
	{
		{9, 0, 0, 9,	0, 0, 9, 0,		9, 0, 0, 9,		0, 0, 9, 0},
		{0, 0, 9, 0,	0, 9, 0, 0,		9, 0, 0, 9,		0, 0, 9, 0},
		{0, 0, 9, 0,	0, 9, 0, 0,		9, 0, 0, 9,		0, 0, 7, 9},
		{0, 0, 9, 0,	0, 0, 9, 0,		0, 0, 9, 0,		0, 0, 9, 0},
		{0, 9, 0, 0,	9, 0, 0, 9,		0, 9, 0, 0,		9, 0, 0, 9}
	};

	short chordStabsVel_S4[5][16] =
	{
		{9, 0, 0, 9,	0, 0, 9, 0,		9, 0, 0, 9,		0, 0, 9, 0},
		{0, 0, 9, 0,	0, 9, 0, 0,		9, 0, 0, 9,		0, 0, 9, 0},
		{0, 0, 9, 0,	0, 9, 0, 0,		9, 0, 0, 9,		0, 0, 7, 9},
		{0, 0, 9, 0,	0, 0, 9, 0,		0, 0, 9, 0,		0, 0, 9, 0},
		{0, 9, 0, 0,	9, 0, 0, 9,		0, 9, 0, 0,		9, 0, 0, 9}
	};

	//Arpeggiator

	short arpDegrees[10][16]
	{
		{1, 1, 2, 2,	3, 3, 2, 2,		4, 4, 3, 3,		2, 2, 1, 1},
		{1, 1, 2, 2,	3, 3, 4, 4,		1, 1, 2, 2,		3, 3, 4, 4},
		{4, 4, 3, 3,	2, 2, 1, 1,		4, 4, 3, 3,		2, 2, 1, 1},
		{1, 1, 2, 3,	4, 4, 3, 3,		2, 2, 3, 3,		4, 4, 3, 3},
		{1, 1, 2, 2,	4, 4, 2, 2,		1, 1, 2, 2,		4, 4, 2, 2},
		{1, 1, 4, 4,	3, 3, 2, 2,		4, 4, 3, 3,		2, 2, 4, 4},
		{1, 1, 2, 2,	3, 3, 2, 2,		4, 3, 3, 3,		2, 2, 3, 1},
		{1, 1, 2, 2,	3, 3, 1, 1,		2, 2, 3, 3,		1, 1, 2, 2},
		{1, 1, 2, 2,	3, 3, 2, 2,		4, 4, 3, 3,		2, 2, 3, 3},
		{4, 4, 3, 3,	1, 1, 2, 2,		4, 4, 3, 3,		1, 1, 2, 2}
	};

	short arpVelocities[5][16]
	{
		{7, 0, 4, 0,	8, 0, 5, 0,		9, 0, 5, 0,		9, 0, 6, 0},
		{7, 0, 4, 0,	8, 7, 5, 0,		9, 0, 5, 0,		9, 0, 6, 0},
		{7, 0, 4, 0,	8, 0, 5, 0,		9, 7, 5, 0,		9, 0, 6, 0},
		{9, 0, 7, 0,	5, 0, 9, 0,		7, 0, 5, 0,		9, 0, 6, 0},
		{9, 0, 7, 0,	5, 0, 9, 0,		7, 4, 5, 0,		9, 0, 6, 0}	
	};
};