#ifndef CL_TERMCTRL_H
#define CL_TERMCTRL_H

#include "cl_termenv.h"

enum {
    SMCUP,
    RMCUP,
};

char *cl_termctrl(int index);

#endif
