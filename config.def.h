/* user and group to drop privileges to */
static const char *user  = "vu";
static const char *group = "vu";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#2e3440",     /* after initialization */
	[INPUT] =  "#a3be8c",   /* during input */
	[FAILED] = "#bf616a",   /* wrong password */
	[CAPS] = "#bf616a",         /* CapsLock on */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
