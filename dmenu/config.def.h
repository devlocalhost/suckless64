/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"JetBrainsMono-Regular:size=10"
};
static const char *prompt = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*                           fg         bg       */
	[SchemeSelHighlight]  = { "#ffffff", "#7289da" },
	[SchemeNormHighlight] = { "#ffffff", "#242424" },

	[SchemeSel]           = { "#242424", "#7289da" },
	[SchemeNorm]          = { "#cccccc", "#242424" },
	[SchemeOut]           = { "#242424", "#7289da" },
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 17;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static const unsigned int border_width = 4;
