#include<stdio.h>
#include<unistd.h>
int main()
{
    int pid;
    int i;
    for(i=0;i<3;i++)
    {
        printf("Level %d\n",i);
        pid=fork();
        if(pid==0)
        {
            printf("Child Process id = %d\n",getpid());
        }
        if else (pid>1)
        {
            printf("Parent Process id = %d",getpid());
        }
        else
        printf("Chid process not sucessful")
    }
    printf("Process id = %d\n",getpid());
}
