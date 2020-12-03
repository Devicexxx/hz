#pragma once

using namespace System;


public class Complex
{
private:
    double re, im, k;
    double  i, j;
    String^* id;
public:
    Complex() { re = 0; im = 0; id = 0; }
    Complex(double i, double j, String^* s) { re = i; im = j; id = s; }
    Complex(double i, double j) { re = i; im = j; }
    Complex(String^* s) { id = s; }
    ~Complex() {};
    void setre(double i);
    void setim(double i);
    void setall(double i, double j);
    void setid(String^* s);
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
    Complex* arr;
    unsigned int Len;
public:
    ComplexArr() { Len = 0; arr = 0; }
    ComplexArr(unsigned int l)
    {
        Len = l;
        arr = new Complex[l];
    }
    ~ComplexArr() {};
    ComplexArr(const ComplexArr& TArr);// Конструкор копий
    void setSize(unsigned int i);
    void Clear(ComplexArr& k);

    Complex  operator [] (unsigned int i);
    unsigned int getSize();
    Complex operator [] (System::String^ s);
    void  operator = (ComplexArr& k);

    friend class Complex;
};