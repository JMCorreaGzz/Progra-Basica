#include <iostream>
#include <string>
using namespace std;
void agr();
void bus();
void ed();
void bo();
void c();
void ced();
int op = 0;
string nom;
string ce;
string ap;
char t[15];
char m[10];
string dir;

void main() {
	locale::global(locale("spanish"));
	cout << "\t\t\t\t\tBienvenido a la agenda digital\n\t\t\t\t\tQue desea hacer?" << endl;
	cout << "\t\t\t\t\t1. Agregar contacto\n\t\t\t\t\t2. Editar contacto\n\t\t\t\t\t3. Borrar contacto\n\t\t\t\t\t4. Buscar contacto" << endl;
	cin >> op;
	switch (op) {
	case 1: 
		agr();
		break;
	case 2: 
		ed();
		break;
	
	case 3: 
		 bo();
		break;
	
	case 4: 
		 bus();
		break;
	
	}


		system("pause");
}

void agr() {
	system("cls");
	cout << "Nombre:" << endl;
	cin >> nom;
	cout << "Apellidos:" << endl;
	cin >> ap;
	cout << "Correo electronico:" << endl;
	cin >> ce;
	cout << "Telefono:" << endl;
	cin >> t;
	cout << "Matricula:" << endl;
	cin >> m;
	cout << "Dirección" << endl;
	cin >> dir;

}
void bus() {
	system("cls");
	cout << "Aqui se buscaria el contacto" << endl;
	
}

void ed() {
	system("cls");
	cout << "Aqui se editaría el contacto" << endl;
	
}

void bo() {
	system("cls");
	cout << "Aqui se borraría el contacto" << endl;

}
void c() {
	cout << "Aqui se almacenarán las calificaciones" << endl;

}
void ced() {
	cout << "Aqui se editan las calificaciones" << endl;
}