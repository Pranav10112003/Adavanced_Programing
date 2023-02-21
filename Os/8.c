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
        printf("Child Process, count=%d\n",count);
    }
    else
    {
        count++;
        count++;
        printf("Parent process,count=%d\n",count);
    }

 return 0;
}

