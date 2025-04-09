#include<iostream>
using namespace std;

class Chorizo{
private:
    bool size;
    bool encendido;
    bool otro;

public:
    void Inicializar(){
        size = 1;
        encendido = true;
        otro = true;
    }
    void Ejecutar(){
        cout<<"Ejecutando chorizo"<<endl;
    }
};
int main (int argc, char const *argv[])
{
    cout<<endl<<"-----------------------------------------------------------"<<endl;
    cout<<"Tamaño de memoria"<<endl;
    cout<<"-----------------------------------------------------------"<<endl;
    cout<<"Tamaño int:"<<sizeof(int)<<endl;
    cout<<"Tamaño char:"<<sizeof(char)<<endl;
    cout<<"Tamaño bool;"<<sizeof(bool)<<endl;
    cout<<"Tamaño float:"<<sizeof(float)<<endl;
    cout<<"Tamaño double:"<<sizeof(double)<<endl;
    cout<<"Tamaño void: "<<sizeof(void)<<endl<<endl;

    int a=27;
    int b=50;

    cout<<endl<<"-----------------------------------------------------------"<<endl;
    cout<<"Memoria Estatica:"<<endl;
    cout<<"-----------------------------------------------------------"<<endl;
    cout<<"Direccion a: "<<&a<<endl;  //operador de direccion
    cout<<"Valor a: "<<a<<endl;
    cout<<"Tamaño a: "<<sizeof(a)<<endl;


    cout<<"Direccion b: "<<&b<<endl;
    cout<<"Valor b: "<<b<<endl;
    cout<<"Tamaño b: "<<sizeof(b)<<endl;

    cout<<endl<<"-----------------------------------------------------------"<<endl;
    cout<<"Direcciones de Memoria:"<<endl;
    cout<<"-----------------------------------------------------------"<<endl;
    int* direccionA = &a; //* (direcion) int(tamaño)
    cout<<"DireccionA: " << direccionA << endl;
    cout<< "Tamaño de puntero: "<<sizeof(bool*)<<endl;
    cout<< "Direccion (&) de DireccionA: " << &direccionA << endl;
    cout<< "Indireccion (*) de direccionA: " << *direccionA << endl;

    //1 bytes= 8 bits
    cout<<endl<<"-----------------------------------------------------------"<<endl;
    cout<<"Arreglos:"<<endl;
    cout<<"-----------------------------------------------------------"<<endl;
    int arreglo[10];
    cout<<"Direccion de arreglo: "<<&arreglo<<endl;
    cout<<"Direccion de arreglo[0]: "<<&arreglo[0]<<endl;
    cout<<"Direccion de arreglo[1]: "<<&arreglo[1]<<endl;
    cout<<"Direccion de arreglo + 0: "<<&arreglo + 0<<endl;
    cout<<"Direccion de arreglo + 1: "<<&arreglo + 1<<endl;


    cout<<endl<<"-----------------------------------------------------------"<<endl;
    cout<<"Objetos:"<<endl;
    cout<<"-----------------------------------------------------------"<<endl;
    cout<<"Tamaño chorizo: "<<sizeof(Chorizo)<<endl;
    Chorizo pruebas;
    cout<<"Direccion chorizo: "<<&pruebas<<endl;
    
    cout<<endl<<"-----------------------------------------------------------"<<endl;
    cout<<"Memoria dinamica: "<<endl;
    cout<<"-----------------------------------------------------------"<<endl;
    cout<<"Malloc"<<malloc(sizeof(int))<<endl;
    //guardar direccion en un puntero//
    void* memoriaDinamica = malloc((sizeof(int)));

    cout<<endl<<"-----------------------------------------------------------"<<endl;
    cout<<"Cast variables: "<<endl;
    cout<<"-----------------------------------------------------------"<<endl;
    int* punteroEntero = (int*)malloc(sizeof(int));
    *punteroEntero = 5;
    cout<<"Direccion: "<<punteroEntero<<endl;
    cout<<"Valor: "<<*punteroEntero<<endl;
    //liberar memoria
    free(punteroEntero);

    cout<<endl<<"-----------------------------------------------------------"<<endl;
    cout<<"Memoria dinamica C++ (Objetos):"<<endl;
    cout<<"-----------------------------------------------------------"<<endl;
    cout<<"C  :  "<<(Chorizo*)malloc(sizeof(Chorizo))<<endl;
    cout<<"C++  :  "<<new Chorizo()<<endl;
    //c
    Chorizo* punteroC = (Chorizo*)malloc(sizeof(Chorizo));
    (*punteroC).Inicializar();
    free(punteroC);

    //c++
    Chorizo* punteroCXX = new Chorizo ();
    delete punteroCXX;


        // indireccion vs operador ->
        //Indireccion
        (*punteroCXX).Inicializar();
        //operador ->
        punteroCXX->Inicializar();


    return 0;
}