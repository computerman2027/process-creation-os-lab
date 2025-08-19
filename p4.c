#include <stdio.h>
#include <unistd.h>

int main()
{
    printf("Starter id = %d\n",getpid());
    fork();
    fork();
    fork();
    fork();
    fork();
    fork();
    // fork();
    // fork();
    // fork();
    sleep(10);
    printf("PID = %d PPID = %d EXIT\n",getpid(),getppid());
    sleep(15);
    // printf("Hello\n");
}