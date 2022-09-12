//
// Created by shakal on 10.09.22.
//

#ifndef FIRST_LAB_MATRIX_H
#define FIRST_LAB_MATRIX_H


#include <cstdlib>

class Matrix {
private:
    int **matrix, columns_count, strings_count;

public:
    Matrix(int ColumnsCount, int StringsCounts);

    void Filling();

    Matrix add(Matrix SecondMatrix);

    Matrix substraction(Matrix SecondMatrix);

    Matrix multiplication(Matrix SecondMatrix);

    double ColumnElementsSum();

    double StringElementsSum();

    void get();

};


#endif //FIRST_LAB_MATRIX_H
