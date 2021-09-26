
#include<iostream>
using namespace std;


#define SIN_TIPO string



int main() {
	float cantidad;
	float cantidad1;
	string contrasena;
	string opc;
	string opc1;
	float total;
	float total1;
	cout << "Ingresa una contrasena" << endl;
	cin >> contrasena;
	if (contrasena=="2021") {
		cout << "Los datos son correctos" << endl;
		cout << "Su nombre de usuario es Yulmi Yosmeri Contreras Cruz" << endl;
		cout << "Numero de carnet: 0909-21-1747" << endl;
		cout << " Usted tiene una tarjeta de credito en que tipo de moneda desea utilizar Q O $" << endl;
		cin >> opc;
		if (opc=="Q" || opc=="q") {
			cout << "Tarjeta de credito con un saldo disponible de Q5,000.00" << endl;
			cout << "Desea hacer alguna transaccion" << endl;
			cout << "si" << endl;
			cout << "no" << endl;
			cin >> opc;
			if (opc=="si") {
				cout << "Cuanto es la cantidad que desea transaccion" << endl;
				cin >> cantidad;
				if (cantidad>=5000.00) {
					cout << "Saldo insuficiente" << endl;
				} else {
					total = (5000.00-cantidad);
					cout << "La cantidad transferida es de:-Q" << cantidad << endl;
					cout << "El saldo que quedo es de:Q" << total << endl;
				}
			} else {
				cout << "Su transferencia a sido cancelada con exito" << endl;
			}
		} else {
			if (opc=="$") {
				cout << "Tarjeta de credito con un saldo disponible de $650.00" << endl;
				cout << "Desea hacer alguna transaccion" << endl;
				cout << "Si" << endl;
				cout << "No" << endl;
				cin >> opc1;
				if (opc1=="si") {
					cout << "Cuanto es la cantidad que desea trasnferir" << endl;
					cin >> cantidad1;
					if (cantidad1>=650.00) {
						cout << "Cantidad insuficiente" << endl;
					} else {
						total1 = (650.00-cantidad1);
						cout << "La cantidad traferida es de:-$" << cantidad1 << endl;
						cout << "El saldo que quedo es de :$" << total1 << endl;
					}
				} else {
					cout << "Su transferencia a si cancelada con exito!!" << endl;
				}
			} else {
				cout << "Error" << endl;
			}
		}
	} else {
		cout << "Los datos son incorrectos" << endl;
	}
	return 0;
}

