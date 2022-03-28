#include "matrix.hpp"

Matrix Matrix::transpose(){
	Matrix transposed(cols, rows);
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			transposed(j, i) = matrix[i][j];
		}
	}
	return transposed;
}

Matrix Matrix::square(){
	Matrix squared(rows, cols);
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			squared(i, j) = matrix[i][j] * matrix[i][j];
		}
	}
	return squared;
}

void Matrix::print() const{
	for(int i=0; i<rows; i++){
		for(int j=0; j<cols; j++) {
			printf("%.4f  ", matrix[i][j]);
		}
		cout << endl;
	}
	cout << endl;
}