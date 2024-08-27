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
    std::cout << "Digite a posi��o desejada na sequencia de Fibonacci: ";
    std::cin >> posicao;

    if (posicao < 0) {
        std::cerr << "Erro: A posi��o deve ser um numero n�o negativo." << std::endl;
        return 1;
    }

    int resultadoIterativo = fibonacciIterativo(posicao);
    std::cout << "O " << posicao << "� termo da sequencia de Fibonacci (iterativo) e: " << resultadoIterativo << std::endl;

    return 0;
}
