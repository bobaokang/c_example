#include "6_mole.h"

template <typename Type>
MyVector<Type>::MyVector(int size)
{
    m_space = new Type[size];
    m_len = size;
}

template <typename Type>
MyVector<Type>::~MyVector()
{
    if (m_space!=NULL)
    {
        delete[]m_space;
        m_space = NULL;
        m_len = 0;
    }
}

template <typename Type>
MyVector<Type>::MyVector(const MyVector<Type> &obj)
{
    m_len = obj.m_len;
    m_space = new Type[m_len];
    for (int i = 0; i < m_len; i++)
    {
       m_space[i] = obj.m_space[i];
    }
    
}
template <typename Type>
Type& MyVector<Type>::operator[](int index)
{
    return m_space[index];
}


template <typename Type>
MyVector<Type>& MyVector<Type>::operator=(const MyVector<Type>&obj)
{
    //先把a2旧的内存释放掉
    //根据a1分配内存
    //copy数据
    if (m_space!=NULL)
    {
        delete[]m_space;
        m_space = NULL;
        m_len = 0;
    }
    m_space = new Type[m_len];
    m_len = obj.m_len;
    for (int i = 0; i < obj.m_len; i++)
    {
        m_space[i] = obj.m_space[i];
    }
    return this;
}


template <typename Type>
ostream& operator<<(ostream &out,const MyVector<Type> &obj)
{
    for (int i = 0; i < obj.m_len; i++)
    {
        out<<obj.m_space[i]<<"     ";
    }
    out<<endl;
    return out;
}
