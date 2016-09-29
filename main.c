#include "cl_termsize.h"
#include "cl_termconf.h"
#include "cl_termenv.h"
#include "cl_termctrl.h"

int main(void) {
    int ttyfd = open("/dev/tty", O_RDWR);
    cl_termsize_update();
    cl_termconf_mode(ttyfd);
    cl_termenv_init();
    write(ttyfd, cl_termctrl(SMCUP), sizeof(cl_termctrl(SMCUP)));
    sleep(3);
    write(ttyfd, cl_termctrl(RMCUP), sizeof(cl_termctrl(RMCUP)));
    cl_termconf_mode_reset(ttyfd);
    return 0;
}
