#pragma once
#include <type_traits>

//Verifica se um tipo é ponteiro
template<typename T>
constexpr bool is_pointer_v = std::is_pointer<T>::value;

//Verifica se um tipo é classe
template<typename T>
constexpr bool is_class_v = std::is_class<T>::value;

//Detecta se um tipo tem um metodo chamado 'print' com assinatura: void print()
template<typename T,typename=void>
struct has_print_method : std::false_type{};

template<typename T>
struct has_print_method<T,std::void_t<decltype(std::declval<T>().print())>>:std::true_type{};

template<typename T>
constexpr bool has_print_method_v=has_print_method<T>::value;


