
#include<iostream>
#include<unistd.h>
#include<sys/time.h>
#include<fstream>
#include <string>
#include <string.h>
#include "math.h"
using namespace std;
typedef unsigned long int uint64_t;
class getAudioCallbak {
private:
	 char Pcm_Name[100];
public:
	virtual void OngetAudiocb(char *data, int len);
	void intToStr(uint64_t iInt, char* acStr);
	uint64_t getTimeStamp();
    char *GetPath();
};


char *getAudioCallbak::GetPath()
{
    return Pcm_Name;
}

void getAudioCallbak::OngetAudiocb(char *data,int len)
{
	
	intToStr(getTimeStamp(),Pcm_Name);
    sprintf(Pcm_Name,"%s.pcm",Pcm_Name);
	printf("NOWTime:[%s]",Pcm_Name);
	cout<<"开始写入数据"<<endl;
	cout << "get data:"<<len << endl;
	FILE *fp = NULL;
	fp = fopen(Pcm_Name, "ab+");
	fwrite(data, len,1,fp);
	fflush(fp);
	if(fp != NULL)
    fclose(fp);
}

void getAudioCallbak::intToStr(uint64_t iInt, char* acStr)
{
	uint64_t iIndex = 0, iSize, iNum, iBit, i;
 
	if(iInt < 0)
	{
		acStr[0] = '-';
		iInt = - iInt;
		iIndex = 1;
	}
	for(i=0; ; i++)
		if(iInt < pow(10, i))
			break;
	iSize = i;
 
	for(i=0; i<iSize; i++)
	{
		iNum = pow(10, iSize - i - 1);
		iBit = iInt/iNum;
		iInt -= iNum*iBit;
		acStr[i + iIndex] = iBit + 48;
	}
	if(iSize != 0)
		acStr[iSize + iIndex] = '\0';
	else
	{
		acStr[0] = '0';
		acStr[1] = '\0';
	}
}

uint64_t getAudioCallbak::getTimeStamp()
{
    struct timeval time;
    gettimeofday(&time, NULL);
    printf("%ld\n",time.tv_sec*1000 + time.tv_usec/1000);
    return time.tv_sec*1000 + time.tv_usec/1000;
}
int main(int argc, char const *argv[])
{
    getAudioCallbak getAudio;
    getAudio.OngetAudiocb("123456",7);
 
    printf("%s\n",getAudio.GetPath());
    return 0;
}
