
#include <iostream>
#include <string>
#include "C_CALCUL.h"
int main()
{
    std::cout << "Classe Calcul COCOMO\n";
    C_CALCUL calcul;
    calcul.setKLOC(1);
    calcul.setKLOC(2);
    
    std::cout << std::to_string(calcul.calcul_E()) << std::endl;
    std::cout << std::to_string(calcul.calcul_D(calcul.calcul_E())) << std::endl;
}


