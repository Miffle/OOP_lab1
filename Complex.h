//
// Created by Roman on 09.09.2022.
//

#ifndef FIRST_LAB_COMPLEX_H
#define FIRST_LAB_COMPLEX_H


class Complex {
public:
    double Re, Im;
    Complex(double UserInputRe, double UserInputIm);
    Complex();
    Complex addition(Complex secondComplex);

    Complex substraction(Complex secondComplex);

    Complex division(Complex secondComplex);

    Complex multiplication(Complex secondComplex);

    void get_result() const;

};


#endif //FIRST_LAB_COMPLEX_H
