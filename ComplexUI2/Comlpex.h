#pragma once

using namespace System;


public class Complex
{
private:
    double re, im, k;
    double  i, j;
public:
    Complex() { re = 0; im = 0; }
    Complex(double i, double j) { re = i; im = j; }
    Complex(double i) { re = i; }
    ~Complex() {};

    void setre(double i);
    void setim(double i);
    void setall(double i, double j);
    String^ getre();
    String^ getim();
    String^ abs();
    String^ phase();
    void print();
    void printre();
    void printim();
    String^ Complex:: operator +=(Complex k);
    String^ Complex:: operator -=(Complex k);
    String^ Complex:: operator +(Complex k);
    String^ Complex:: operator -(Complex k);
    String^ Complex:: operator *(Complex k);
    String^ Complex:: operator /(Complex k);
    bool Complex:: operator >(Complex k);
    bool Complex:: operator <(Complex k);
    bool Complex:: operator ==(Complex k);
    String^ Complex:: operator =(Complex k);
};
