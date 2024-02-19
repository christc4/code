#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Executing 'uname -a':\n");
    system("uname -a");

    printf("\nExecuting 'lsblk':\n");
    system("lsblk");

    return 0;
}
