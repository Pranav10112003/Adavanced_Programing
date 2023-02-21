#include<stdio.h>
#include<unistd.h>
#include<sys/msg.h>
#include<stdlib.h>
#include<string.h>

int main(){
	int msgid;

	struct msg{
		long int msgtype;
		char txt[100];
	};

	struct msg data;
	char buff[20];
	int running=1;

	msgid=msgget((key_t)145,0666|IPC_CREAT);
	while(running){
		fgets(buff,20,stdin);
	strcpy(data.txt,buff);
	if(msgsnd(msgid,(void *)&data,100,0)==-1){
		printf("msg not sent\n");}
	if(strncmp(buff,"end",3)==0){
		running=0;}
	}
return 0;
}