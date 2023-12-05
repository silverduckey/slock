/* user and group to drop privileges to */
static const char *user  = "vu";
static const char *group = "vu";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#1e1e2e",     /* after initialization */
	[INPUT] =  "#a6e3a1",   /* during input */
	[FAILED] = "#f38ba8",   /* wrong password */
	[CAPS] = "#eba0ac",         /* CapsLock on */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
