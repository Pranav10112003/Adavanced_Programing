#include<stdio.h>
#include<unistd.h>
int main ()
{
    int pid=fork();
    if(pid==0)
    {
        printf("Process id of Child process=%d\n",getpid());
    }
    else if(pid>1)
    {
    printf("Process id of Parent process =%d\n",getpid());
    }
   else 
    {
    printf("Chils Process not sucessful");
    }
  
}
