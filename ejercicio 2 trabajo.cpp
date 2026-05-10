 /*    Escriba, compile y ejecute un programa en C++ que emplee instrucciones repetitivas
       para determinar el número de vehículos cuyo precio de venta sea menor de 25.000$,
       entre 75.000$ y 120.000$ y mayores de $ 120.000$ de un total de n ventas realizadas mensualmente
       ingresada por teclado. No se permite usar arreglos, ni funciones en este ejercicio.
 
 */
#include <iostream>
using namespace std;
int main() {
    
    float precio;
    int numerodeventas=0;
	int i=0; 
    int preciobajo=0;
	int preciomedio=0;
	int precioalto=0;
    int repetir=0;
    
    do{
    cout << "Ingrese el total de ventas que quiere realizar "<<endl;
    cin >> numerodeventas;

    do {
        cout << "Ingrese precio del vehiculo " <<endl;
        cin >> precio;

        if (precio < 25000) {
            preciobajo+=1;
            cout << "Vehiculo Registrado" << endl;
        } 
        else if (precio >= 75000 && precio <= 120000) {
            preciomedio+=1;
            cout << "Vehiculo Registrado" << endl;
        } 
        else if (precio > 120000) {
            precioalto+=1;
            cout << "Vehiculo Registrado" << endl;
        } 
        else {
            cout << "Precio fuera de los rangos solicitados" << endl;
        }

        i++; 

    } while (i < numerodeventas);  

    
    cout << "\nVehiculos menores de 25000: " << preciobajo << endl;
    cout << "Vehiculos entre 75000 y 120000: " << preciomedio << endl;
    cout << "Vehiculos mayores de 120000: " << precioalto << endl;
    
     cout<<"¿desea procesar mas ventas? " << endl;
    cout<<"Si(1)"<<endl;
    cout<<"No(2)"<<endl;
    cin>> repetir;
    	
	} while( repetir== 1);
    

    return 0;
} 
