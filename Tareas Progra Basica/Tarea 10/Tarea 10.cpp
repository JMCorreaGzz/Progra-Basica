#include <iostream>
using namespace std;

int main() {
	int base;
	int altura;

	cout << "Base:" << endl;
	cin >> base;

	cout << "Altura:" << endl;
	cin >> altura;

	int area = base * altura;
	for (int j = 0; j < altura+2; j++) {
		cout << "|";
		for (int i = 0; i < base; i++) {
			if ((j == 0) || ((altura+2)-j == 1)) {
				cout << "-";
			}
			else {
				cout << "*";
			}
			//
		 //if (i % base == 0) {
			// cout << "\n" << "|"; //Necesito imprimir el perimetro de la matriz
			//}
		 //
			//cout << "* ";

		}
		cout << "|" << endl;
	}
	system("pause");
}