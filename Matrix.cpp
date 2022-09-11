#include "Matrix.h"
#include <iostream>

using namespace std;


Matrix::Matrix(int ColumnsCount, int StringCounts) {
    matrix = new int *[StringCounts];
    for (int columns = 0; columns < StringCounts; columns++) {
        matrix[columns] = new int[ColumnsCount];
    }
    columns_count = ColumnsCount;
    strings_count = StringCounts;
}

void Matrix::Filling() {
    for (int string = 0; string < strings_count; string++) {
        for (int column = 0; column < columns_count; column++) {
            cout << "Введи " << string << " " << column << " элемент" << endl;
            cin >> matrix[string][column];
        }
    }
}

void Matrix::get() {
    for (int string = 0; string < strings_count; string++) {
        for (int column = 0; column < columns_count; column++) {
            cout << matrix[string][column] << "\t";
        }
        cout << endl;
    }
}

Matrix Matrix::add(Matrix SecondMatrix) {
    cout << "Сложение"<<endl;
    Matrix ResultMatrix = *new Matrix(columns_count, strings_count);
    for (int string = 0; string < strings_count; string++) {
        for (int column = 0; column < columns_count; column++) {
            ResultMatrix.matrix[string][column] = matrix[string][column] + SecondMatrix.matrix[string][column];
        }
    }
    return ResultMatrix;
}

Matrix Matrix::substraction(Matrix SecondMatrix) {
    cout << "Вычитание"<<endl;
    Matrix ResultMatrix = *new Matrix(columns_count, strings_count);
    for (int string = 0; string < strings_count; string++) {
        for (int column = 0; column < columns_count; column++) {
            ResultMatrix.matrix[string][column] = matrix[string][column] - SecondMatrix.matrix[string][column];
        }
    }
    return ResultMatrix;
}

Matrix Matrix::multiplication(Matrix SecondMatrix) {
    cout << "Умножение"<<endl;
    Matrix ResultMatrix = *new Matrix(columns_count, strings_count);
    for (int string = 0; string < columns_count; string++) {
        for (int column = 0; column < columns_count; column++) {
            ResultMatrix.matrix[string][column] = 0;
            for (int k = 0; k < columns_count; k++)
                ResultMatrix.matrix[string][column] += matrix[string][k] * SecondMatrix.matrix[k][column];
        }
    }
    return ResultMatrix;
}

double Matrix::ColumnElementsSum() {
    cout << "Сумма в столбцах ";
    for (int string = 0; string < strings_count; string++) {
        int sum = 0;
        for (int column = 0; column < columns_count; column++) {
            sum += matrix[column][string];
        }
        cout << sum << "\t";
    }
    cout << endl;
    return 0;
}

double Matrix::StringElementsSum() {
    cout << "Сумма в строках ";
    for (int column = 0; column < columns_count; column++) {
        int sum = 0;
        for (int string = 0; string < strings_count; string++) {
            sum += matrix[column][string];
        }
        cout << sum << "\t";
    }
    cout << endl;
    return 0;
}




