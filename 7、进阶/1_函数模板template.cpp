#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
template <typename T>
void myswap(T &a,T &b)
{
    T c;
    c = a;
    a = b;
    b = c;
}
int main1(int argc, char const *argv[])
{
    int a = 10;
    int b = 20;
    printf("a = %d b = %d\n",a,b);
    //myswap<int>(a , b);
    myswap(a , b);
    printf("a = %d b = %d\n",a,b);
    char c = 'c';
    char d = 'd';
    printf("c = %d d = %d\n",c,d);
    //myswap<char>(c,d);
    myswap(c, d);
    printf("c = %d d = %d\n",c,d);
    return 0;
}

template<typename T1,typename T2>
//对字符数组和char数组排序
int mysort(T1 *array,T2 size)
{
    T1 temp;
    for ( int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (array[i] < array[j])
            { 
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
            }
        }
    }
    return 0;
}
template<typename T3>
void myprintf(T3 *array,int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("array[%d]:%d\t",i,array[i]);
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{
    int array[]={12, 32, 2,312,13,42,676,567,5,2};
    int size = sizeof(array)/sizeof(*array);
    myprintf<int>(array,size);
    mysort<int,int>(array,size);
    myprintf<int>(array,size);
    
    char array2[]="qwertyuiopasdfghjklzxcvbnm";
    size = sizeof(array2)/sizeof(*array2);
    myprintf<char>(array2,size);
    mysort<char,int>(array2,size);
    myprintf<char>(array2,size);
    return 0;
}



// #include <iostream>
// #include <stdio.h>
// #include <string.h>
// using namespace std;
// template <typename T>
// T add(T a,T b)
// {
//     return a+b;
// }
// template <typename T>
// T sub(T a,T b)
// {
//     return a-b;
// }
// template <typename T>
// T mux(T a,T b)
// {
//     return a*b;
// }

// int main(int argc, char const *argv[])
// {
//     printf("%d\n",add<int>(1,2));
//     printf("%d\n",mux<char>(1,2));
//     printf("%lf\n",add<float>(1,2));
//     printf("%d\n",sub<int>(1,2));

//     return 0;
// }
