#include <iostream>

struct Idade {
    int anos;
    int meses;
    int dias;
};

Idade converterIdade(int dias) {
    Idade resultado;

    resultado.anos = dias / 365;
    dias %= 365;

    resultado.meses = dias / 30;
    dias %= 30;

    resultado.dias = dias;

    return resultado;
}

int main() {
    int idadeEmDias;
    std::cout << "Digite a idade em dias: ";
    std::cin >> idadeEmDias;

    Idade idadeConvertida = converterIdade(idadeEmDias);

    std::cout << "Idade: " << idadeConvertida.anos << " anos, "
              << idadeConvertida.meses << " meses e "
              << idadeConvertida.dias << " dias." << std::endl;

    return 0;
}
