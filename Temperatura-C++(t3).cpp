#include <iostream>
#include <cmath>
using namespace std;

// Função para calcular o tempo necessário para o resfriamento
double calcular_tempo(double T0, double TA, double T_Delta, double k) {
    if ((T0 - TA) == 0 || T_Delta == 0) {
        return 0;
    }
    double t = -(1 / k) * log((T0 - T_Delta) / TA);
    return t;
}

int main() {
    double T0, TA, T_Delta, k;

    // Entrada dos dados
    cout << "Digite a temperatura inicial (T0): ";
    cin >> T0;
    cout << "Digite a temperatura ambiente (TA): ";
    cin >> TA;
    cout << "Digite a temperatura final desejada (T_Delta): ";
    cin >> T_Delta;
    cout << "Digite a constante de resfriamento (k): ";
    cin >> k;

    // Cálculo do tempo necessário
    double tempo = calcular_tempo(T0, TA, T_Delta, k);

    // Exibição do resultado
    cout << "Tempo necessario para resfriar o alimento ate " << T_Delta << "°C: " << tempo << " minutos" << endl;

    return 0;
}
