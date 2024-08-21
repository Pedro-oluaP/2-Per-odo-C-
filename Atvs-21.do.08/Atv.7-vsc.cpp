#include <iostream>
using namespace std;

int calcularIdadeEmDias(int anos, int meses, int dias) {
    
    int idadeEmDias = anos * 365 + meses * 30 + dias;
    return idadeEmDias;
}

int main() {
    int anos, meses, dias;

    cout << "Digite a idade em anos: ";
    cin >> anos;
    cout << "Digite a idade em meses: ";
    cin >> meses;
    cout << "Digite a idade em dias: ";
    cin >> dias;

    int idadeTotalEmDias = calcularIdadeEmDias(anos, meses, dias);

    cout << "A idade total em dias é: " << idadeTotalEmDias << " dias\n";

    return 0;
}
