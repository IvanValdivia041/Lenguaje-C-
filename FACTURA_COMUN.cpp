#include <iostream>
#include <string>
using namespace std;
int main( ){
	//Practica
	//Realize un programa que permita simular la factura
	//que emite las tiendas qie encontramos en distintos sitios
	//con los siguientes datos: cliente, producto, cantidad,
	//precio, subtotal, total.
	
	//Definir variables
	string cliente;
	string producto1,producto2;
	int numero;
	int cantidad1,cantidad2;
	int precio1,precio2;
	int subtotal1,subtotal2;
	int total;
	
	//Entrada
	cout<<"Ingrese el nombre del cliente: ";
	getline(cin,cliente);
	cout<<"Ingrese el Nit o el numero de C.I. : ";
	cin>>numero;
	
	cout<<"Ingrese el nombre del primer producto: ";
	cin.ignore();
	getline(cin,producto1);
	cout<<"Ingrese el precio del pimer producto: ";
	cin>>precio1;
	cout<<"ingrese la cantidad del pirmer producto: ";
	cin>>cantidad1;
	
	cout<<"Ingrese el nombre del segundo producto: ";
	cin.ignore();
	getline(cin,producto2);
	cout<<"ingrese la precio del segundo producto: ";
	cin>>precio2;
	cout<<"ingrese la cantidad del segundo producto: ";
	cin>>cantidad2;

	//Proceso
	subtotal1=precio1*cantidad1;
	subtotal2=precio2*cantidad2;
	total=subtotal1+subtotal2;
	
	//Salida
	cout<<"====================================="<<endl;
	cout<<"     FACTURA DE LIBRERIA SOLES       "<<endl;
	cout<<"====================================="<<endl;
	cout<<"Cliente: "<<cliente<<endl;       
	cout<<"Nit o CI"<<numero<<endl;        
	cout<<"-------------------------------------"<<endl;
	cout<<"Cant.  Detalle  P. Unitario  subtotal"<<endl;
	cout<<"-------------------------------------"<<endl;
	cout<<"Producto: "<<producto1<<endl;
	cout<<"Cantidad: "<<cantidad1<<endl;
	cout<<"Precio: "<<precio1<<endl;
	cout<<"Producto: "<<producto2<<endl;
	cout<<"Cantidad: "<<cantidad2<<endl;
	cout<<"Precio: "<<precio2<<endl;
	cout<<"-------------------------------------"<<endl;
	cout<<"Subtotal          : Bs. "<<total<<endl;
	cout<<"IVA Incluido      : Bs. " <<endl;   
	cout<<"TOTAL A PAGAR     : Bs. "<< total<<endl;
	cout<<"-------------------------------------"<<endl;
	cout<<"       GRACIAS POR SU COMPRA         "<<endl;
	cout<<"-------------------------------------"<<endl;

	return 0;
}
