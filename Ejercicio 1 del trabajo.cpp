/*
Realice un programa que permita convertir de números romanos a enteros.
 Para este programa no puede usar maps/diccionarios/tablas hash, 
 solo sentencias repetitivas, para evitar la repetición de código,
  para este ejercicio puede usar 2 funciones (si lo desea) (sin contar el main).
*/

#include <iostream>
using namespace std;


int obtenerValor(char c) {
	int suma=0;
	
    switch(c) {
            case 'I': suma += 1;
			 break;
            case 'V': suma += 5;
			 break;
            case 'X': suma += 10;
			 break;
            case 'L': suma += 50;
			 break;
            case 'C': suma += 100;
			 break;
            case 'D': suma += 500;
			 break;
            case 'M': suma += 1000;
			 break;
    }
    
    return suma;
}

int Romano(char texto[]) {
    int suma = 0;
    
    for(int i = 0; texto[i] != '\0'; i++) {
        
        if(texto[i] >= 'a' && texto[i] <= 'z'){
            cout << "Error: use mayusculas" << endl;
        }
        
       
        int actual = obtenerValor(texto[i]);
        int siguiente = obtenerValor(texto[i+1]); 

		if(actual == 0){
        	cout << "Error: Caracteres invalidos" << endl;	
		}
        if (actual < siguiente) {
            suma -= actual; 
        } else {
            suma += actual; 
        }
    }
    return suma;
}

int main() {
    char numeroR[30];
    int opc;

    do {
        cout << "Caracteres validos: I, V, X, L, C, D, M" << endl;
         cout << "I=1, V=5, X=10, L=50, C=100, D=500, M=1000" << endl;
        cout << "Ingrese el numero romano: ";
        cin >> numeroR;

        int resultado = Romano(numeroR);
        cout << "Valor entero: " << resultado << endl;

        cout << "Desea realizar otra conversion : "<<endl;
        cout << " Si(1) "<<endl;
        cout << " No(2) "<<endl;
        cin >> opc;
        

    } while (opc == 1);

    return 0;
}
