#include <iostream>

int fibonacciIterativo(int n) {
    if (n <= 1) {
        return n;
    }

    int fib_ant_ant = 0;
    int fib_ant = 1;
    int fib_atual = 0;

    for (int i = 2; i <= n; ++i) {
        fib_atual = fib_ant + fib_ant_ant;
        fib_ant_ant = fib_ant;
        fib_ant = fib_atual;
    }

    return fib_atual;
}

int main() {
    int posicao;
    std::cout << "Digite a posição desejada na sequencia de Fibonacci: ";
    std::cin >> posicao;

    if (posicao < 0) {
        std::cerr << "Erro: A posição deve ser um numero não negativo." << std::endl;
        return 1;
    }

    int resultadoIterativo = fibonacciIterativo(posicao);
    std::cout << "O " << posicao << "º termo da sequencia de Fibonacci (iterativo) e: " << resultadoIterativo << std::endl;

    return 0;
}
