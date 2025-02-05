#include <iostream>
#include <random>
#include <vector>
#include <cmath>

#include "../Activation/activation.hpp"

using namespace std;
class Matrix{
	private:
		int rows;
		int cols;
		vector<vector<double>> matrix;
	public:
		Matrix();
		Matrix(int rows, int cols);
		Matrix(int rows, int cols, double value);
		Matrix(int rows, int cols, double min, double max, double seed);
		Matrix(int rows, int cols, double min, double max);
		Matrix(int rows, int cols, vector<vector<double>> matrix);
		~Matrix();

		double& operator()(int row, int col);

		/*__scalar_operator__*/
		Matrix operator+(double scalar);
		Matrix operator*(double scalar);
		Matrix operator-(double scalar);
		Matrix operator/(double scalar);

		/*__matrix_operator__*/
		Matrix operator^(Matrix& matrix); //matmul
		Matrix operator*(Matrix& matrix); //mul
		Matrix operator+(Matrix& matrix); 
		Matrix operator-(Matrix& matrix);

		Matrix operator-();

		/*__getter__*/
		int getRows();
		int getCols();

		/*__method__*/
		double sum();

		Matrix transpose();
		Matrix square();
		Matrix exp();
		Matrix log();

		/*__activation__*/
		Matrix sigmoid();
		Matrix tanh();
		Matrix relu();
		Matrix softmax();

		/*__derivative_activation__*/
		Matrix dSigmoid();
		Matrix dTanh();
		Matrix dRelu();

		void print() const;
};
