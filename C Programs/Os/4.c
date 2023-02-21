#include<stdio.h>
#include<unistd.h>
int main()
{
  int pid;
  int i;
  if(fork()||fork())
   {
     fork();
     printf("True\n");
    }
    else 
    {
     printf("1\n");
    }
}
