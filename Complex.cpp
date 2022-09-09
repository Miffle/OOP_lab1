//
// Created by Roman on 09.09.2022.
//
#include <iostream>
#include "Complex.h"

using namespace std;

Complex::Complex(double firstUserInputRe, double firstUserInputIm, double secondUserInputRe, double secondUserInputIm) {
    main_Re = firstUserInputRe;
    main_Im = firstUserInputIm;
    second_Re = secondUserInputRe;
    second_Im = secondUserInputIm;

}

double Complex::substraction() {
    result_Rm = main_Re - second_Re;
    result_Im = main_Im - second_Im;

    return 0;
}

double Complex::addition() {
    result_Rm = main_Re + second_Re;
    result_Im = main_Im + second_Im;
    return 0;
}

double Complex::division() {
    result_Rm = ((main_Re * second_Re + main_Im * second_Im) / (second_Re * second_Re + second_Im * second_Im));
    result_Im = ((main_Im * second_Re - main_Re * second_Im) / (second_Re * second_Re + second_Im * second_Im));
    return 0;
}

double Complex::multiplication() {
    result_Rm = (main_Re * second_Re - main_Im * second_Im);
    result_Im = (main_Re * second_Im + main_Im * second_Re);
    return 0;
}

void Complex::get_result() const {
    if (result_Im >= 0) { cout << "result = " << result_Rm << "+" << result_Im << "i" << endl; }
    else { cout << "result = " << result_Rm << result_Im << "i" << endl; }
}


