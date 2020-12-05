//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/			/*Update Interval*/	/*Update Signal*/
	{"",		"diskspace",		30,					0},
	{"",		"memory",			5,					1},
	{"",		"dwmsound",			0,					10},
	{"",		"dwmbrightness",	0,					12},
	{"",		"battery",			5,					5},

	{"",		"dwmclock",			5,					4},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
