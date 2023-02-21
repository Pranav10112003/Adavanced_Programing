#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(void)
{
	int pid; 
	pid = getpid();
    printf("The process id: %d\n",pid);
	return 0;
}