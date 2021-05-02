#include "carro.h"

    // Funciones que se pueden usar en un objeto de tipo carro

    // MiCarro.EspecificarMarca(std::string marca);
    // MiCarro.EspecificarModelo(std::string modelo);
    // MiCarro.EspecificarColor(std::string color);
    // MiCarro.EspecificarAnno(int anno);
    // MiCarro.EspecificarCantidadPasajeros(int pasajeros);
    // MiCarro.AgregarExtras(std::string extra);
    // MiCarro.CarroElectrico();
    // MiCarro.ImprimirInformacion();

int main {
    // Instanciar (crear) el objeto de tipo carro
    auto MiCarro = carro();

    // Crear el objeto con las funciones disponibles
    MiCarro.EspecificarMarca("Jeep");
    MiCarro.EspecificarModelo("Cherokee");
    MiCarro.EspecificarColor("Blanco");
    MiCarro.EspecificarAnno(2021);
    MiCarro.EspecificarCantidadPasajeros(5);
    MiCarro.AgregarExtras("Asientos de cuero");
    MiCarro.AgregarExtras("Aros de lujo");

    // Imprimir informacion del objeto
    MiCarro.ImprimirInformacion();

    return 0;
}