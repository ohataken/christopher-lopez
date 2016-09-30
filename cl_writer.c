#include "cl_writer.h"

void cl_write_move_cursor_relative_horizontal(int fd, int col) {
    char buffer[16];
    int length = 0;

    strcpy(buffer + length, "\033[");
    length += 2;

    if (0 < col) {
        strcpy(buffer + length, "4");
        length += 1;
        strcpy(buffer + length, "C");
        length += 1;
    } else if (col < 0) {
        strcpy(buffer + length, "4");
        length += 1;
        strcpy(buffer + length, "D");
        length += 1;
    } else {
        return;
    }

    write(fd, buffer, length);
}
