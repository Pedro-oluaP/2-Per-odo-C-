#include <iostream>

int main() {
    const int maxElementos = 10;
    int NElementos;

    std::cout << "Digite quantos elementos (ate " << maxElementos << ") vc deseja inserir: ";
    std::cin >> NElementos;

    if (NElementos <= 0 || NElementos > maxElementos) {
        std::cout << "Numero invalido de elementos. Encerrando o programa." << std::endl;
        return 1;
    }

    int vetor[maxElementos];


    for (int i = 0; i < NElementos; ++i) {
        std::cout << "Digite o elemento " << i + 1 << ": ";
        std::cin >> vetor[i];
    }

    int maior1 = vetor[0];
    int maior2 = vetor[0];

    for (int i = 1; i < NElementos; ++i) {
        if (vetor[i] > maior1) {
            maior2 = maior1;
            maior1 = vetor[i];
        } else if (vetor[i] > maior2) {
            maior2 = vetor[i];
        }
    }

    int somaParesPosImpares = 0;
    for (int i = 0; i < NElementos; i += 2) {
        if (vetor[i] % 2 == 0) {
            somaParesPosImpares += vetor[i];
        }
    }

    std::cout << "Os 2 maiores elementos sao: " << maior1 << " e " << maior2 << std::endl;
    std::cout << "Soma dos elementos pares em posicoes impares: " << somaParesPosImpares << std::endl;

    return 0;
}
