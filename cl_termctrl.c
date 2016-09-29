#include "cl_termctrl.h"

char *cl_termctrl_screen[] = {
    "\033[?1049h",
    "\033[?1049l",
};

char *cl_termctrl_xterm[] = {
    "\033[?1049h",
    "\033[?1049l",
};

char *cl_termctrl_xterm_256color[] = {
    "\033[?1049h",
    "\033[?1049l",
};

char *cl_termctrl(int index) {
    switch (cl_termenv) {
        case CL_SCREEN:
            return cl_termctrl_screen[index];
        case CL_XTERM:
            return cl_termctrl_xterm[index];
        case CL_XTERM_256COLOR:
            return cl_termctrl_xterm_256color[index];
        default:
            return NULL;
    }
}
