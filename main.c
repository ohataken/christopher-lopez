#include "cl_termsize.h"
#include "cl_termconf.h"

int main(void) {
    int ttyfd = open("/dev/tty", O_RDWR);
    cl_termsize_update();
    cl_termconf_mode(ttyfd);
    printf("height: %d\r\n", cl_termsize_row());
    printf("width: %d\r\n", cl_termsize_col());
    sleep(3);
    cl_termconf_mode_reset(ttyfd);
    return 0;
}
