//
// Created by shakal on 10.09.22.
//

#ifndef FIRST_LAB_MATRIX_H
#define FIRST_LAB_MATRIX_H


#include <cstdlib>

class Matrix {
private:
    int *matrix, string_count, columns_count;

public:
    Matrix(int user_string_count, int user_columns_count);
    int makingMatrix();
    void get_result();


};


#endif //FIRST_LAB_MATRIX_H
