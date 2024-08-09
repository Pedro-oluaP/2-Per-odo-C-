#include <iostream>

int main() {
    const int TVetor = 5;
    int vetor[TVetor];
    int SImpares = 0;

    for (int i = 0; i < TVetor; ++i) {
        std::cout << "Digite algum numero: " << i + 1 << ": ";
        std::cin >> vetor[i];
    }

    for (int i = 0; i < TVetor; ++i) {
        if (vetor[i] % 2 != 0) {
            SImpares += vetor[i];
        }
    }

    std::cout << "A soma dos impares: " << SImpares << std::endl;

    return 0;
}