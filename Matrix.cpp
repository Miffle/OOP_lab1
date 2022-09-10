//
// Created by shakal on 10.09.22.
//

#include "Matrix.h"
#include <iostream>

using namespace std;

Matrix::Matrix(int user_string_count, int user_columns_count) {
    string_count = user_string_count;
    columns_count = user_columns_count;
}

int Matrix::makingMatrix() {
    matrix = new int(string_count * columns_count);
    return 0;
}

void Matrix::get_result() {
    cout << matrix;
}


