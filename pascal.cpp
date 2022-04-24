#include "pascal.h"

int pascal(int row, int col) {
    if (col == 0 || row == col) return 1;
    if (col>row) return 0;
    return pascal(row - 1, col) + pascal(row - 1, col - 1);
}