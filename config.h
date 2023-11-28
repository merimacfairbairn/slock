static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#98971a",   /* during input */
	[FAILED] = "#cc241d",   /* wrong password */
	[CAPS] = "#d65d0e",     /* CapsLock on */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
