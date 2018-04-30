#include "comm.h"
static int commshm(int size,int flags)
{
    key_t _key = ftok(PATHNAME,PROJ_ID);
    if(_key < 0)
    {
        perror("ftok");
        return -1;
    }
    int shmid;
    if((shmid = shmget(_key,size,flags))< 0)
    {
        perror("shmget");
        return -2;

    }
    return shmid;
}
int destroyshm(int shmid)
{
    if(shmctl(shmid,IPC_RMID,NULL)<0)
    {
        perror("shmctl");
        return;
    }
    return 0;
}
int creatshm(int size)
{
    return commshm(size,IPC_CREAT|IPC_EXCL|0666);
    
}
int getshm(int size)
{
    return commshm(size,IPC_CREAT);
}

