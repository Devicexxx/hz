#include "Comlpex.h"
//#include "MyForm.h"
//#include <windows.h>
#include"iostream"

using namespace System;
//using namespace System::Windows::Forms;
//float re, im, k;
//double i, j;
void Complex::setre(unsigned int i)
{
    re = i;
}
void Complex::setim(unsigned int i)
{
    im = i;
}
void Complex::setall(unsigned int i, unsigned int j)
{
    re = i;
    im = j;
}
void Complex::setid(unsigned int s)
{
    id = s;
}
String^ Complex::getre()
{
    return Convert::ToString(re);
}
String^ Complex::getim()
{
    return Convert::ToString(im);
}
String^ Complex::getid()
{
    return Convert::ToString(id);
}
String^ Complex::abs()
{
    k = sqrt(re * re + im * im);
    return Convert::ToString(k);
}
String^ Complex::phase()
{
    if (((re > 0) && (im > 0)) || ((re > 0) && (im < 0)))
        k = 0;
    else
        if (re < 0 && im > 0)
            k = 3.14;
        else
            if (re < 0 && im < 0)
                k = 3.14 * (-1);
    return Convert::ToString(k);
}
//void Complex::print()
//{
//    printf("\n %f + i*%f \n", re, im);
//}
//void Complex::printre()
//{
//    printf("/n %f /n", re);
//}
//void Complex::printim()
//{
//    printf("/n i*%f /n", im);
//}
void Complex:: operator +=(Complex& k)
{
    double a, b, c, d;
    c = Convert::ToDouble(this->getre());
    d = Convert::ToDouble(k.getre());
    a = c + d;
    c = Convert::ToDouble(this->getim());
    d = Convert::ToDouble(k.getim());
    b = c + d;
    this->setall(a, b);
}
void Complex:: operator -=(Complex& k)
{
    double a, b, c, d;
    c = Convert::ToDouble(this->getre());
    d = Convert::ToDouble(k.getre());
    a = c - d;
    c = Convert::ToDouble(this->getim());
    d = Convert::ToDouble(k.getim());
    b = c - d;
    this->setall(a, b);
}
Complex* Complex:: operator +(Complex& k)
{
    Complex* l = new Complex();;
    double a, b, c, d;
    c = Convert::ToDouble(this->getre());
    d = Convert::ToDouble(k.getre());
    a = c + d;
    c = Convert::ToDouble(this->getim());
    d = Convert::ToDouble(k.getim());
    b = c + d;
    l->setall(a, b);
    return l;
}
Complex* Complex:: operator -(Complex& k)
{
    Complex* l = new Complex();;
    double a, b, c, d;
    c = Convert::ToDouble(this->getre());
    d = Convert::ToDouble(k.getre());
    a = c - d;
    c = Convert::ToDouble(this->getim());
    d = Convert::ToDouble(k.getim());
    b = c - d;
    l->setall(a, b);
    return l;
}
Complex* Complex:: operator *(Complex& k)
{
    Complex* l = new Complex();;
    double a, a1, b, b1, re, im;
    a = Convert::ToDouble(this->getre());
    a1 = Convert::ToDouble(k.getre());
    b = Convert::ToDouble(this->getim());
    b1 = Convert::ToDouble(k.getim());
    re = a * a1 - b * b1;
    im = a * b1 + b * a1;
    l->setall(re, im);
    return l;
}
Complex* Complex:: operator /(Complex& k)
{
    Complex* l = new Complex();;
    double a, a1, b, b1, re, im;
    a = Convert::ToDouble(this->getre());
    a1 = Convert::ToDouble(k.getre());
    b = Convert::ToDouble(this->getim());
    b1 = Convert::ToDouble(k.getim());
    re = (a * a1 + b * b1) / (a1 * a1 * b1 * b1);
    im = (a * b1 - b * a1) / (a1 * a1 * b1 * b1);
    l->setall(re, im);
    return l;
}
bool Complex:: operator >(Complex& k)
{
    double a, a1, b, b1, l1, l;
    a = Convert::ToDouble(this->getre());
    a1 = Convert::ToDouble(k.getre());
    b = Convert::ToDouble(this->getim());
    b1 = Convert::ToDouble(k.getim());
    l = sqrt(a * a + b * b);
    l1 = sqrt(a1 * a1 + b1 * b1);
    if (l > l1)
        return true;
    return false;
}
bool Complex:: operator <(Complex& k)
{
    double a, a1, b, b1, l1, l;
    a = Convert::ToDouble(this->getre());
    a1 = Convert::ToDouble(k.getre());
    b = Convert::ToDouble(this->getim());
    b1 = Convert::ToDouble(k.getim());
    l = sqrt(a * a + b * b);
    l1 = sqrt(a1 * a1 + b1 * b1);
    if (l < l1)
        return true;
    return false;
}
bool Complex:: operator ==(Complex& k)
{
    double a, a1, b, b1, l1, l;
    a = Convert::ToDouble(this->getre());
    a1 = Convert::ToDouble(k.getre());
    b = Convert::ToDouble(this->getim());
    b1 = Convert::ToDouble(k.getim());
    l = sqrt(a * a + b * b);
    l1 = sqrt(a1 * a1 + b1 * b1);
    if (l == l1)
        return true;
    return false;
}
Complex* Complex:: operator =(Complex& k)
{
    this->setre(Convert::ToDouble(k.getre()));
    this->setim(Convert::ToDouble(k.getim()));
    return this;
}

 //����� ComplexArr
