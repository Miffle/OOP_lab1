//
// Created by Roman on 09.09.2022.
//
#include <iostream>
#include "Complex.h"

using namespace std;

Complex::Complex(double UserInputRe, double UserInputIm) {
    Re = UserInputRe;
    Im = UserInputIm;
}
Complex::Complex() {
    Re = 0;
    Im = 0;
}

Complex Complex::subtraction(Complex secondComplex) const {
    Complex resultComplex = *new Complex();
    resultComplex.Re = Re - secondComplex.Re;
    resultComplex.Im = Im - secondComplex.Im;
    return resultComplex;
}

Complex Complex::addition(Complex secondComplex) const {
    Complex resultComplex = *new Complex();
    resultComplex.Re = Re + secondComplex.Re;
    resultComplex.Im = Im + secondComplex.Im;
    return resultComplex;
}

Complex Complex::division(Complex secondComplex) const {
    Complex resultComplex = *new Complex();
    resultComplex.Re = ((Re * secondComplex.Re + Im * secondComplex.Im) / (secondComplex.Re * secondComplex.Re + secondComplex.Im * secondComplex.Im));
    resultComplex.Im = ((Im * secondComplex.Re - Re * secondComplex.Im) / (secondComplex.Re * secondComplex.Re + secondComplex.Im * secondComplex.Im));
    return resultComplex;
}


Complex Complex::multiplication(Complex secondComplex) const {
    Complex resultComplex = *new Complex();
    resultComplex.Re = (Re * secondComplex.Re - Im * secondComplex.Im);
    resultComplex.Im = (Re * secondComplex.Im + Im * secondComplex.Re);
    return resultComplex;
}

void Complex::get_result() const {
    if (Im >= 0) { cout << "result = " << Re << "+" << Im << "i" << endl; }
    else { cout << "result = " << Re << Im << "i" << endl; }
}






