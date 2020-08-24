#include <iostream>
using namespace std;
class Test
{
private:
    int m_length;
    int *m_Arrary;
public:
    Test(int length);
    Test(const Test &T1);
    ~Test();
    int Get_Data(int index);
    void  Set_Data(int index,int value);
    int Get_Length();
};

Test::Test(int length)
{
    if (length < 0)
    {
        length = 0;
    }
   m_length = length;
   m_Arrary = new int[m_length];
}

Test::Test(const Test &T1)
{
   this->m_length = T1.m_length;
   this->m_Arrary = new int[this->m_length];
   for (int i = 0; i < T1.m_length; i++)
   {
       this->m_Arrary[i] = T1.m_Arrary[i];
       cout<<"T1:"<<T1.m_Arrary[i]<<endl;
   }
    
}
Test::~Test()
{
   	if (m_Arrary != NULL)
	{
		delete[] m_Arrary;
		m_Arrary = NULL;
		m_length = -1;
	}
}

 int Test::Get_Data(int index)
{
    return m_Arrary[index];
}
 void Test::Set_Data(int index,int value)
{
   m_Arrary[index] = value;
}
int Test::Get_Length()
{
    return m_length;
}
int main(int argc, char const *argv[])
{
    Test T2(10);
    for (int i = 0; i < T2.Get_Length(); i++)
    {
        T2.Set_Data(i,i);
    }
    Test T3 = T2;
    for (int i = 0; i < T2.Get_Length(); i++)
    {
        cout<<T2.Get_Data(i)<<endl;
    }
     for (int i = 0; i < T3.Get_Length(); i++)
    {
        cout<<T3.Get_Data(i)<<endl;
    }
    return 0;
}