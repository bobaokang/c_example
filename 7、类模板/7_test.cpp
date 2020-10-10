#include "7_test.h"
template <typename Type>
MyVector<Type>::MyVector(int index)
{
    m_data = new Type[index];
    m_len = index;
}


template <typename Type>
MyVector<Type>::~MyVector()
{
    if (m_data!=NULL)
    {
        delete []m_data;
        m_data = NULL;
        m_len = 0;
    }
    
}

template <typename Type>
MyVector<Type>::MyVector(const MyVector<Type> &obj)
{
    //根据MyV1的大小分配内存
    m_len = obj.m_len;
    m_data = new Type[m_len];
    //copy数据
    for (size_t i = 0; i < m_len; i++)
    {
      m_data[i] = obj.m_data[i];
    }
}


template <typename Type>
Type& MyVector<Type>:: operator[](int index)
{
    return m_data[index];
}

template <typename Type>
MyVector<Type>& MyVector<Type>:: operator=(const MyVector<Type> &obj)
{
    if (m_data !=NULL)
    {
        delete []m_data;
        m_data = NULL;
        m_len = 0;
    }
    m_len = obj.m_len;
    m_data = new Type[m_len];

    for (int i = 0; i < m_len; i++)
    {
        m_data[i] = obj.m_data[i];
    }
    return *this;
}

template <typename Type>
ostream& operator<<(ostream &out,MyVector<Type> &obj)
{
    for (int i = 0; i < obj.m_len; i++)
    {
        out<<obj.m_data[i]<<"  ";
    }
    out<<endl;
    return out;
}


template <typename Type>
int MyVector<Type>::getlength()
{
    return m_len;
}