#include "Comlpex.h"
//#include "MyForm.h"
//#include <windows.h>
#include"iostream"


using namespace System;
//using namespace System::Windows::Forms;
//float re, im, k;
//double i, j;
void Complex::setre(double i)
{
    re = i;
}
void Complex::setim(double i)
{
    im = i;
}
void Complex::setall(double i, double j)
{
    re = i;
    im = j;
}
String^ Complex::getre()
{
    return Convert::ToString(re);
}
String^ Complex::getim()
{
    return Convert::ToString(im);
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
void Complex::print()
{
    printf("\n %f + i*%f \n", re, im);
}
void Complex::printre()
{
    printf("/n %f /n", re);
}
void Complex::printim()
{
    printf("/n i*%f /n", im);
}