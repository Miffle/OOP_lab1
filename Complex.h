//
// Created by Roman on 09.09.2022.
//

#ifndef FIRST_LAB_COMPLEX_H
#define FIRST_LAB_COMPLEX_H


class Complex {
    double main_Re, main_Im, second_Re = 10, second_Im = 5, result_Rm=0, result_Im=0;
public:
    Complex(double NRe, double NIm);

    double addition();

    double substraction();

    double division();

    double multiplication();

    void get_result() const;
};


#endif //FIRST_LAB_COMPLEX_H
