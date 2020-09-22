#include <iostream>
#include <stdio.h>
#include <string.h>
#include <pthread.h>
#include <unistd.h>
using namespace std;
class CoClass
{
private:
    string str;
public:
    CoClass()
    {
        printf("123:%s",str);

    }
}; 

int main(int argc, char const *argv[])
{
    CoClass c1;
    
    return 0;
}

