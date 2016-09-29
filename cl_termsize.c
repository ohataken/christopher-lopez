#include "cl_termsize.h"

void cl_termsize_update() {
    ioctl(STDIN_FILENO, TIOCGWINSZ, &cl_termsize);
}

int cl_termsize_row() {
    return cl_termsize.ws_row;
}

int cl_termsize_col() {
    return cl_termsize.ws_col;
}
