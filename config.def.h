static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#89B4FA",   /* during input */
	[FAILED] = "red",   /* wrong password */
	[CAPS] = "#F38BA8",         /* CapsLock on */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
