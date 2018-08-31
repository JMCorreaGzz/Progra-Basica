#include <iostream>

using namespace std;
int op = 0;
void cal();
void por();
void sala();
void escaleras();
void sarriba();
void habitacion1();
void habitacion2();
void habitacion3();
void cocina();
void escaleras2();
void salida();

int main(){
	locale::global(locale("spanish"));
	cal();
	system("pause");
}

void cal(){
	system("cls");
	cout << "Te encuentras en la calle\nQuieres pasar al porche de la casa?\t\n1. Si\n2. No" << endl;
	cin >> op;
	if (op == 1) {
		cout << "Bienvenido a mi casa" << endl;
		por();
	}
	else {
		cout << "Bueno, quedate afuera :)" << endl;
	}
	system("pause");
	cal();
}

void por(){
	system("cls");
	cout << "Estas en el porche\n Hay flores aqui y un asador\nHacemos una carnita asada?\n1. Si \n2. No, prefiero entrar a la casa" << endl;
	cin >> op;
		if (op == 1) {
			cout << "¡Ajúa pariente!" << endl;
			por();
		}
		else if (op!=1){
			cout << "Te lo pierdes, entonces" << "\nQuieres recorrer la casa?\n1. Si\n2. No" << endl;
			cin >> op;
			sala();
		}

}

void sala(){
	system("cls");
	cout << "Estamos en la sala, aqui hay sillones \nToma asiento \n1. Se queda de pie\n2. Se sienta" << endl;
	cin >> op;
	if (op != 2) {
		cout << "Bueno... vamos a la parte de arriba" << endl;
		escaleras();
	}
	else {
		sala();
	}
}

void escaleras() {
	cout << "Acabamos de subir las escaleras\n Aqui hay un escritorio con varios libros y una computadora\nQuieres encender la computadora?\n1. Si\n2. No" << endl;
	cin >> op;
	if (op == 1) {
		cout << "No deberias de usar lo que no es tuyo" << endl;
	}
	else {
		cout << "Respetas lo ajeno... Me agradas" << endl;
	}
	sarriba();
}
void sarriba() {
	system("cls");
	cout << "Aqui hay una pequeña sala que conecta a otros cuartos\nTe interesa ir a uno de ellos?\n1. Habitacion 1\n2. Habitacion 2\n3.Habitacion 3." << endl;
		cin >> op;
		switch (op) {
		case 1: habitacion1(); {
			break; }
		case 2: habitacion2(); {
			break; }

		case 3: habitacion3(); {
			break; }
		}
		cout << "Quieres volver abajo? \n1. Si\n2. No" << endl;
		cin >> op;
		if (op == 1) {
			escaleras2();
		}
	} //Sala de arriba

void habitacion1() {
	cout << "Este es mi cuarto, algo desordenado como de costumbre, puedes ver ahi mis libros, mi cama y a la izquierda el closet" << endl;
	cout << "Quieres recostarte en la cama? \n1.Si\n2. No" << endl;
	cin >> op;
	if (op == 1) {
		cout << "Estas acostado... Holgazan" << endl;
	}
	else {
		cout << "Que bueno, ni la he tendido" << endl;
	}
	sarriba();
}

void habitacion2(){
	system("cls");
	cout << "Es el cuarto de mi hermana, sera mejor no entrar... por tu bien" << endl;
	sarriba();
}

void habitacion3(){
	system("cls");
	cout << "Esa ultima habitacio es el cuarto de mis padres, su cama matrimonial esta a plena vista como su sillon reclnable" << endl;
	sarriba();
}

void escaleras2() {
	system("cls");
	cout << "Hemos bajado de las escaleras, podemos ver el comedor vacio, esta resevado para cenas familiares\n Solo que por ver la cocina\n Vamos?\n1. Si 2.Mejor me voy" << endl;
	cin >> op;
	if (op == 1) {
		cocina();
	}
	else {
		cout << "Bueno, adios. Gracias por venir" << endl;
		salida();
	}
}

void cocina() {
	cout << "Bueno, es la ultima parada, aqui podemos ver una cocina ambientada lo mas mexicana posible, con esos mosaicos de colores y la predomiinacion del naranja" << endl;
	cout << "Quieres un bocadillo?\n1.  Me encantaria\n2. No gracias, estoy bien" << endl;
	cin >> op;
	if (op == 1) {
		cout << "Has recibido un Sandwiich, con aguacate" << endl;
		salida();
	}
	else {
		cout << "Gracias por venir, espero que lo hayas disfrutado" << endl;
		salida();

	}
}
 
void salida(){
	system("cls");
		cout << "Adios" << endl;
	system("pause");
}

