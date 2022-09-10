//
// Created by Roman on 09.09.2022.
//

#ifndef FIRST_LAB_COMPLEX_H
#define FIRST_LAB_COMPLEX_H


class Complex {
public:
    double Re, Im, result_Rm=0, result_Im=0;
    Complex(double UserInputRe, double UserInputIm);

    double addition(double second_Re, double second_Im);

    double substraction(double second_Re, double second_Im);

    double division(double second_Re, double second_Im);

    double multiplication(double second_Re, double second_Im);

    void get_result() const;

};


#endif //FIRST_LAB_COMPLEX_H
