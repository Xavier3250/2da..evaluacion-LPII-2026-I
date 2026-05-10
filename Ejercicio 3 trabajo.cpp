/*
 Realice un programa que permita mostrar en pantalla un listado de notas con los nombres de los estudiantes
 que las poseen, cual fue la nota más alta de entre todas, cual fue la más baja y cuál es el promedio del salón.
 No se permite usar arreglos, ni funciones en este ejercicio
 
 */
 
#include<iostream>
#include<string> 
using namespace std;

int main(){

 string nombreAlumno = "";
 string nombreMasAlto = "";
 string nombreMasBajo = "";
 int nombre=0; 
 int notas=0;
 int notasaltas=0;
 int notasbajas=0;
 int opc=0;
 float promedio=0;
 float suma=0;
 
 do{
   
    suma = 0;
    
    cout<<"Cuantos notas va a procesar"<<endl;
    cin>>notas;
    
    for(int i=1 ; i<=notas ; i++){
        cout<<"Ingresar nombre del alumno: ";
        cin>>nombreAlumno; 
        cout<<"Ingresar nota de "<<nombreAlumno<<": "<<endl;
        cin>>nombre;    
        suma+=nombre;
        
        if(i == 1){
            notasaltas = nombre; 
            nombreMasAlto = nombreAlumno; 
            notasbajas = nombre;
            nombreMasBajo = nombreAlumno; 
        }else if(nombre > notasaltas){
            notasaltas = nombre; 
            nombreMasAlto = nombreAlumno;
        }else if(nombre < notasbajas){
            notasbajas = nombre;
            nombreMasBajo = nombreAlumno; 
        }   
    }
    
    promedio= suma/notas;
    
    cout<<"Desea hacer otro listado"<<endl;
    cout<<"Si(1)"<<endl;    
    cout<<"No(2)"<<endl;
    cin>>opc;
    
 }while(opc== 1);   

   
    cout<<"Nota mas baja: "<<nombreMasBajo<<" con "<<notasbajas<<endl;    
    cout<<"Nota mas alta: "<<nombreMasAlto<<" con "<<notasaltas<<endl;
    cout<<"Promedio general: "<<promedio<<endl;
    
    return 0;
}
