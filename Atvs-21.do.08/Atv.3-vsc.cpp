#include <iostream>
using namespace std;

int main() {
  
    long long populacaoA = 90000000;
    long long populacaoB = 200000000;

    double taxaCrescimentoA = 0.03;
    double taxaCrescimentoB = 0.015;

    int anos = 0;

    while (populacaoA < populacaoB) {
        populacaoA += static_cast<long long>(populacaoA * taxaCrescimentoA);
        populacaoB += static_cast<long long>(populacaoB * taxaCrescimentoB);
        anos++;
    }

    cout << "Apos " << anos << " anos, a população do país A ultrapassara ou sera igual à população do país B.\n";
    cout << "População do pais A: " << populacaoA << " habitantes\n";
    cout << "População do pais B: " << populacaoB << " habitantes\n";

    return 0;
}
