
#include "4_test.h"
#include "4_fushulei.hpp"
int main(int argc, char const *argv[])
{
    Comlex <int>c1(1,2);
    Comlex <int>c2(3,4);
    Comlex <int>c3 = c1+c2;
    c3.PrintfCom();
    return 0;
}
