#include "ComplexNumber.hpp"

namespace ComplexNumberLibrary {

int ComplexNumber::to_coniugate()
{
    return int (-immaginario);
}

ostream& operator << (ostream& os, const ComplexNumber &n)
{
    if (n.reale == 0 && n.immaginario ==0)
    {
        os << "0";
    } else if (n.immaginario == 0){
        os << n.reale;
    } else if (n.reale == 0){
        if (n.immaginario > 0){
            os << "+" << n.immaginario <<"i";
        } else {
            os << n.immaginario <<"i";
        }
    } else {
        if (n.immaginario > 0){
            os << n.reale << "+" << n.immaginario <<"i";
        } else {
            os << n.reale << n.immaginario <<"i";
        }
    }
    return os;
}

ComplexNumber operator +(const ComplexNumber &n1, const ComplexNumber &n2)
{
    ComplexNumber n (n1.reale + n2.reale, n1.immaginario + n2.immaginario);
    return n;
}

bool operator ==(const ComplexNumber &n1, const ComplexNumber &n2)
{
    bool confronto;
    if (n1.reale == n2.reale && n1.immaginario == n2.immaginario){
        confronto = true;
    } else {
        confronto = false;
    }
    return confronto;
}

ComplexNumber coniugato(ComplexNumber &n)
{
    ComplexNumber result(n.reale, n.to_coniugate());
    return result;
}

}
