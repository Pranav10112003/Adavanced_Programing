#include  <sys/types.h>
#include  <sys/ipc.h>
#include  <sys/shm.h>
#include  <stdio.h>
int shm_id;        /* shared memory ID      */
shm_id = shmget(IPC_PRIVATE, 4*sizeof(int), IPC_CREAT | 0666);
if (shm_id < 0) {
     printf("shmget error\n");
     exit(1);
}

/* now the shared memory ID is stored in shm