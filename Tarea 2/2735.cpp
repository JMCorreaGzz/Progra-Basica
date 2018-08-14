#include <iostream>
#include <locale.h>
using namespace std;
int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "spanish");
	cout << "Introduzca su nombre" << endl;
	   char nombre[20];
	cin >> nombre;
	cout << "Su apellido:" << endl;
	  char apellido[20];
	  cin >> apellido;
	cout << "Escriba su edad:" << endl;
	int edad;
		cin >> edad;
		cout << "Por ultimo, inserte su numero de telefono" << endl;
		char tel[20];
		cin >> tel;
		cout << "Nombre:" << apellido << "," << nombre <<"."<< endl;
		cout << "Edad:" << edad << " años." << endl;
		cout << "Telefono:" << "+52" << tel << endl;
		system("Pause");

}
