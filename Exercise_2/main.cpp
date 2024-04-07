#include "src/ComplexNumber.hpp"
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    std::string s = "";

    ComplexNumberLibrary::ComplexNumber n1(2, -1);
    cout << "n1:" << n1 <<endl;
    cout << "il coniugato di n1 e': "<< ComplexNumberLibrary::coniugato(n1)<< endl;


    ComplexNumberLibrary::ComplexNumber n2(0, 3);
    cout << "n2:" << n2 <<endl;
    cout << "il coniugato di n2 e': "<< ComplexNumberLibrary::coniugato(n2)<< endl;


    ComplexNumberLibrary::ComplexNumber sum = n1 + n2;
    cout << "La somma dei 2 numeri complessi e': " << sum<< endl;

    if (n1 == n2){
        cout << "n1 e n2 sono lo stesso numero complesso" << endl;
    } else {
        cout << "n1 e n2 non sono lo stesso numero complesso" << endl;
    }

    return 0;
}
