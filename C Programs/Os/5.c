#include<stdio.h>
#include<unistd.h>
int main()
{
    if(fork()&&fork())
   {
     printf("Message\n");
    }
    else 
    {
     printf("1\n");
    }
}
