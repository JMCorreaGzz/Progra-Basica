#include <iostream>
#include <math.h>
using namespace std;

void main() {
	locale::global(locale("spanish"));
	float alf;
	cout << "Se calculara las cordenadas en X y Y dado el angulo y el radio" << endl;
	system("pause");
	cout << "Ingresa el angulo sexagesimal, mas bien el angulo en grados°:" << endl;
	cin >> alf;
	alf = alf * (3.141592 / 180);
	float r;
	cout << "Ingresa el valor del radio:"<< endl;
		cin >> r;
		float x;
			float y;
		x = r * cos(alf);
		y = r * sin(alf);
		
		cout << "Coordenadas en X y Y:" << endl;
		cout << "(" << x << "," << y << ")" << endl;

		system("pause");
			
}