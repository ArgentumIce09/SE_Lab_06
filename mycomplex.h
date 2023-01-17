/**
\file mycomplex.h
\brief ������������ ���� ������ Complex
*/

#ifndef _MY_COMPLEX_H_
#define _MY_COMPLEX_H_

#include <iostream>

using namespace std;

/**
\brief ����� ������������ �����
*/

class Complex
{
/**
\brief �������������� ����
*/
    double Re;
/**
\brief ������� ����
*/
    double Im;

    public:
    Complex(double aRe = 0, double aIm = 0);
    Complex(const Complex &);
    Complex &operator = (const Complex&);
    Complex &operator = (const double&);
    Complex &operator += (const Complex&);
    Complex &operator += (const double&);
    Complex &operator -= (const Complex&);
    Complex &operator -= (const double&);
    Complex &operator *= (const Complex&);
    Complex &operator *= (const double&);
    Complex &operator /= (const Complex&);
    Complex &operator /= (const double&);

    void Set(double aRe, double aIm);
    operator double();
    double abs();
}
#endif
