/* user and group to drop privileges to */
static const char *user  = "bryce";
static const char *group = "bryce";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#ddcd82",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
	[CAPS] = "red",         /* CapsLock on */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* time in seconds to cancel lock with mouse movement */
static const int timetocancel = 10;

/* default message */
static const char * message = "Please enter your password";

/* text color */
static const char * text_color = "#222222";

/* text size (must be a valid size) */
static const char * font_name = "9x15";

/* time in seconds before the monitor shuts down */
static const int monitortime = 5;
