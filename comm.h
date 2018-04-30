#pragma once
#ifndef _COMM_H_
#define _COMM_H_

#include<stdio.h>
#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/shm.h>

#define PATHNAME "."
#define PROJ_ID 0x6666
int creatshm(int size);
int destroy(int shmid);
int getshm(int size);
#endif
