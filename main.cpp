#include <iostream>

using namespace std;

bool BinBus(int*, int*, int*&, int);

int main() {

	int A[20];

	for (int i = 0; i < 20; i++) {
		A[i] = i * 2;
	}

	int* ini = A;
	int* fin = &A[20];
	int* pos = NULL;

	if (BinBus(ini, fin, pos, 7))cout << "Encontrado\n";

	return EXIT_SUCCESS;
}

bool BinBus(int* ini, int * fin, int* &pos, int key) {
	while (true) {
		if (ini > fin)return false;


	}
	return true;
}
