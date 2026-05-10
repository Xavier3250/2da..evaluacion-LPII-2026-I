#include <iostream>
#include <string> 

using namespace std;

int main() {
    string palabra; 
	string invertida;
    int opc = 0;

    do {
        invertida = ""; 
        
        cout << "Ingrese una palabra para verificar si es palindromo: " << endl;
        cin >> palabra;

        for (int i = palabra.length() - 1; i >= 0; i--) {
            invertida += palabra[i];
        }

       
        if (palabra == invertida) {
            cout << "La palabra '" << palabra << "' Es un palindromo." << endl;
        } else {
            cout << "La palabra '" << palabra << "' No es un palindromo." << endl;
        }

        cout << "Desea verificar otra palabra" << endl;
        cout << "Si(1)" << endl;
        cout << "No(2)" << endl;
        cin >> opc;

    } while (opc == 1);

    return 0;
}
