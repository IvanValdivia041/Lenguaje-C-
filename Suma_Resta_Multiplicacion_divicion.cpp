#include <iostream>
using namespace std;

int main(){
	//Practica_3
	//Realiza un programa que permita usar dos numeros
	//para realizar las cuartro operaciones al mismo tiempo
	
	//Definir variables
	int numero1;
	int numero2;
	int suma, resta, multiplicar, dividir;
	
	//Entrada
	cout <<"ingrese el primer numero: ";
	cin >>numero1;
	cout <<"ingrese el segundo numero: ";
	cin >>numero2;
	
	//Proceso
	suma = numero1+numero2;
	resta= numero1-numero2;
	multiplicar= numero1*numero2;
	dividir=numero1/numero2;
	
	//Salida
	cout <<"La suma de dos numeros es: " <<suma <<endl;
	cout <<"La resta de dos numeros es: " <<resta <<endl;
	cout <<"la multiplicacion de dos numeros es: " <<multiplicar <<endl;
	cout <<"la divicion de dos numeros es: " <<dividir <<endl;
	
	
	return 0;
}
