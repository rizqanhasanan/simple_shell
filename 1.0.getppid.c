nclude <stdio.h>
#include <unistd.h>

/**
 * main - PID
 *
 * Return: Always 0.
 */
int main(void)
{
    pid_t my_pid;

    my_pid = getpid();
    printf("Abdurrazak Haruna %u\n", my_pid);
    my_pid = getppid();
    printf("solomon Edziah %u\n", my_pid);
    return (0);
}
