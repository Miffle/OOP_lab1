#include "Complex.h"
//#include "Matrix.h"
#include <iostream>
//#include <windows.h>
using namespace std;

int main() {
//    SetConsoleOutputCP(CP_UTF8);
    double firstUserInputRe, firstUserInputIm, secondUserInputRe, secondUserInputIm;
    cout << "Введите действительное значение первого комплексного числа"<<endl;
    cin >> firstUserInputRe;
    cout << "Введите мнимое значение первого комплексного числа"<<endl;
    cin >> firstUserInputIm;
    cout << "Введите действительное значение второго комплексного числа"<<endl;
    cin >> secondUserInputRe;
    cout << "Введите мнимое значение второго комплексного числа"<<endl;
    cin >> secondUserInputIm;
    Complex FirstComplex(firstUserInputRe, firstUserInputIm);
    Complex SecondComplex(secondUserInputRe, secondUserInputIm);
    FirstComplex.addition(SecondComplex.Re, SecondComplex.Im);
    FirstComplex.get_result();
    FirstComplex.division(SecondComplex.Re, SecondComplex.Im);
    FirstComplex.get_result();
    FirstComplex.multiplication(SecondComplex.Re, SecondComplex.Im);
    FirstComplex.get_result();
    FirstComplex.substraction(SecondComplex.Re, SecondComplex.Im);
    FirstComplex.get_result();
//    int user_string_count, user_columns_count;
//    cin >> user_string_count;
//    cin >> user_columns_count;
//    Matrix main(user_string_count, user_columns_count);
//    main.makingMatrix();
//    main.get_result();
    return 0;
}
