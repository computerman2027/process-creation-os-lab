#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    int p;
    int p2 = 10;
    p = fork();
    if (p == 0)
    {
        printf("p2 1 = %d\n", p2);
        printf("p = %d\n", p);
        printf("Child id : %d\n", getpid());
        printf("Parent id : %d\n", getppid());
    }
    else
    {
        printf("p2 2 = %d\n", p2);
        printf("p 2 = %d\n", p);
        printf("Child 2 id : %d\n", getpid());
        printf("Parent 2 id : %d\n", getppid());
    }

    return 0;
}