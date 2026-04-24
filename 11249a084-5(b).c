#include <stdio.h>
#include <unistd.h>

int main()
{
    pid_t pid;

    pid = fork();

    if (pid == 0) {
        printf("Child process before exec()\n");
        execl("/bin/ls", "ls", NULL);
        printf("This line will not be executed\n");
    }
    else {
        printf("Parent process\n");
    }

    return 0;
}
