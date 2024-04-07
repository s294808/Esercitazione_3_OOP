#ifndef __RATIONAL_H
#define __RATIONAL_H

#include <iostream>
#include <cmath>

using namespace std;

namespace ComplexNumberLibrary {

struct ComplexNumber
{
    int reale;
    int immaginario;
    int coniugato;

    ComplexNumber(int a, int b)
    {
        reale = a;
        immaginario = b;
        coniugato = to_coniugate();
    }

    ComplexNumber() = default;

    int to_coniugate();
};

ostream& operator<<(ostream& os, const ComplexNumber &n);

ComplexNumber operator +(const ComplexNumber &n1, const ComplexNumber &n2);

bool operator ==(const ComplexNumber &n1, const ComplexNumber &n2);

ComplexNumber coniugato (ComplexNumber &n);

}

#endif
