#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    int p;
    printf("hllo 1\n");
    p = fork();
    printf("p = %d \n",p);
        printf("Child id : %d\n", getpid());
        printf("Parent id : %d\n", getppid());


    return 0;
}