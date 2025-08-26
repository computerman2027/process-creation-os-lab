#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    printf("Child id : %d\n", getpid());
    int p;
    // p = fork();
    // if (p == 0)
    // {
    //     printf("Child id : %d\n", getpid());
    //     printf("Parent id : %d", getppid());
    // }
    printf("Hi hello");
    sleep(15);
    return 0;
}