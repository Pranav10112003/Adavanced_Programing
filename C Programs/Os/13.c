#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
int main(void)
{
pid_t
pid =
if(
pid ==
{
printf("Child => PPID: %d PID: %d
n", getppid (), getpid
exit(0);
}
else if(
pid >
{
printf("Parent => PID: %d
n", getpid
printf("Waiting for child process to finish.
n");
wait(NULL);
printf("Child process finished.
n");
}
else
{
printf("Unable to create child process.
n");
}
return 0;}