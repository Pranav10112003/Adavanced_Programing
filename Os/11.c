#include<stdio.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
pid_t
pid
pid
=
if (
pid ==0) //Child Process
{
sleep(10);
printf("Child
n");
}
if(
pid >
{
printf(“Parent
n”);
wait(NULL);
printf("I am in parent process.
n");
exit(0); //Parent Process
}
return 0;
}