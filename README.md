# TypeTools

Uma biblioteca C++ com foco em **metaprogamação moderna**,
desenvolvida para praticar templates,constexpr e introspecção de tipos.

## Funcionalidades

-`fatorial<T>(n)`:cálculo de fatorial **em tempo de compilação**,
limitado a tipos inteiros.

-`is_integer_v(T)`:trait para verificação de tipo.

## Como compilar

```bash
g++ -std=c++20 src/main.cpp -o run 
./run
```

Para testes:

```bash
g++ -std=c++20 tests/test_typetools.cpp -o test
./test

```
## Conceitos utilizados

template<typename T> - código genérico.

constexpr - cálculo em tempo de compilação.

static-assert - validação de tipos.

std::is_integral - introspecção de tipo.

Futuras melhorias 

Suporte a tipos flutuantes com enable_if.

Reflexão simulada com macros.

Geração de código com metaprogamação.
