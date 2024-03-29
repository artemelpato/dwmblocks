//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
    {"", "volume_status", 10, 10},
    {"", "capacity", 60, 0},
    {"", "connection_status", 30, 0},
	{"󰃶 ", "date '+%b %d (%a)'", 60, 0},
	{"󱑆 ", "date '+%H:%M'", 10, 0},
    {" ", "", 60, 0}
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
