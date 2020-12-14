#pragma once

using namespace System;


public class Complex
{
private:
    unsigned int re, im; // размеры компл. числа
    unsigned int id; // ID числа в массиве (строка)
protected:
    unsigned int  i, j, k;
public:
    Complex() { re = 0; im = 0; id = 0; } // умолчани€
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
    void print();
    void printre();
    void printim();
    void operator +=(Complex& k);
    void operator -=(Complex& k);
    Complex* operator +(Complex& k);
    Complex* operator -(Complex& k);
    Complex* operator *(Complex& k);
    Complex* operator /(Complex& k); 
    bool operator >(Complex& k);
    bool operator <(Complex& k);
    bool operator ==(Complex& k);
    void operator =(Complex& k);

    friend class ComplexArr;
};

public class ComplexArr
{
private:
    Complex* arr; // ?
    unsigned int Len; //размер масива
public:
    ComplexArr() { Len = 0; arr = 0; }
    ComplexArr(unsigned int l)
    {
        Len = l;
        arr = new Complex[l];
    }
    ~ComplexArr() {};
    ComplexArr(const ComplexArr& TArr);//  онструкор копий
    void setSize(unsigned int i);
    void Clear();

    Complex&  operator [] (unsigned int i);
    unsigned int getSize();
    /*Complex operator [] (unsigned int s);*/
    void  operator = (ComplexArr& k);

    friend class Complex;
};