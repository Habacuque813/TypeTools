🚀 TypeTools: Biblioteca C++ de Metaprogramação Moderna
TypeTools é uma biblioteca desenvolvida em C++ com foco em práticas modernas de metaprogramação. O projeto nasceu como um exercício para explorar recursos como templates, constexpr e introspecção de tipos — fundamentos essenciais para escrever código genérico, seguro e eficiente.

✨ Funcionalidades
fatorial<T>(n): cálculo de fatorial em tempo de compilação para tipos inteiros.

is_integer_v<T>: trait para verificação de tipo inteiro via introspecção.

🛠️ Como compilar e executar
Compilação do exemplo principal:

bash
g++ -std=c++20 src/main.cpp -o run
./run
Para executar os testes:

bash
g++ -std=c++20 tests/test_typetools.cpp -o test
./test
🧠 Conceitos explorados
template: escrita de código genérico e reutilizável.

constexpr: execução de lógica em tempo de compilação.

static_assert: verificação de tipos e restrições durante compilação.

std::is_integral: introspecção de tipos nativos do C++.

🔮 Futuras melhorias
Suporte a tipos flutuantes via enable_if.

Reflexão simulada com macros.

Geração de código baseada em metaprogramação avançada.

🧑‍💻 Sobre o autor
Criado por Habacuque como parte de seu desenvolvimento contínuo em C++. O projeto visa consolidar conhecimentos em recursos avançados da linguagem e demonstrar domínio técnico para contribuições em sistemas de alto desempenho.
