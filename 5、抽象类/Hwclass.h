#include "CSocketProtocol.h"
class Hwclass:public CSocketProtocol
{
private:
unsigned char *p;
int length;
public:
virtual int cltSocketInit();//out
virtual int cltSocketSend(unsigned char *buf,int buflen);//in  发送
virtual int cltSocketRecv(unsigned char *buf,int *buflen/*in out*/);//int  接收
virtual int cltSocketDestory();//in 释放

};


