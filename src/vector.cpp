#include <vector>
#include <list>
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;
enum TipoPokemon{
    FUEGO,
    AGUA,
    PLANTA,
    ELECTRICIDAD
};
class Pokemon{

private:
    string nombre;
    list<TipoPokemon> tipo;
    int nivel;

public:
    Pokemon(string nombre, list<TipoPokemon> tipos, int nivel){
        this->nombre = nombre;
        this->tipo = tipos;
        this->nivel = nivel;
    }
    string GetNombre(){
        return this->nombre;
    }
};

int main(int argc, char const *argv[])
{
    //arreglos clasicos
    string frases[10]; //<--- nose puede modificar en tiempo de ejecucion
    frases[0] = "frase 1";
    frases[1] = "frase 2";

    //vector de libreria estandar
    vector<string> vFrases;//<--- se pueden agregar mas en tiempo de ejecucion
    vFrases.push_back("Primera Frase");
    vFrases.push_back("Segunda Frase");
    vFrases.push_back("Tercera Frase");
    vFrases.push_back("Cuarta Frase");

    vector<int> vEnteros; //<--- remplazar tipo entre <> para cambiar al valor del vector
    vEnteros.push_back(3);
    vEnteros.push_back(5);
    vEnteros.push_back(1);
    vEnteros.push_back(9);

    vector<Pokemon> pokedex;
    pokedex.push_back(Pokemon("Bulbasaur",TipoPokemon::PLANTA,1));
    //pokedex.push_back(Pokemon("Ivysaur",TipoPokemon::PLANTA,2));
    //pokedex.push_back(Pokemon("Venasaur",TipoPokemon::PLANTA,3));

    

    fstream pokeCSV("assets/pokedex.csv");
    if(!pokeCSV){
        cerr << "Error leyendo archivo del pokedex"<<endl;
        return 1;
    }

        //cargar pokemones desde el archivo
    string linea;
    while(getline(pokeCSV,linea)){
    cout<< linea <<endl;

        //ler una fila de csv
        stringstream ss(linea);
        string valor;
        vector<string> fila;
        while(getline(ss,valor,',')){
            fila.push_back(valor);
        }

            //crear el pokemon
        Pokemon p(fila.at(1),TipoPokemon::AGUA,1);
        
        //agregar el pokemon al pokedex
        pokedex.push_back(p);
    }

    cout<<"pokemons cargados al pokedex = "<<pokedex.size()<<endl;
    return 0;
}
