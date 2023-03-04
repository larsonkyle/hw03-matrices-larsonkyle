#include "matrix.h"

void fileIO(string filename, int A[][AR_CAP], int& n1, int& m1, int B[][AR_CAP], int& n2, int& m2) {
	ifstream iFile;
//	filename = "input.txt";

	iFile.open(filename);
	//if (iFile.is_open()) {
		iFile >> n1;
		iFile >> m1;

		for (int rows = 0; rows < m1; rows++) 
			for (int cols = 0; cols < n1; cols++)
				iFile >> A[rows][cols];

		iFile >> n2;
		iFile >> m2;

		for (int rows = 0; rows < m2; rows++)
			for (int cols = 0; cols < n2; cols)
				iFile >> B[rows][cols];
	//}
	//else
		//std::cout << "ERROR: file did not open." << std::endl;

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
	for (int rows = 0; rows < m1; rows++)      
		for (int cols = 0; cols < n1; cols++) 
			res[rows][cols] = A[rows][cols] * B[rows][cols];
}

void matrixTranspose(int M[][AR_CAP], int n, int m, int res[][AR_CAP]){
	for (int rows = 0; rows < m; rows++)      
		for (int cols = 0; cols < n; cols++)
			res[rows][cols] = M[cols][rows];
}

double matrixDeterminant3D(int M[][AR_CAP], int n, int m){
	return 0.00;
}

void print2DMatrix(const int M[][AR_CAP], int n1, int m1) {
	cout << "2D Matrix: " << endl;

	for (int rows = 0; rows < m1; rows++){
		for (int cols = 0; cols < n1; cols++){
			cout << M[rows][cols];
		}
		cout << endl;
	}

}
