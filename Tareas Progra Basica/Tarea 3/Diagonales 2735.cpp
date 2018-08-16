#include <iostream>
using namespace std;
void main() {
	locale::global(locale("spanish"));
	int n;
	cout << "Se calculará el numero de diagonales de un poligono regular" << endl; //Por si es necesario especificar :)
	cout << "Inserte el numero de lados de su polgigono regular" << endl;
	cin >> n;
	int d;
	d = (n * (n - 3)) / 2;
	cout << "Las diagonales del poligono son:" << d << endl;
	system("pause");






}

