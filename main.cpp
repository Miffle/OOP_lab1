#include "Complex.h"
#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    double firstUserInputRe, firstUserInputIm, secondUserInputRe, secondUserInputIm;
    cout << "Введите действительное значение первого комплексного числа"<<endl;
    cin >> firstUserInputRe;
    cout << "Введите мнимое значение первого комплексного числа"<<endl;
    cin >> firstUserInputIm;
    cout << "Введите действительное значение второго комплексного числа"<<endl;
    cin >> secondUserInputRe;
    cout << "Введите мнимое значение второго комплексного числа"<<endl;
    cin >> secondUserInputIm;
    Complex math(firstUserInputRe, firstUserInputIm, secondUserInputRe, secondUserInputIm);
    math.addition();
    math.get_result();

    math.multiplication();
    math.get_result();

    math.division();
    math.get_result();

    math.substraction();
    math.get_result();

    return 0;
}
