#include "matrix.h"

void fileIO(string filename, int A[][AR_CAP], int& n1, int& m1, int B[][AR_CAP], int& n2, int& m2) {
	ifstream iFile;

	iFile.open(filename.c_str());
	if (iFile.is_open()) {
		iFile >> n1;
		iFile >> m1;

		for (int rows = 0; rows < m1; rows++) { 
			for (int cols = 0; cols < n1; cols++) {
				iFile >> A[rows][cols];
			}
		}
		iFile >> n2;
		iFile >> m2;

		for (int rows = 0; rows < m2; rows++) {
			for (int cols = 0; cols < n2; cols++) {
				iFile >> B[rows][cols];
			}
		}
	}
	else {
		std::cout << "ERROR: file did not open." << std::endl;
	}
iFile.close();
}

void matrixAddition(const int A[][AR_CAP], int n1, int m1, const int B[][AR_CAP], int n2, int m2, int res[][AR_CAP]){
	for (int rows = 0; rows < m1; rows++)
		for (int cols = 0; cols < n1; cols++) 
			res[rows][cols] = A[rows][cols] + B[rows][cols];
}

void matrixSubtraction(int A[][AR_CAP], int n1, int m1, int B[][AR_CAP], int n2, int m2, int res[][AR_CAP]){
	for (int rows = 0; rows < m1; rows++) 
		for (int cols = 0; cols < n1; cols++) 
			res[rows][cols] = A[rows][cols] - B[rows][cols];
}

void matrixMultiplication(int A[][AR_CAP], int n1, int m1, int B[][AR_CAP], int n2, int m2, int res[][AR_CAP]){
	for (int r = 0; r < m1; r++)      
		for (int c = 0; c < n2; c++)
			for (int k = 0; k < n1; k++)
				res[r][c] += A[r][k] * B[k][c];
			
}

void matrixTranspose(int M[][AR_CAP], int n, int m, int res[][AR_CAP]){
	for (int rows = 0; rows < m; rows++)      
		for (int cols = 0; cols < n; cols++)
			res[rows][cols] = M[cols][rows];
}

double matrixDeterminant3D(int M[][AR_CAP], int n, int m){
	return (M[0][0] * ((M[1][1] * M[2][2]) - (M[2][1] * M[1][2]))) - 
		(M[0][1] * ((M[1][0] * M[2][2]) - (M[2][0] * M[1][2]))) + 
		(M[0][2] * ((M[1][0] * M[2][1]) - (M[1][1] * M[2][0])));
}

void print2DMatrix(const int M[][AR_CAP], int n1, int m1) {
	cout << "2D Matrix: " << endl;

	for (int rows = 0; rows < m1; rows++){
		for (int cols = 0; cols < n1; cols++){
			cout << M[rows][cols] << " ";
		}
		cout << endl;
	}

}

