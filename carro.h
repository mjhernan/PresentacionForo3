#include <iostream>
#include <string>
#include <vector>

class carro
{
private:
    std::string marca;
    std::string modelo;
    std::string color;
    int anno;
    int cantidadPasajeros;
    std::vector<std::string> extras;
    bool esElectrico;


public:
    carro();
    ~carro();

    void EspecificarMarca(std::string marca);
    void EspecificarModelo(std::string modelo);
    void EspecificarColor(std::string color);
    void EspecificarAnno(int anno);
    void EspecificarCantidadPasajeros(int pasajeros);
    void AgregarExtras(std::string extra);
    void CarroElectrico();
    void ImprimirInformacion();
};

carro::carro()
{
    this->extras = std::vector<std::string>();
    this->marca = "";
    this->modelo = "";
    this->color = "";
    this->anno = 0;
    this->cantidadPasajeros = 0;
    this->esElectrico = false;
}

carro::~carro()
{
}

void carro::EspecificarMarca(std::string marca){
    this->marca = marca;
}

void carro::EspecificarModelo(std::string modelo){
    this->modelo = modelo;
}

void carro::EspecificarColor(std::string color){
    this->color = color;
}

void carro::EspecificarAnno(int anno){
    this->anno = anno;
}

void carro::EspecificarCantidadPasajeros(int cantidadPasajeros){
    this->cantidadPasajeros = cantidadPasajeros;
}

void carro::AgregarExtras(std::string extra){
    this->extras.emplace_back(extra);
}

void carro::CarroElectrico(){
    this->esElectrico = true;
}

void carro::ImprimirInformacion(){
    std::string stringMarca;
    std::string stringModelo;
    std::string stringColor;
    std::string stringAnno;
    std::string stringPasajeros;
    std::string stringExtras;
    std::string stringElectrico;

    std::cout << "Caracteristics del carro" << std::endl;
    this->marca == "" ? stringMarca = "Sin definir" : stringMarca = this->marca;
    this->modelo == "" ? stringModelo = "Sin definir" : stringModelo = this->modelo;
    this->color == "" ? stringColor = "Sin definir" : stringColor = this->color;
    this->anno == 0 ? stringAnno = "Sin definir" : stringAnno = std::to_string(this->anno);
    this->cantidadPasajeros == 0 ? stringPasajeros = "Sin definir" : stringPasajeros = std::to_string(this->cantidadPasajeros);
    this->esElectrico == false ? stringElectrico = "No" : stringElectrico = "Si";

    std::cout << "\tMarca: " + stringMarca << std::endl;
    std::cout << "\tModelo: " + stringModelo << std::endl;
    std::cout << "\tColor: " + stringColor << std::endl;
    std::cout << "\tAño: " + stringAnno << std::endl;
    std::cout << "\tPasajeros: " + stringPasajeros << std::endl;
    std::cout << "\tCarro electrico: " + stringElectrico << std::endl;
    std::cout << "\tExtras:" << std::endl;
    for (auto extra : this->extras){
        std::cout << "\t\t" + extra << std::endl;
    }

}