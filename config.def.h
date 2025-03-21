static const char *colorname[NUMCOLS] = {
	[BACKGROUND] =   "#1e1e2e",     /* after initialization */
	[INIT] =   "#cdd6f4",     /* after initialization */
	[INPUT] =  "#89dceb",   /* during input */
	[INPUT_ALT] = "#89b4fa", /* during input, second color */
	[FAILED] = "#f38ba8",   /* wrong password */
	[CAPS] = "#eba0ac",         /* CapsLock on */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* insert grid pattern with scale 1:1, the size can be changed with logosize */
static const int logosize = 75;
static const int logow = 12;	/* grid width and height for right center alignment*/
static const int logoh = 6;

static XRectangle rectangles[9] = {
	/* x	y	w	h */
	{ 0,	3,	1,	3 },
	{ 1,	3,	2,	1 },
	{ 0,	5,	8,	1 },
	{ 3,	0,	1,	5 },
	{ 5,	3,	1,	2 },
	{ 7,	3,	1,	2 },
	{ 8,	3,	4,	1 },
	{ 9,	4,	1,	2 },
	{ 11,	4,	1,	2 },

};
