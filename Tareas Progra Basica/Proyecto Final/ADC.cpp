#include <iostream>
#include <string>
using namespace std;
void agr();
void bus();
void ed();
void bo();
void ca();
void ced();
void mos();
int op = 0;

struct DAl {
	string nom;
	string ce;
	string ap;
	string dir;
	char t[15];
	char m[10];
	float cal[3];
};
DAl  dt [100];
int c = 0;
int ci = 0;

void main() {
	
		system("cls");
		locale::global(locale("spanish"));
		cout << "\t\t\t\t\tBienvenido a la agenda digital\n\t\t\t\t\tQue desea hacer?" << endl;
		cout << "\t\t\t\t\t1. Agregar contacto\n\t\t\t\t\t2. Editar contacto\n\t\t\t\t\t3. Borrar contacto\n\t\t\t\t\t4. Buscar contacto\n\t\t\t\t\t5. Mostrar todos" << endl;
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
	case 5:
		mos();
		break;
	}
		system("pause");
}

void agr() { 
	do {
		system("cls");
		cout << "Nombre:" << endl;
		cin.ignore();
		getline(cin, dt[c].nom);
		cout << "Apellidos:" << endl;
		getline(cin, dt[c].ap);
		cout << "Correo electronico:" << endl;
		getline(cin, dt[c].ce);
		cout << "Telefono:" << endl;
		cin >> dt[c].t;
		cout << "Matricula:" << endl;
		cin >> dt[c].m;
		cout << "Dirección" << endl;
		cin.ignore();
		getline(cin, dt[c].dir);
		
		ci++;
		cout << "Es correcta su informacion\n1. Si\n2. No" << endl;
		cin >> op;
	} while (op != 1);
	main();
}
void bus() {
	system("cls");
	cin.ignore();
	int cb = 0;
	char mb[10];
	cout << "Inserte la matricula a buscar" << endl;
	cin >> mb;
	while (cb <= ci) {
		if (dt[cb].m == mb) { cout << "fue encontrado" << endl; }
		cb++;
	}
	

	system("pause");
	main();

	
}

void ed() {
	system("cls");
	cout << "Aqui se editaría el contacto" << endl;
	
}

void bo() {
	system("cls");
	cout << "Aqui se borraría el contacto" << endl;

}
void ca() {
	for (int i = 0; i < ci; i++) {
		cout << "Introduzca las tres calificaciones" << endl;
		cin >> dt[i].cal;
		
	}

	main();

}
void ced() {
	cout << "Aqui se editan las calificaciones" << endl;
}
void mos() {
	system("cls");
	int s = 0;
	do {
		cout << dt[s].nom << " " << dt[s].ap << " " << dt[s].ce << " " << dt[s].t << " " << dt[s].m << " " << dt[s].dir << endl;
		s++;
	} while (s < ci);
	system("pause");
	main();
}