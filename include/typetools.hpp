#pragma once

#include <type_traits>

template<typename T>
constexpr bool is_integer_v = std::is_integral<T>::value;

template<typename T>
constexpr T fatorial(T n){
    static_assert(is_integer_v<T>,"fatorial só aceita tipos inteiros" );
    return (n<=1)?1:(n*fatorial(n-1));
}


