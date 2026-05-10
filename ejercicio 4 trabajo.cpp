/*

Realice un programa que permita leer n números y luego calcule suma total,
el promedio y cuál era el mayor de todos. No se permite usar arreglos, ni funciones en este ejercicio.

*/

#include<iostream>
using namespace std;
int main(){
   int n=0;
   int numero=0;
   int repetir=0;
   float sumaTotal=0;
   float promedio=0;
   float numeroMayor=0;
   
   do{
   	cout<<"Cuantos numeros va a procesar"<<endl;
   	cin>>n;
   	
   	for(int i=1 ; i<=n ; i++){
   		cout<<"ingresar numeros"<<endl;
   		cin>>numero;
   		sumaTotal+=numero;	
   		promedio= sumaTotal/n;
   		 if(i==1){
   		numeroMayor= numero; 	
	   }else if(numero>numeroMayor){
	   	numeroMayor= numero; 
	   } 
	   }
   		cout<<"desea repetir programa"<<endl;
   		cout<<"Si(1)"<<endl;
   		cout<<"No(2)"<<endl;
   		cin>>repetir;
   	
   	cout<<"La suma total es:   "<<sumaTotal<<endl;
    cout<<"El promedio  es:   "<<promedio<<endl;
   	cout<<"El numero mayor es:    "<<numeroMayor<<endl;
   	
   }while(repetir == 1);
	
return 0;	
}
   
