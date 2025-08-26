#include <stdio.h>
#include <unistd.h>
#include <time.h>

int main()
{
    printf("Starter id = %d\n",getpid());
    fork();
    fork();
    fork();

    printf("PID = %d PPID = %d preparing for EXIT\n", getpid(), getppid());
    sleep(10);
    printf("PID = %d PPID = %d EXIT\n",getpid(),getppid());
    // sleep(1);
    // printf("Hello\n");
}