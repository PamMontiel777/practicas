#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Persona
{
    char nombre[50];
    int edad;
};

int main(int argc, char const *argv[])
{
 
    ofstream archivoSalida;

    //abrir el archivo de salida
    archivoSalida.open("archivo_salida.bin", ios::binary);
    if (!archivoSalida){
        cerr << "Error al abrir el archivo de salida." << endl;
        return 1;
    }
    Persona p1 =  {"Juan", 30};
    Persona p2 =  {"Maria", 25};

    archivoSalida.write((const char*)(&p1), sizeof(Persona));
    archivoSalida.write((const char*)(&p2), sizeof(Persona));
    
    //Escribir en el archivo de salida
    archivoSalida << "Hola, este es un archivo de salida." << endl;

    //cerrar archivo de salida
    archivoSalida.close();

    // //--------------------------------------------
    ifstream archivoEntrada;
    Persona p;
    // string linea;

    // //leer archico entrada
    archivoEntrada.open("archivo_salida.bin", ios::binary);
    if (!archivoEntrada){
    cerr << "Error al abrir el archivo de entrada." << endl;
    return 1;
    }

    while (archivoEntrada.read((char*)(&p), sizeof(Persona))){
        cout << "Nombre: " << p.nombre << ", Edad:" << p.edad << endl;
    }
    
    // //leer del archivo de entrada
    //while(getline(archivoEntrada, linea)){
    //cout << linea << endl;
    // }

    // //cerrar archivo de entrada
     archivoEntrada.close();
     return 0;
}
