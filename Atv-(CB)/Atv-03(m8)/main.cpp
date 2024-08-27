#include <iostream>

void converterSegundosParaHorasMinutosSegundos(int segundos, int& horas, int& minutos, int& segundosRestantes) {
    horas = segundos / 3600;
    segundos %= 3600;

    minutos = segundos / 60;
    segundosRestantes = segundos % 60;
}

int main() {
    int tempoEmSegundos;
    std::cout << "Digite o tempo de duração em segundos: ";
    std::cin >> tempoEmSegundos;

    int horas, minutos, segundosRestantes;
    converterSegundosParaHorasMinutosSegundos(tempoEmSegundos, horas, minutos, segundosRestantes);

    std::cout << "Tempo convertido: " << horas << "h " << minutos << "min " << segundosRestantes << "s" << std::endl;

    return 0;
}

