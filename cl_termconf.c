#include "cl_termconf.h"

void cl_termconf_mode(int fd) {
    struct cl_termconf *t = &cl_termconf;

    tcgetattr(fd, &t->initial);
    memcpy(&t->current, &t->initial, sizeof(t->current));

    t->current.c_iflag &= ~IGNBRK;
    t->current.c_iflag &= ~BRKINT;
    t->current.c_iflag &= ~PARMRK;
    t->current.c_iflag &= ~ISTRIP;
    t->current.c_iflag &= ~INLCR;
    t->current.c_iflag &= ~IGNCR;
    t->current.c_iflag &= ~ICRNL;
    t->current.c_iflag &= ~IXON;

    t->current.c_oflag &= ~OPOST;

    t->current.c_lflag &= ~ECHO;
    t->current.c_lflag &= ~ECHONL;
    t->current.c_lflag &= ~ICANON;
    t->current.c_lflag &= ~ISIG;
    t->current.c_lflag &= ~IEXTEN;
    t->current.c_cflag &= CSIZE;
    t->current.c_cflag &= PARENB;
    t->current.c_cflag &= CS8;

    t->current.c_cc[VMIN] = 0;
    t->current.c_cc[VTIME] = 0;

    tcsetattr(fd, TCSAFLUSH, &t->current);
}

void cl_termconf_mode_reset(int fd) {
    tcsetattr(fd, TCSAFLUSH, &cl_termconf.initial);
}
