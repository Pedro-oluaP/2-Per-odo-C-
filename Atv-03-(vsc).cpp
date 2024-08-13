#include <iostream>
#include <cmath>

int main() {
    const int NAlunos = 5;
    double notas[NAlunos];
    double media = 0.0;
    double desvio[NAlunos];
    double desvioQuadrado[NAlunos];
    double somaDesviosQuadrados = 0.0;
    double variancia = 0.0;
    double desvioP = 0.0;

    for (int i = 0; i < NAlunos; ++i) {
        std::cout << "Digite a nota do aluno " << i + 1 << ": ";
        std::cin >> notas[i];
        media += notas[i];
    }

    media /= NAlunos;

    for (int i = 0; i < NAlunos; ++i) {
        desvio[i] = notas[i] - media;
        desvioQuadrado[i] = desvio[i] * desvio[i];
        somaDesviosQuadrados += desvioQuadrado[i];
    }

    variancia = somaDesviosQuadrados / NAlunos;
    desvioP = std::sqrt(variancia);

    std::cout << "Media: " << media << std::endl;
    std::cout << "Variancia: " << variancia << std::endl;
    std::cout << "Desvio Padrao: " << desvioP << std::endl;

    return 0;
}