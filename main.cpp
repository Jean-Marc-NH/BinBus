#include <iostream>

using namespace std;

bool BinBus(int*, int*, int*&, int);

int main() {

	int A[20];

	for (int i = 0; i < 20; i++) { 
		A[i] = (i + 1) * 2; 
	}

	int* ini = A;
	int* fin = &A[19];
	int* pos = NULL;

	for (int i = 0; i < 20; i++) {
		cout << A[i] << " \n";
	}

	if (BinBus(ini, fin, pos, 20)) {
		cout << "Encontrado\n";
	}
	else {
		cout << "No encontrado";
	}

	return EXIT_SUCCESS;
}

bool BinBus(int* ini, int* fin, int*& pos, int key) {
	pos = ini;
	while (ini <= fin) {

		pos = pos + ((fin - ini)/2);

		cout << *pos << " ";

		if (*pos < key) {
			ini = pos + 1;
		}
		else if(*pos > key) {
			fin = pos - 1;
			cout << "fin: " << *fin << endl;
		}
		else {
			cout << "localizado\n";
			return true;
		}
	}
	return false;
}
