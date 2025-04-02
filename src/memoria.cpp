#include<iostream>
using namespace std;

class Chorizo{
private:
    bool size;
    bool encendido;
    bool otro;
};
int main (int argc, char const *argv[])
{
    cout<<"Tamaño de memoria"<<endl;
    cout<<"Tamaño int:"<<sizeof(int)<<endl;
    cout<<"Tamaño char:"<<sizeof(char)<<endl;
    cout<<"Tamaño bool;"<<sizeof(bool)<<endl;
    cout<<"Tamaño float:"<<sizeof(float)<<endl;
    cout<<"Tamaño double:"<<sizeof(double)<<endl<<endl;

    int a=27;
    int b=50;

    cout<<"Memoria Estatica:"<<endl;
    cout<<"Direccion a: "<<&a<<endl;  //operador de indireccion
    cout<<"Valor a: "<<a<<endl;
    cout<<"Tamaño a: "<<sizeof(a)<<endl;


    cout<<"Direccion b: "<<&b<<endl;
    cout<<"Valor b: "<<b<<endl;
    cout<<"Tamaño b: "<<sizeof(b)<<endl;

    cout<<"-----------------------------------------------------------"<<endl;
    cout<<"Direcciones de Memoria:"<<endl;
    int* direccionA = &a; //* (direcion) int(tamaño)
    cout<<"DireccionA: " << direccionA << endl;
    cout<< "Tamaño de puntero: "<<sizeof(bool*)<<endl;
    cout<< "Direccion (&) de DireccionA: " << &direccionA << endl;
    cout<< "Indireccion (*) de direccionA: " << *direccionA << endl;

    //1 bytes= 8 bits
    cout<<"-----------------------------------------------------------"<<endl;
    cout<<"Arreglos;"<<endl;
    int arreglo[10];
    cout<<"Direccion de arreglo: "<<&arreglo<<endl;
    cout<<"Direccion de arreglo[0]: "<<&arreglo[0]<<endl;
    cout<<"Direccion de arreglo[1]: "<<&arreglo[1]<<endl;
    cout<<"Direccion de arreglo + 0: "<<&arreglo + 0<<endl;
    cout<<"Direccion de arreglo + 1: "<<&arreglo + 1<<endl;


    cout<<"-----------------------------------------------------------"<<endl;
    cout<<"Objetos;"<<endl;
    cout<<"Tamaño chorizo: "<<sizeof(Chorizo)<<endl;
    Chorizo pruebas;
    cout<<"Direccion chorizo: "<<&pruebas<<endl;
    

    return 0;
}