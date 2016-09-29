#ifndef CL_TERMCTRL
#define CL_TERMCTRL

#include "cl_termenv.h"

enum {
    SMCUP,
    RMCUP,
};

char *cl_termctrl(int index);

#endif
