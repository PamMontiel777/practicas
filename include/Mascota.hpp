class Mascota
{
private:
    int Vida;
public:
    Mascota() {
        Vida = 100;
    }
    ~Mascota() {}
    void Golpear(){
        Vida -= 10;
    }

    int LeerVida(){
    return Vida;
    }
    void Acariciar (){
        Vida +=10;
    }
};