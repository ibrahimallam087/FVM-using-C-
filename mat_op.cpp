#include<iostream>
#include "mat_op.h"

void printMatrix(const std::vector<std::vector<double>> &matrix){
    for(const auto& row:matrix){
        for(const auto& elem:row){
            
            std::cout<<elem<<" " ;

        }
        std::cout<<std::endl;
    }
}

// Function to calculate the determinant of the matrix .

double getDet(std::vector<std::vector<double>>& matrix){
    //Base Case for the recursive function
    if(matrix.size()==2){
        return matrix[0][0]*matrix[1][1]-matrix[0][1]*matrix[1][0];
    }
    // Recursive Procedure 
    // Making cofactor expansion along the first row 
    double det=0;
    for(int j = 0;j<matrix.size();j++){
        std::vector<std::vector<double>> minor;
        minor= getMinor(matrix,0,j);
        det+=(j % 2 ==0 ? 1: -1 )*matrix[0][j]*getDet(minor);

    }
    return det;
}

//helper function used to get the minor matrix used to get the determinant.
std::vector<std::vector<double>> getMinor(std::vector<std::vector<double>>& matrix,int row, int col){
    std::vector<std::vector<double>> minor;
    for(int i=0;i<matrix.size();i++){
        if(i==row){
            continue;
        }
        std::vector<double> newRow;
        

        for(int j=0;j<matrix[i].size();j++){
            if(j==col){
                continue;
            }
            newRow.push_back(matrix[i][j]);
        }
        minor.push_back(newRow);
    }
    return minor;

}


    
    