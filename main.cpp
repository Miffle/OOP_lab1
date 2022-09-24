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

    resultComplex = FirstComplex.subtraction(SecondComplex);
    resultComplex.get_result();
}

void matrix() {
    int first_matrix_size_x, first_matrix_size_y, second_matrix_size_x, second_matrix_size_y;
    cout << "Введите кол-во столбцов в первой матрице" << endl;
    cin >> first_matrix_size_x;
    cout << "Введите кол-во строк в первой матрице" << endl;
    cin >> first_matrix_size_y;
    cout << "Введите кол-во столбцов во второй матрице" << endl;
    cin >> second_matrix_size_x;
    cout << "Введите кол-во строк в второй матрице" << endl;
    cin >> second_matrix_size_y;

    Matrix first(first_matrix_size_x, first_matrix_size_y);
    Matrix second(second_matrix_size_x, second_matrix_size_y);
    first.Filling();
    second.Filling();
    first.get();
    second.get();
    if (first_matrix_size_x == second_matrix_size_x && first_matrix_size_y == second_matrix_size_y) {
        Matrix result(first_matrix_size_x, first_matrix_size_y);


        result = first.add(second);
        result.get();

        result = first.multiplication(second);
        result.get();

        result = first.subtraction(second);
        result.get();


    } else {
        Matrix result(second_matrix_size_x, first_matrix_size_y);
        result = first.multiplication(second);
        result.get();
    }
//    first.StringElementsSum();
//    first.ColumnElementsSum();
//
//    second.StringElementsSum();
//    second.ColumnElementsSum();

}