//Nuestro codigo del proyecto  
#include <iostream>
#include <claseA.hpp>


// Definición de la clase SistemaEcuaciones

int main() {
    double x, y;
    std::cout << "Ingrese el valor de x: ";
    std::cin >> x;
    std::cout << "Ingrese el valor de y: ";
    std::cin >> y;

    SistemaEcuaciones sistema(x, y);
    sistema.newtonRaphson();

    return 0;
}
