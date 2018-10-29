#include <iostream>
#include <string>
#include <fstream>
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
	char t[12];
	char m[15];
	float cal[3];
};

void dummy(DAl);

DAl  dt[100];

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
			bool v;
			cin.ignore();
			do {
				cout << "Telefono:" << endl;
				cin >> dt[ci].t;
				int cv = 0;
				int cnv = 0;
				int size = strlen(dt[ci].t);
				for (int i = 0; i < size; i++) {
					if (dt[ci].t[i] >= 48 && dt[ci].t[i] <= 57) {
						cnv++;
					}
					else {
						cv++;
					}
				}
				v = true;
				if (cv > 0) { v = false; cout << "No todos son numeros" << endl; }
				else if (cnv < 8 || cnv > 12) { v = false; cout << "No son los 8 ó 12 números" << endl; }
			} while (v == false);
			bool m;
			do {
				cout << "Matricula:" << endl;
				cin >> dt[ci].m;
				int cm = 0;
				int clm = 0;
				int tam = strlen(dt[ci].m);
					for (int i = 0; i < tam; i++) {
						if (dt[ci].m[i] >= 48 && dt[ci].m[i] <= 57) {
							clm++;
						}
						else {
							cm++;
						}
					} m = true;
					if (cm > 0) { m = false; cout << "No todos son numeros" << endl; }
					else if (clm > 15) { m = false; cout<< "Exceso de numeros para matricula" << endl; }
					for (int j = 0; j < ci; j++) {
						if (strcmp(dt[ci].m, dt[j].m) == 0) {
							cout << "Matricula no disponible" << endl;
							m = false;
							break;
						} 
					}
			} while (m == false);
			cout << "Dirección" << endl;
			cin.ignore();
			getline(cin, dt[ci].dir);
			cin.ignore();
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
	char med[15];
	int w = 0;
	cout << "Que almuno deseas editar? Inserte su Matricula" << endl;
	cin >> med;
	system("cls");
do{
	do {
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
			case 3:
			{bool ved;
			cin.ignore();
			do {
				cout << "Telefono nuevo:" << endl;
				cin >> dt[w].t;
				int cve = 0;
				int cnve = 0;
				int size = strlen(dt[w].t);
				for (int i = 0; i < size; i++) {
					if (dt[w].t[i] >= 48 && dt[w].t[i] <= 57) {
						cnve++;
					}
					else {
						cve++;
					}
				}
				ved = true;
				if (cve > 0) { ved = false; cout << "No todos son numeros" << endl; }
				else if (cnve < 8 || cnve > 12) { ved = false; cout << "No son los 8 ó 12 números" << endl; }
			} while (ved == false);

			break; }
			case 4:
			{bool mme;
			do {
				cout << "Matricula nueva:" << endl;
				cin >> dt[w].m;
				int cme = 0;
				int clme = 0;
				int tame = strlen(dt[w].m);
				for (int i = 0; i < tame; i++) {
					if (dt[w].m[i] >= 48 && dt[w].m[i] <= 57) {
						clme++;
					}
					else {
						cme++;
					}
				} mme = true;
				if (cme > 0) { mme = false; cout << "No todos son numeros" << endl; }
				else if (clme > 15) { mme = false; cout << "Exceso de numeros para matricula" << endl; }
				for (int j = 0; j < ci; j++) {
					if (strcmp(dt[w].m, dt[j].m) == 0) {
						cout << "Matricula no disponible" << endl;
						mme = false;
						break;
					}
				}
			} while (mme == false);
			break; }
			case 5: cout << "Direccion nueva" << endl;
				cin.ignore();
				getline(cin, dt[w].dir);
			case 6: cout << "Correo electronico nuevo" << endl;
				getline(cin, dt[w].ce);
				break;
			}
		}
		w++;
	} while (w < ci);
	cout << "Deseas cambiar otro dato\n1. Si\n2. No" << endl;
	cin >> op;
}while (op != 1);
	
	menu();

}

void bo() {
	system("cls");
	char mbo[10];
	cout << "Inserte la matricula del alumno a borrar" << endl;
	cin >> mbo;
	for (int i = 0; i < ci; i++) {
		if (strcmp(mbo, dt[i].m) == 0) {
			cout << "Encontré a: " << dt[i].m << endl;
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
		cout << "Calificacion 3 " << dt[s].cal[2] << endl << endl;
		s++;
	} while (s < ci);
	system("pause");
	menu();
}
