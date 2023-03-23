#include <iostream>
using namespace std; // le aclaro que voy a usar la libreria estandar de C++

void repasoSintaxis (){
    const int tam= 10;
    int v[tam], i, ac=0, tope;
    float prom;

    for(i=0; i<tam; i++){
        cout <<endl<< "Ingrese un numero: "<< i <<" "; // cout viene a ser el printf / puts de C, endl es un salto de linea
        cin >> v[i];// cin indica que espera a que el usuario ingrese un valor
    }

    for(i=0; i<tam; i++){
        if(v[i]%2==0){
           cout<< "el numero "<< v[i] <<" es par"<<endl;
        }
    }
}

//definicion de tipos 

void definicionTipos(){
    const int nf = 4; 
    const int nc = 3;
    typedef int matriz[nf][nc];

    matriz mat; // declaro una matriz de 4 filas y 3 columnas usando mi tipo de dato matriz; 
}

typedef struct {
    int legajo;
    char curso;
    float nota;
} alumno;
    
// REPASO MEMORIA DINAMICA 
void repasoMemoriaDinamica(){
    int *a, *b; 
    a = new int; // reservo memoria para un entero
    *a = 10; // asigno el valor 10 al entero

    cout <<endl<< "El valor de a es: "<< *a <<endl << "su direccion de memoria es "<< &a <<endl;
    delete a; // libero la memoria reservada para el entero


}

int main(){
    alumno a,b; 
    a.curso = 'c';
    a.legajo = 100;
    //ingreso la nota desde el teclado 
    cout << "Ingrese la nota del alumno: "<<endl;
    cin >> a.nota;
    // el struct debe llenarse campo a campo, de la misma forma para leerlo se hace campo a campo
    // en otros lenguajes se llama record, es un tipo de dato que se caracteriza por incluir elementos de distinto tipo

    // copio el alumno a en el alumno b
    b = a; // copio el alumno a en el alumno b 


    return 0;
}