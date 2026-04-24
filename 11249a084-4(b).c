#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main()
{
    pid_t pid;

    pid = fork();

    if (pid == 0) {
        printf("Child process executing\n");
        sleep(2);
        printf("Child process exiting\n");
    } else {
        wait(NULL);
        printf("Parent process resumed after child termination\n");
    }

    return 0;
}
