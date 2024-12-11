#ifndef MAT_OP_H
#define MAT_OP_H
#include <vector>

void printMatrix(const std::vector<std::vector<double>> &matrix);
double getDet(std::vector<std::vector<double>>& matrix);
std::vector<std::vector<double>> getMinor(std::vector<std::vector<double>>& matrix,int row, int col);

#endif