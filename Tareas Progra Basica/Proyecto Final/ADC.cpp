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
void menu();
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
DAl  dt[100];
int c = 0;
int ci = 0;

void main() {
	menu();

}

void menu() {

	system("cls");
	locale::global(locale("spanish"));
	cout << "\t\t\t\t\tBienvenido a la agenda digital\n\t\t\t\t\tQue desea hacer?" << endl;
	cout << "\t\t\t\t\t1. Agregar contacto\n\t\t\t\t\t2. Editar contacto\n\t\t\t\t\t3. Borrar contacto\n\t\t\t\t\t4. Buscar contacto\n\t\t\t\t\t5. Mostrar todos\n\t\t\t\t\t6. Registrar Calificaciones" << endl;
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
	case 6:
		ca();
		break;
	}
	system("pause");
}

void agr() {
	do {
		system ("cls");
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
		c++;
		cout << "Es correcta su informacion\n1. Si\n2. No" << endl;
		cin >> op;
	} while (op != 1);
	menu();
}
void bus() {
	system("cls");
	char mb[10];
	int t = 0;
	cout << "Inserte la matricula a buscar" << endl;
	cin >> mb;
	do {
		if (strcmp(mb,  dt[t].m) == 0) {
			cout << "Lo encontre" << endl;
		}
	 t++; 

	} while (t < ci);

	menu();
	
}

void ed() {
	system("cls");
	cout << "Aqui se editaría el contacto" << endl;

}

void bo() {
	system("cls");
	char mbo[10];
	int g = 0;
	cout << "Inserte la matricula del alumno a borrar" << endl;
	cin >> mbo;
	for (int i = 0; i < ci; i++) {
		if (strcmp(mbo, dt[g].m) == 0) {
			cout << "Encontré a: " << dt[g].m << endl;
			for (int j = i; j < ci; j++) {
				dt[j].nom = dt[j + 1].nom;
				dt[j].ap = dt[j + 1].ap;
				dt[j].ce = dt[j + 1].ce;
				dt[j].dir = dt[j + 1].dir;
			}
			ci--;
				break;
		}
	}
	menu();
}

void ca() {
	system("cls");
	for (int i = 0; i < ci; i++) {
		cout << "Introduzca cal1" << endl;
		cin >> dt[i].cal[0];

		cout << "Introduzca cal2" << endl;
		cin >> dt[i].cal[1];

		cout << "Introduzca cal3" << endl;
		cin >> dt[i].cal[2];

	}


	menu();

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
		for (int i = 0; i < ci; i++) {

			cout << "Calificacion 1" << dt[i].cal[0] << endl;


			cout << "Calificacion 2" << dt[i].cal[1] << endl;


			cout << "Calificacion 3" << dt[i].cal[2] << endl;
		}
	} while (s < ci);
	system("pause");
	menu();
}