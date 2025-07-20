#include "../include/typetools.hpp"
#include <cassert>

int main(){
    static_assert(fatorial(0)==1 );
    static_assert(fatorial(3)==6 );
    static_assert(fatorial(5)==120);
    return 0;
}
