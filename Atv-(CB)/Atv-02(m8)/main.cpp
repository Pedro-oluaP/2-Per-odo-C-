#include <iostream>

void converterMinutosParaHorasMinutos(int totalMinutos, int& horas, int& minutos) {
    horas = totalMinutos / 60;
    minutos = totalMinutos % 60;
}

int main() {
    int minutosPassados;
    std::cout << "Digite o total de minutos passados desde meia-noite: ";
    std::cin >> minutosPassados;

    int horas, minutos;
    converterMinutosParaHorasMinutos(minutosPassados, horas, minutos);

    std::cout << "Horas e minutos passados: " << horas << "h " << minutos << "min" << std::endl;

    return 0;
}
