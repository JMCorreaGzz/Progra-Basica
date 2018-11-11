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
	char t[12];
	string m;
	float cal[3];
};

void dummy(DAl);

DAl  dt[100];

int ci = 0;

void main() {
	locale::global(locale("spanish"));
	DAl t;
	t.nom = "Jose";
	t.ap = "Correa";
	t.ce = "jose@correa.com";
	t.dir = "calle";
	string s = "1812735";
	t.m = s;
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
	t.m = s;
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
	cout << "\t\t\t\t\tBienvenido a la agenda digital\n\t\t\t\t\tQue desea hacer?" << endl;
	cout << "\t\t\t\t\t1. Agregar contacto\n\t\t\t\t\t2. Borrar Contacto\n\t\t\t\t\t3. Buscar contacto\n\t\t\t\t\t4. Mostrar todos\n\t\t\t\t\t5. Agregar calificaciones" << endl;
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
	case 5:
		ca();
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
				cin.ignore();
				cout << "Matricula:" << endl;
				getline(cin, dt[ci].m);
					for (int j = 0; j < ci; j++) {
						string t = dt[ci].m;
						if (t == dt[j].m) {
							cout << "Matricula no disponible" << endl;
							m = false;
							break;
						} 
						else { m = true; break; }
					}
			} while (m == false);
			cout << "Dirección" << endl;
			getline(cin, dt[ci].dir);
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
	string mb;
	int t = 0;
	cin.ignore();
	cout << "Inserte la matricula a buscar" << endl;
	getline(cin, mb);
	do {
		if (mb ==  dt[t].m) {
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
	int w = 0;
	string med;
	cin.ignore();
	cout << "Que almuno deseas editar? Inserte su Matricula" << endl;
    getline(cin, med);
	system("cls");
do{
	do {
		if (med == dt[w].m) {
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
				cin.ignore();
				cout << "Matricula nueva:" << endl;
				getline(cin, dt[w].m);
				for (int j = 0; j < ci; j++) {
					string tmp = dt[w].m;
					if (tmp == dt[j].m) {
						cout << "Matricula no disponible" << endl;
						mme = false;
						break;
					}
					else { mme = true; break; }
				}
			} while (mme == false);
			break; }
			case 5: cout << "Direccion nueva" << endl;
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
}while (op != 2);
	
	menu();

}

void bo() {
	system("cls");
	string mbo;
	cout << "Inserte la matricula del alumno a borrar" << endl;
	cin.ignore();
	getline(cin, mbo);
	for (int i = 0; i < ci; i++) {
		if (mbo == dt[i].m) {
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
		system("cls");
		cout << dt[i].nom << " " << dt[i].ap << " " << dt[i].m << endl;
		bool c1;
		do {
			cout << "Introduzca cal1" << endl;
			cin >> dt[i].cal[0];
			if (dt[i].cal[0] < 0 || dt[i].cal[0]>100) {
				cout << "Por favor introduzca valores validos" << endl;
				c1 = false;
			}
			else { c1 = true; }
		} while (c1 == false);
		bool c2;
		do {
			cout << "Introduzca cal2" << endl;
			cin >> dt[i].cal[1];
			if (dt[i].cal[1] < 0 || dt[i].cal[1]>100) {
				cout << "Por favor introduzca valores validos" << endl;
				c2 = false;
			}
			else { c2 = true; }
		} while (c2 == false);
		bool c3;
		do {
			cout << "Introduzca cal3" << endl;
			cin >> dt[i].cal[2];
			if (dt[i].cal[2] < 0 || dt[i].cal[2]>100) {
				cout << "Por favor introduzca valores validos" << endl;
				c3 = false;
			}
			else { c3 = true; }
		} while (c3 == false);


		

	}
	menu();
}

void ced() {
	system("cls");
	string mce; 
	int f = 0;
	cout << "A que alumno desea modificar su calificacion? Ingrese la matricula" << endl;
	cin.ignore();
	getline(cin, mce);
	while (f < ci) {
		system("cls");
		if (mce == dt[f].m) {
			cout << dt[f].nom << " " << dt[f].ap << "\nCalificacion 1\t " << dt[f].cal[0] << "\nCalificacion 2\t " << dt[f].cal[1] << "\nCalificacion 3\t " << dt[f].cal[2] << endl;
			cout << "Que calificacion deseas modificar?" << endl;
			cin >> op;
			switch (op) {
			case 1: 
			{bool c1d;
			do {
				cout << "Nueva calificacion 1: " << endl;
				cin >> dt[f].cal[0];
				if (dt[f].cal[0] < 0 || dt[f].cal[0]>100) {
					cout << "Por favor introduzca valores validos" << endl;
					c1d = false;
				} else { c1d = true; }
			} while (c1d == false);
			break; }
			case 2: { bool c2d;
				do {
					cout << "Nueva calificacion 2: " << endl;
					cin >> dt[f].cal[1];
					if (dt[f].cal[1] < 0 || dt[f].cal[1]>100) {
						cout << "Por favor introduzca valores validos" << endl;
						c2d = false;
					}
					else { c2d = true; }
				} while (c2d == false);
				break; }
			case 3: { bool c3d;
				do {
					cout << "Nueva calificacion 3: " << endl;
					cin >> dt[f].cal[2];
					if (dt[f].cal[2] < 0 || dt[f].cal[2]>100) {
						cout << "Por favor introduzca valores validos" << endl;
						c3d = false;
					}
					else { c3d = true; }
				} while (c3d == false);
				break; }
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
