//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/  /*Command*/  /*Update Interval*/  /*Update Signal*/
    {"", "sb_cpu", 10, 0},
	{"", "sb_memory", 10, 0},
	{"", "sb_battery", 5, 0},
	{"", "sb_volume", 60, 10},
	{"", "sb_date_time", 1, 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
