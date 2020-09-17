#include "Hwclass.h"
#include "Sxclass.h"
#include "string.h"
int SckSenRecV(CSocketProtocol *sp,unsigned char *in,int inlenth,unsigned char *out,int *outlength)
{   int ret = 0;
    ret = sp->cltSocketInit();
    ret = sp->cltSocketSend(in,inlenth);
    ret = sp->cltSocketRecv(out,outlength);
    if(ret != 0)
    {
        sp->cltSocketDestory();
        printf("SckSenRecV() Erro ret:[%d]\n",ret);
    }
    return ret;
}

int main(int argc, char const *argv[])
{
    unsigned char in[4096]={0};
    unsigned char out[4096]={0};
    int inlen = strlen((char *)(in));
    strcpy((char *)in,"qweqweqweqweqwe");
    int outlen = 0;
    int ret;

    CSocketProtocol *sp = NULL;
    sp = new Hwclass;
    ret = SckSenRecV(sp,in,inlen,out,&outlen);
    if(ret != 0)
    {
        printf("SckSenRecV() Erro ret:[%d]\n",ret);
    }
    
    sp = new Sxclass;
    ret = SckSenRecV(sp,in,inlen,out,&outlen);
    if(ret != 0)
    {
        printf("SckSenRecV() Erro ret:[%d]\n",ret);
    }
    return ret;
}
