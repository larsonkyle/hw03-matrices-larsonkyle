#include "matrix.h"

//fileIO(string filename, int A[][AR_CAP], int& n1, int& m1, int B[][AR_CAP], int& n2, int& m2)

int main() {
	string filename = "../input.txt";

	int A[AR_CAP][AR_CAP];
	int B[AR_CAP][AR_CAP];
	int C[AR_CAP][AR_CAP];

	int n1;
	int m1;
	int n2;
	int m2;

	fileIO(filename, A, n1, m1, B, n2, m2);

	print2DMatrix(A, n1, m1);
	print2DMatrix(B, n2, m2);

	matrixAddition(A, n1, m1, B, n2, m2, C);

	print2DMatrix(C, n1, m1);

	matrixSubtraction(A, n1, m1, B, n2, m2, C);

	print2DMatrix(C, n1, m2);

	matrixTranspose(C, n1, m1, C);

	print2DMatrix(C, n1, m1);

	cout << endl << "The Determinant of the previous matrix is: " << matrixDeterminant3D(C, n1, m1) << endl;
	
	return 0;
}

