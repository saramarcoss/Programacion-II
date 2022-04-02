#include <iostream>
#include <vector>
#include <memory>
#include "figure.h"
#include "square.h"
#include "triangle.h"

using namespace std;

int main()
{
    std::vector<std::shared_ptr<Figure>> figuras;
    std::string option{"x"};

    while(option != "s"){
        std::cout << "Que deseas hacer?\n";
        std::cout << "c \tAnadir Cuadrado\n";
        std::cout << "t \tAnadir Triangulo Equilatero\n";
        std::cout << "p \tMostrar Area y Perimetro de todos los anadidos\n";
        std::cout << "s \tSalir\n";
        std::cin >> option;

        if(option == "c"){
            std::cout << "Introduce tamaño del lado: ";
            float lado; std::cin >> lado;
            try {
                figuras.push_back(std::make_shared<Square>(Square{lado}));
            } catch (std::string e) {
                std::cout << e << "\n";
            }
        }else if(option == "t"){
            std::cout << "Introduce tamaño de la base y de la altura: ";
            float lado, altura; std::cin >> lado >> altura;
            try {
                figuras.push_back(std::make_shared<Triangle>(Triangle{lado, altura}));
            } catch (std::string e) {
                std::cout << e << "\n";
            }
        }else if(option == "p"){
            for(auto const & elem: figuras){
                std::cout << elem->getType() << "\n";
                std::cout << "Area: " << elem->getArea() << "\n";
                std::cout << "Perimetro: " << elem->getPerimeter() << "\n";
                std::cout << "-----------------------\n";
            }
        }
    }

    std::cout << "bye bye my friend\n";

    return 0;
}
