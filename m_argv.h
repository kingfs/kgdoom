#ifndef __M_ARGV__
#define __M_ARGV__

//
// MISC
//
extern  int	myargc;
extern  char**	myargv;

// Returns the position of the given parameter
// in the arg list (0 if not found).
int M_CheckParm (char* check);


#endif

