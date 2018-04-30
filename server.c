#include "comm.h"
int main()
{
    int shmid = creatshm(4096);
    printf("%d\n",shmid);
    char *addr = shmat(shmid,NULL,0);
    sleep(30);
    int i = 0;

    while(i++<26)
    {
        printf("client# %s\n",addr);
        sleep(1);
    }
    shmdt(addr);
    sleep(2);
    destroyshm(shmid);

    return 0;
}
