#include "cl_termenv.h"

void cl_termenv_init() {
    char *term = getenv("TERM");

    if (strcmp(term, "screen") == 0) {
        cl_termenv = CL_SCREEN;
    } else if (strcmp(term, "xterm") == 0) {
        cl_termenv = CL_XTERM;
    } else if (strcmp(term, "xterm-256color")) {
        cl_termenv = CL_XTERM_256COLOR;
    }
}
