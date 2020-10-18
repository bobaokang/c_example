#include "map"
#include "iostream"
#include "string.h"
#include "queue"
#include "list"
#include "algorithm"
#include "functional"
using namespace std;
template<typename T>

class IsDiv
{
private:
  T is_div;
public:
   IsDiv(const T &t)
   {
       is_div = t;
   }
   bool operator()(T &t)
   {
       return (t%is_div == 0);
   }
};


int main(int argc, char const *argv[])
{
    vector<int>v1;
    v1.push_back(16);
    v1.push_back(3);
    v1.push_back(7);
    v1.push_back(8);
    int a = 4;
    IsDiv<int>myDiv(a);
    vector<int>::iterator it;
    //find_if(v1.begin(),v1.end(),myDiv);
    it = find_if(v1.begin(),v1.end(),IsDiv<int>(4));
    if (it==v1.end())
    {
        cout<<"no"<<endl;
    }
    else
    {
        cout<<"yes:"<<*it<<endl;
    }
    
    return 0;
}
