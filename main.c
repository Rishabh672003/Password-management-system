#include <stdio.h>

int main() {
    FILE *file_ptr = fopen("/home/rishabh/projects/a.log", "w");
    fprintf(file_ptr, "hello world how are you");
    printf("this program stores and shows passwords");
    fclose(file_ptr);
    return 0;
}
