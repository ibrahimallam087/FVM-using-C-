#include <iostream>
#include <vector>
#include "mat_op.h"


int main(void){
    std::vector <std::vector<double>> matrix = {
        {1,3,5,5},
        {0,2,4,4},
        {0,0,3,3},
        {0,0,0,2}
    };
    double det = 0;
     det = getDet(matrix);
     std::cout<<"the determinant is : "<<det<<std::endl;
     
     return 0;

}