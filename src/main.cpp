#include <iostream>
#include "../include/typetools.hpp"

int main(){
    constexpr int resultado=fatorial(5);
    std::cout<<"Fatorial de 5 é :" <<resultado<<std::endl;
    return 0;
}
