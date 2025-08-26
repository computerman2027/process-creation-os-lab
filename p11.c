#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main(void)
{
    printf("Starter id 1 = %d, parent = %d\n", getpid(), getppid());
    int p;
    p = fork();
    if (p != 0)
        printf("child = %d and parent = %d\n", p, getpid());
    p = fork();
    if (p != 0)
        printf("child = %d and parent = %d\n", p, getpid());
    p = fork();
    if (p != 0)
        printf("child = %d and parent = %d\n", p, getpid());

    // synchronize a bit so all children are created
    sleep(10);

    // Print the process tree of the current process
            char cmd[64];
            sprintf(cmd, "pstree -p %d", getpid());
            printf("\nProcess tree:\n");
            system(cmd);
    

    return 0;
}
