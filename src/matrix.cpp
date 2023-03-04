#include "matrix.h"

void fileIO(std::string filename, int A[][AR_CAP], int& n1, int& m1, int B[][AR_CAP], int& n2, int& m2) {
	std::ifstream iFile;
//	filename = "input.txt";

	iFile.open(filename.c_str());
	if (iFile.is_open()) {
		iFile >> n1;
		iFile >> m1;

		for (int rows = 0; rows < m1; rows++) 
			for (int cols = 0; cols < n1; cols++)
				iFile >> A[cols][rows];

		iFile >> n2;
		iFile >> m2;

		for (int rows = 0; rows < m2; rows++)
			for (int cols = 0; cols < n2; cols)
				iFile >> B[cols][rows];
	}
	else
		std::cout << "ERROR: file did not open." << std::endl;

iFile.close();
}
