#include<cstdlib>
#include<iostream>
#include<fstream>
#include<string.h>
#include<Windows.h>

using namespace std;


void menu();
void productos();
void consulta();


int main() {
	menu();
	return 0;
	
}

void productos(){

int codigo=0, minimo=0, actual=0, precio=0, articulo=0;
char provee[20]; 

	ofstream escritura;
	escritura.open("prod.txt", ios::out | ios::app);
	if (escritura.is_open()) {
		
		
		
		cout << "----------------------------------------\n";
		cout << "INGRESE LOS SIGUIENTES DATOS DEL ALMACEN\n";
		cout << "----------------------------------------\n";
		cin>>articulo;
		for(int i=0;i<articulo;i++){
		cout << "Ingresa codigo del articulo: ";
		cin >> codigo;
		cout << "Ingresa Nivel minimo del producto: ";
		cin >> minimo;
		cout << "Ingresa Nivel actual : ";
		cin >> actual;
		cout << "Ingresa Prooveedores: ";
		cin >> provee;
		cout << "Ingrese el Precio: ";
		cin >> precio;
		
		escritura << codigo << " " << minimo << " " << actual << " " << provee << " " << precio  << endl;
		}
	}
	else {
		cout << "Error, el Archivo No se Pudo Abrir" << endl;
	}
	escritura.close();

}//Fin funcion altas


void consultas() {
//	char cadena[100];
int codigo=0, minimo=0, actual=0, precio=0, articulo=0;
char provee[20]; 
	ifstream lectura;
	lectura.open("prod.txt", ios::out | ios::in | ios::app);
	if (lectura.is_open()) {
		while (!lectura.eof()) {
			cout << "__________" << endl;
			
			cout << "codigo: " << codigo << endl;
			lectura >> codigo;
			
			cout << "minimo: " << minimo << endl;
			lectura >> minimo;
			
			cout << "actual: " << actual << endl;
			lectura >> actual;
			
			cout << "provee: " << provee << endl;
			lectura >> provee;
			
			cout << "precio: " << precio << endl;
			lectura >> precio;
			
			cout << "__________" << endl;
			
		
		cout<<"\n";
		
	//	if(actual ==minimo)
	//		cout <<"minimo

		
		
	
		
	cout<<"\n"; 

		}
	

	cout<<"hacer pedido: "<<minimo<<endl;
	



	}else {
		cout << "Error, el Archivo No se Pudo Abrir, No ha sido creado" << endl;
	}

	lectura.close();
	system("pause");

}//Fin funcion consultas


void menu() {
	int opcion = 0;
	while (opcion != 1) {
		system("cls");
	 cout << "  ____________\n";
	 cout << " |         --> MENU <--          |\n";
	 cout << " | 1. AGREGAR PRODUCTOS         |\n";
	 cout << " | 2 MOSTRAR PRUDUCTOS         |\n";
			cout << "Que deseas hacer? ";
		cin >> opcion;
		switch (opcion) {
		case 1:
			system("cls");
			productos();
			break;
			
			case 2:
				system("cls");
				consultas();
				break;
	
		}
	}
}
