/* user and group to drop privileges to */
static const char *user  = "silduck";
static const char *group = "silduck";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#1e1e2e",     /* after initialization */
	[INPUT] =  "#89dceb",   /* during input */
	[FAILED] = "#f38ba8",   /* wrong password */
	[CAPS] = "#eba0ac",         /* CapsLock on */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
