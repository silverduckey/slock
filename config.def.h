/* user and group to drop privileges to */
static const char *user = "vu";
static const char *group = "vu";

static const char *colorname[NUMCOLS] = {
    [INIT] = "#282828",   /* after initialization */
    [INPUT] = "#98971a",  /* during input */
    [FAILED] = "#cc241d", /* wrong password */
    [CAPS] = "#fb4934",   /* CapsLock on */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
