#include <vector>
#include <list>
#include <set>
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

enum Columnas{
    INDICE,
    NOMBRE,
    NUMERO,
    TIPO,
    ETAPA,
    ANTECESOR,
    ANTECESOR_NO

};

enum TipoPokemon{
    FUEGO,
    AGUA,
    PLANTA,
    ELECTRICIDAD,
    VENENO
};
class Pokemon{

private:
    string nombre;
    set<TipoPokemon> tipos;
    int nivel;

public:
    Pokemon(string nombre, set<TipoPokemon> tipos, int nivel){
        this->nombre = nombre;
        this->tipos = tipos;
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

    

    
    //pokedex.push_back(Pokemon("Ivysaur",TipoPokemon::PLANTA,2));
    //pokedex.push_back(Pokemon("Venasaur",TipoPokemon::PLANTA,3));

    

    fstream pokeCSV("assets/pokedex.csv");
    if(!pokeCSV){
        cerr << "Error leyendo archivo del pokedex"<<endl;
        return 1;
    }

        //cargar pokemones desde el archivo
    string linea;

    vector<Pokemon> pokedex;
    pokedex.push_back(Pokemon("Misigno",{TipoPokemon::VENENO},999));
    while(getline(pokeCSV,linea)){
    cout<< linea <<endl;

        //convertir a un stream de cadena
        stringstream ss(linea);
        //extraer un valor y guardar en la lista
        vector<string> listaColumnas;
        //crear lista temporal para as columnas 
        string valor;

        
        while(getline(ss,valor,',')){
            listaColumnas.push_back(valor);
        }

        try
        {
        //crear el pokemon
        Pokemon p(
            listaColumnas.at(Columnas::NOMBRE),
            {TipoPokemon::AGUA},
            stoi(listaColumnas.at(Columnas::ETAPA))
             );

            //agregar el pokemon al pokedex
            pokedex.push_back(p);
             
        }
        catch(const std::exception& e)
        {
            std::cout << e.what() << '\n';
        }

            
        
        
    }

    cout<<"pokemons cargados al pokedex = "<<pokedex.size()<<endl;
    cout<<"--El pokrmon 5 es: "<<pokedex.at(5).GetNombre()<<endl;


    return 0;
}
