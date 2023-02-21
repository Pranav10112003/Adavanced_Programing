#include <stdio.h>
#include <unistd.h>
int main() 
{
    pid_t pid;
    pid=fork();
    int count=10;
    if(pid==0)
    {
        count++;    
        printf("Child Process id %d, count=%d\n",getpid(),count);

    }

    else
    {
        count++;
        count++;
        printf("Parent process id=%d,count=%d\n",getpid(),count);
    }

 return 0;
}

Parent process id=1013,count=12
Child Process id=1014,count=11

