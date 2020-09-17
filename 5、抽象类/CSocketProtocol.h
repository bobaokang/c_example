#pragma once
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
class CSocketProtocol
{
public:
virtual int cltSocketInit() = 0;//out
virtual int cltSocketSend(unsigned char *buf,int buflen) = 0;//in  发送
virtual int cltSocketRecv(unsigned char *buf,int *buflen/*in out*/) = 0;//int  接收
virtual int cltSocketDestory() = 0;//in 释放
};


