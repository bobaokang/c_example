#include "Sxclass.h"
int Sxclass::cltSocketInit()
{
    p = NULL;
    length = 0;
    return 0;
}
int Sxclass::cltSocketSend(unsigned char *buf,int buflen)
{
    p = (unsigned char *)malloc(sizeof(unsigned char) * buflen);
    if (p == NULL)
    {
        return -1;
    }
    memcpy(p,buf,buflen);
    return 0;
}
int Sxclass:: cltSocketRecv(unsigned char *buf,int *buflen/*in out*/)
{
    if (buf == NULL|| buflen == NULL)
    {
        return -1;
    }
    *buflen = this->length;
    memcpy(buf,this->p,this->length);
    return 0;
}
int Sxclass:: cltSocketDestory()
{
    if (p != NULL)
    {
        free(p);
        length = 0;
    }
    
    return 0;
}