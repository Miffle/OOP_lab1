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
    Complex addition(Complex secondComplex) const;

    Complex subtraction(Complex secondComplex) const;

    Complex division(Complex secondComplex) const;

    Complex multiplication(Complex secondComplex) const;

    void get_result() const;

};


#endif //FIRST_LAB_COMPLEX_H
