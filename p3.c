#include <stdio.h>
#include <unistd.h>

int main()
{
    printf("Starter id = %d\n",getpid());
    fork();
    fork();
    fork();

    printf("PID = %d PPID = %d EXIT\n",getpid(),getppid());
    // printf("Hello\n");
}