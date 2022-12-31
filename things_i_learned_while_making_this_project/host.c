#include <stdio.h>
#include <sys/utsname.h>
#include <unistd.h>
int main() {
    struct utsname uts;
    uname(&uts);
    printf("%s", uts.sysname);
}
