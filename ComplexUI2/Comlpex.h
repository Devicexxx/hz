#pragma once

using namespace System;


public class Complex
{
private:
    unsigned int re, im; // ������� �����. �����
    unsigned int id; // ID ����� � ������� (������)
protected:
    unsigned int  i, j, k;
public:
    Complex() { re = 0; im = 0; id = 0; } // ���������
    Complex(unsigned int i, unsigned int j, unsigned int s) { re = i;  im= j; id = s; }
    Complex(unsigned int i, unsigned int j) { re = i; im = j; }
    Complex(unsigned int s) { id = s; } // ID
    ~Complex() {};
    void setre(unsigned int i);
    void setim(unsigned int i);
    void setall(unsigned int i, unsigned int j);
    void setid(unsigned int s);
    String^ getre();
    String^ getim();
    String^ getid();
    String^ abs();
    String^ phase();
 /*   void print();
    void printre();
    void printim();*/
    void operator +=(Complex& k);
    void operator -=(Complex& k);
    Complex* operator +(Complex& k);
    Complex* operator -(Complex& k);
    Complex* operator *(Complex& k);
    Complex* operator /(Complex& k); 
    bool operator >(Complex& k);
    bool operator <(Complex& k);
    bool operator ==(Complex& k);
    Complex* operator =(Complex& k);

    //friend class ComplexArr;
};

template <typename T>
public class ComplexArr
{
private:
    T* arr; // ?
    unsigned int Len; //������ ������
public:
    ComplexArr() { Len = 0; arr = 0; }
    ComplexArr(unsigned int l)
    {
        Len = l;
        arr = new T[l];
    }
    ~ComplexArr() {};
    ComplexArr<T>(const ComplexArr<T>& TArr);// ���������� �����
    void setSize(unsigned int i);
    void Clear();

    T&  operator [] (unsigned int i);
    unsigned int getSize();
    void  operator = (ComplexArr<T>& k);

    friend class Complex;
};



template <typename T>
T& ComplexArr<T>:: operator [](unsigned int i)
{
    if (i < Len)
        return arr[i];
    return arr[0];
}

template <typename T>
ComplexArr<T>::ComplexArr<T>(const ComplexArr<T>& TArr) // ���������� �����
{
    Len = TArr.Len; // ������������� ������
    arr = new T[Len]; // �������� ������
    for (unsigned int i = 0; i < Len; i++)
        arr[i] = TArr.arr[i]; // �������� ��������
}

template <typename T>
void ComplexArr<T>::setSize(unsigned int i)
{
    T* tmp;
    tmp = new T[Len];
    if (arr) // ���� ������ ���������� �����,
    {
        for (unsigned int k = 0; k < i && k < Len; k++)
            tmp[k] = arr[k]; // �������� ��������
        delete[] arr; // ����������� ������
    }
    arr = new T[i]; // � �������� ������
    for (unsigned int k = 0; k < Len && k < i; k++)
        arr[k] = tmp[k];
    Len = i; // ������������� ����� ������
}

template <typename T>
unsigned int ComplexArr<T>::getSize()
{
    return Len;
}

template <typename T>
void ComplexArr<T>::Clear()
{
    unsigned int q = (*this).getSize();
    for (unsigned int i = 0; i < q; i++)
    {
        (*this)[i].setim(0);
        (*this)[i].setre(0);
    }
}

template <typename T>
void ComplexArr<T>:: operator =(ComplexArr<T>& k)
{
    unsigned int q;
    if (this->getSize() > k.getSize())
        q = k.getSize();
    else
        q = this->getSize();
    for (unsigned int i = 0; i < q; i++)
    {
        (*this)[i] = k[i];
    }
}