
#include <iostream>
#include <string>
#include "C_CALCUL.h"
int main()
{
    std::cout << "Classe Calcul COCOMO\n";
   // std::cout << pow(1, 2);
    C_CALCUL calcul;
    calcul.setKLOC(1);
    calcul.setEAF(2);
    
    std::cout << std::to_string(calcul.calcul_E()) << std::endl;
    std::cout << std::to_string(calcul.calcul_D(calcul.calcul_E())) << std::endl;
}


