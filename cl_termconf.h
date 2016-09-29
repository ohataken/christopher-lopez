#ifndef CL_TERMCONF_H
#define CL_TERMCONF_H

#include <fcntl.h>
#include <termios.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>

struct cl_termconf {
    struct termios current;
    struct termios initial;
};

struct cl_termconf cl_termconf;

void cl_termconf_mode(int fd);

void cl_termconf_mode_reset(int fd);

#endif
