#include <stdio.h>
#include <windows.h>
#include "C:\Users\kwinn\CLionProjects\lab_15\libs\data_structures\matrix\matrix.h"

int getMin(int *a, int n) {
    int min = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] < min) {
            min = a[i];
        }
    }
    return min;
}

void sortRowsByMinElement(matrix m) {
    insertionSortColsMatrixByColCriteria(m, getMin);
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int quantity_rows, quantity_columns;
    printf("Введите количество рядов и столбцов: ");
    scanf("%d %d", &quantity_rows, &quantity_columns);

    matrix m = getMemMatrix(quantity_rows, quantity_columns);
    printf("Введите элементы матрицы: ");
    inputMatrix(m);
    sortRowsByMinElement(m);
    outputMatrix(m);

    return 0;
}
