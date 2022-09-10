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

double Complex::substraction(double second_Re, double second_Im) {
    result_Rm = Re - second_Re;
    result_Im = Im - second_Im;

    return 0;
}

double Complex::addition(double second_Re, double second_Im) {
    result_Rm = Re + second_Re;
    result_Im = Im + second_Im;
    return 0;
}

double Complex::division(double second_Re, double second_Im) {
    result_Rm = ((Re * second_Re + Im * second_Im) / (second_Re * second_Re + second_Im * second_Im));
    result_Im = ((Im * second_Re - Re * second_Im) / (second_Re * second_Re + second_Im * second_Im));
    return 0;
}

double Complex::multiplication(double second_Re, double second_Im) {
    result_Rm = (Re * second_Re - Im * second_Im);
    result_Im = (Re * second_Im + Im * second_Re);
    return 0;
}

void Complex::get_result() const {
    if (result_Im >= 0) { cout << "result = " << result_Rm << "+" << result_Im << "i" << endl; }
    else { cout << "result = " << result_Rm << result_Im << "i" << endl; }
}



