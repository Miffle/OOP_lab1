#include "Matrix.h"
#include <iostream>

using namespace std;


Matrix::Matrix(int ColumnsCount, int StringCounts) {
    matrix = new int(ColumnsCount * StringCounts);
    columns_count = ColumnsCount;
    strings_count = StringCounts;
}

void Matrix::Filling() {
    for (int i = 0; i < columns_count; i++) {
        for (int j = 0; j < strings_count; j++) {
            cout << "Введи " << i << " " << j << " элемент" << endl;
            cin >> *(matrix + i * strings_count + j);
        }
    }
}

void Matrix::get() {
    for (int column = 0; column < columns_count; cout << endl, column++) {
        for (int string = 0; string < strings_count; string++) {
            cout << *(matrix + column * strings_count + string);
        }

    }

}

