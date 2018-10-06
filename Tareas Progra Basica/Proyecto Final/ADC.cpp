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

void dummy(DAl);

DAl  dt[100];
int c = 0;
int ci = 0;

void main() {

	DAl t;
	t.nom = "Jose";
	t.ap = "Correa";
	t.ce = "jose@correa.com";
	t.dir = "calle";
	string s = "1812735";
	strcpy_s(t.m, s.c_str());
	s = "8111111";
	strcpy_s(t.t, s.c_str());
	t.cal[0] = 100;
	t.cal[1] = 100;
	t.cal[2] = 100;
	dummy(t);

	t.nom = "Angel";
	t.ap = "Hernandez";
	t.ce = "angel@hdz.com";
	t.dir = "calle";
	s = "1814445";
	strcpy_s(t.m, s.c_str());
	s = "8111111";
	strcpy_s(t.t, s.c_str());
	t.cal[0] = 50;
	t.cal[1] = 50;
	t.cal[2] = 50;
	dummy(t);

	menu();

}

void menu() {

	system("cls");
	locale::global(locale("spanish"));
	cout << "\t\t\t\t\tBienvenido a la agenda digital\n\t\t\t\t\tQue desea hacer?" << endl;
	cout << "\t\t\t\t\t1. Agregar contacto\n\t\t\t\t\t2. Borrar Contacto\n\t\t\t\t\t3. Buscar contacto\n\t\t\t\t\t4. Mostrar todos\n\t\t\t\t\t" << endl;
	cin >> op;
	switch (op) {
	case 1:
		agr();
		break;
	case 2:
		bo();
		break;
	case 3:
		bus();
		break;
	case 4:
		mos();
		break;
	}
	system("pause");
}

void dummy(DAl d) {
	dt[ci] = d;
	ci++;
}

void agr() {
	do {
		do {
			system("cls");
			cout << "Nombre:" << endl;
			cin.ignore();
			getline(cin, dt[ci].nom);
			cout << "Apellidos:" << endl;
			getline(cin, dt[ci].ap);
			cout << "Correo electronico:" << endl;
			getline(cin, dt[ci].ce);
			cout << "Telefono:" << endl;
			cin >> dt[ci].t;
			cout << "Matricula:" << endl;
			cin >> dt[ci].m;
			cout << "Direcci�n" << endl;
			cin.ignore();
			getline(cin, dt[ci].dir);
			cout << "Introduzca la calificacion 1:" << endl;
			cin >> dt[ci].cal[0];
			cout << "Introduzca la calificacion 2:" << endl;
			cin >> dt[ci].cal[1];
			cout << "Introduzca la calificacion 3:" << endl;
			cin >> dt[ci].cal[2];
			ci++;
			cout << "Es correcta su informacion\n1. Si\n2. No" << endl;
			cin >> op;
		} while (op != 1);
		system("cls");
		cout << "Desea agregar otro alumno \n1. Si \n2. No" << endl;
		cin >> op;
	} while (op != 2);
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
			system("cls");
			cout << "Encontre a: " << dt[t].nom << " " << dt[t].ap<< " " << dt[t].m << "\n Que deseas hacer?\n1. Borrar\n2. Editar Contacto\n3. Editar calificaciones" << endl;
			cin >> op;
			switch (op) {
			case 1: 
				bo();
				break;
			case 2: 
				ed();
				break;
			case 3:
				ced();
				break;
			}
		}
		else { cout << "Alumno no encontrado" << endl; }
	 t++; 
	
	} while (t < ci);
	system("pause");
	menu();
	
}

void ed() {
	system("cls");
	char med[10];
	int w = 0;
		while (w < ci) {
			
				cout << "Que almuno deseas editar? Inserte su Matricula" << endl;
				cin >> med;
				system("cls");
				if (strcmp(med, dt[w].m) == 0) {
					cout << " " << dt[w].nom << " " << dt[w].ap << " " << dt[w].m << " " << dt[w].t << " " << dt[w].dir << " " << dt[w].ce << endl;
					cout << " Que parte deseas editar? \n1. Nombre\n2. Apellido\n3. Telefono\n4. Matricula\n5. Direccion\n6. Correo Electronico" << endl;
					cin >> op;
					switch (op) {
					case 1: cout << "Nombre nuevo:" << endl;
						cin.ignore();
						getline(cin, dt[w].nom);
						break;
					case 2: cout << "Apellido(s) nuevo(s)" << endl;
						getline(cin, dt[w].ap);
						break;
					case 3: cout << "Telefono nuevo" << endl;
						cin >> dt[w].t;
						break;
					case 4: cout << "Matricula nueva" << endl;
						cin >> dt[w].m;
						break;
					case 5: cout << "Direccion nueva" << endl;
						cin.ignore();
						getline(cin, dt[w].dir);
					case 6: cout << "Correo electronico nuevo" << endl;
						getline(cin, dt[w].ce);
						break;
					}
				} break;
				w++;
				
			} 
		menu();
}

void bo() {
	system("cls");
	char mbo[10];
	cout << "Inserte la matricula del alumno a borrar" << endl;
	cin >> mbo;
	for (int i = 0; i < ci; i++) {
		if (strcmp(mbo, dt[i].m) == 0) {
			cout << "Encontr� a: " << dt[i].m << endl;
			for (int j = i; j < ci; j++) {
				dt[j] = dt[j + 1];
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
	system("cls");
	char mce[10]; 
	int f = 0;
	cout << "A que alumno desea modificar su calificacion? Ingrese la matricula" << endl;
	cin >> mce;
	while (f < ci) {
		system("cls");
		if (strcmp(mce, dt[f].m) == 0) {
			cout << dt[f].nom << " " << dt[f].ap << "\nCalificacion 1\t " << dt[f].cal[0] << "\nCalificacion 2\t " << dt[f].cal[1] << "\nCalificacion 3\t " << dt[f].cal[2] << endl;
			cout << "Que calificacion deseas modificar?" << endl;
			cin >> op;
			switch (op) {
			case 1: cout << "Nueva calificacion 1: " << endl;
				cin >> dt[f].cal[0];
				break;
			case 2: cout << "Nueva calificacion 2: " << endl;
				cin >> dt[f].cal[1];
				break;
			case 3: cout << "Nueva calificacion 3: " << endl;
				cin >> dt[f].cal[2];
				break;
			}
			break;
		}
		f++;
	}
	menu();
}
void mos() {
	system("cls");
	int s = 0;
	do {
		cout << dt[s].nom << " " << dt[s].ap << " " << dt[s].ce << " " << dt[s].t << " " << dt[s].m << " " << dt[s].dir << endl;
		cout << "Calificacion 1 " << dt[s].cal[0] << endl;
		cout << "Calificacion 2 " << dt[s].cal[1] << endl;
		cout << "Calificacion 3 " << dt[s].cal[2] << endl;
		s++;
	} while (s < ci);
	system("pause");
	menu();
}