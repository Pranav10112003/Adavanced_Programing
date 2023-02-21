#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
int main(void)
{
pid_t
pid =
if (
pid == 0
{
printf(“Child process is executing.
n”);
}
int status;
waitpid
pid , &status,
if ( WIFEXITED(status) )
{
int
exit_status = WEXITSTATUS(
printf("Exit status of the child was %d
n", exit_status
}
return 0;
}

Child process is executing.
Exit status of the child was 0