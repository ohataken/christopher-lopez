#include "cl_termsize.h"

int main(void) {
    cl_termsize_update();
    printf("height: %d\n", cl_termsize_col());
    return 0;
}
