#include "Complex.h"
#include "Matrix.h"
#include <iostream>

using namespace std;

void matrix();

void complex();

int main() {
    //complex();
    matrix();
    return 0;
}

void complex() {
    double firstUserInputRe, firstUserInputIm, secondUserInputRe, secondUserInputIm;
    cout << "Введите действительное значение первого комплексного числа" << endl;
    cin >> firstUserInputRe;
    cout << "Введите мнимое значение первого комплексного числа" << endl;
    cin >> firstUserInputIm;
    cout << "Введите действительное значение второго комплексного числа" << endl;
    cin >> secondUserInputRe;
    cout << "Введите мнимое значение второго комплексного числа" << endl;
    cin >> secondUserInputIm;

    Complex FirstComplex(firstUserInputRe, firstUserInputIm);
    Complex SecondComplex(secondUserInputRe, secondUserInputIm);
    Complex resultComplex;

    resultComplex = FirstComplex.addition(SecondComplex);
    resultComplex.get_result();

    resultComplex = FirstComplex.division(SecondComplex);
    resultComplex.get_result();

    resultComplex = FirstComplex.multiplication(SecondComplex);
    resultComplex.get_result();

    resultComplex = FirstComplex.substraction(SecondComplex);
    resultComplex.get_result();
}

void matrix() {
    Matrix first(2, 5);
    first.Filling();
    first.get();
}