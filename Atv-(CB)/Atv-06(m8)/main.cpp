#include <iostream>

int somatorioRecursivo(int N) {
    if (N <= 0) {
        std::cerr << "Erro: N deve ser maior que zero." << std::endl;
        return 0;
    }
    if (N == 1) {
        return 1;
    }
    return N + somatorioRecursivo(N - 1);
}

int somatorioIterativo(int N) {
    if (N <= 0) {
        std::cerr << "Erro: N deve ser maior que zero." << std::endl;
        return 0;
    }
    int resultado = 0;
    for (int i = 1; i <= N; ++i) {
        resultado += i;
    }
    return resultado;
}

int main() {
    int N;
    std::cout << "Digite um numero inteiro positivo (N): ";
    std::cin >> N;

    int resultadoRecursivo = somatorioRecursivo(N);
    std::cout << "Somatorio (recursivo) de 1 ate " << N << ": " << resultadoRecursivo << std::endl;

    int resultadoIterativo = somatorioIterativo(N);
    std::cout << "Somatorio (iterativo) de 1 ate " << N << ": " << resultadoIterativo << std::endl;

    return 0;
