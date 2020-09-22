#include <iostream>
#include <stdio.h>
#include <string.h>
#include <pthread.h>
#include <unistd.h>
using namespace std;
struct ParamStructToAudio {
	string text;
    int number;
};


class TestA
{
private:
public:
int speechSynthesizerFile(const char* text);
};


void* mypthreadFunc77(void* arg) 
{
    ParamStructToAudio *pa = (ParamStructToAudio *)arg;
    printf("%s\n", pa->text.c_str());
    printf("%d\n",pa->number);
    sleep(1);
    return NULL;
}
int TestA::speechSynthesizerFile(const char* H5text)
{
    static int i = 0;
    i++;
    ParamStructToAudio pa;
    pa.text = H5text;
    pa.number = i;
	pthread_t pthreadId;
    pthread_create(&pthreadId, NULL,&mypthreadFunc77, (void *)&pa);
    usleep(1);
	pthread_detach(pthreadId);
	//pthread_join(pthreadId,NULL);
    return 0;
}
int main(int argc, char const *argv[])
{
    TestA Test;
    const char Testchar[100]="1234567890123657687989iutrwdsgfhdgGHEQRGSFDqweg";
    int i = 0;
    for ( i = 0; i < 1;  i++)
    {
        Test.speechSynthesizerFile(&Testchar[i]);
    }  
    return 0;
}
