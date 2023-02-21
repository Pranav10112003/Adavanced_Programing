#include<stdio.h>
#include<sys/types.h>
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
printf("Child process is executing
n");
}
if(
pid >
{
sleep(10);
printf("Parent was sleeping
n");
exit(0); //Parent Process
}
return 0;
}



Child process is executing
Parent was sleeping

