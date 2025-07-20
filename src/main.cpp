#include <iostream>
#include "../include/typetools.hpp"
#include "../include/traits.hpp"

struct A{
    void print(){ std::cout << "A::print()\n";}
};

struct B{};

int main(){
    std::cout << "=== FATORIAL ===\n";
    constexpr int resultado = fatorial(5);
    std::cout << "Fatorial de 5 é:"<<resultado<<"\n";

    std::cout << "\n === TRAITS ===\n";
    std::cout << std::boolalpha;
    std::cout << "int é ponteiro?"<<is_pointer_v<int><<"\n";
    std::cout << "int* é ponteiro?"<<is_pointer_v<int*><<"\n";
    std::cout << "A é classe? "<<is_class_v<A><<"\n";
    std::cout << "B tem método print()?" <<has_print_method_v<B><<"\n";
    std::cout << "A tem método print()?" <<has_print_method_v<A><<"\n";

    return 0;

}
