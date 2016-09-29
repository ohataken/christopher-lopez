#ifndef CL_TERMSIZE
#define CL_TERMSIZE

#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/ioctl.h>

struct winsize cl_termsize;

void cl_termsize_update();

int cl_termsize_row();

int cl_termsize_col();

#endif
