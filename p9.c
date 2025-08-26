#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main(void)
{
    printf("Starter id 1 = %d, parent = %d\n", getpid(), getppid());
    int p;
    p = fork();
    printf("child = %d and parent = %d\n", p, getpid());
    p = fork();
    printf("child = %d and parent = %d\n", p, getpid());
    p = fork();
    printf("child = %d and parent = %d\n", p, getpid());
    printf("Task complete\n");
    return 0;
}