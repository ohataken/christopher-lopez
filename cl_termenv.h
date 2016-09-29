#ifndef CL_TERMENV
#define CL_TERMENV

#include <stdlib.h>
#include <string.h>

enum {
    CL_SCREEN,
    CL_XTERM,
    CL_XTERM_256COLOR,
};

int cl_termenv;

void cl_termenv_init();

#endif
