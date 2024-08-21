#include <iostream>
using namespace std;

double calcularPesoIdeal(double altura, char sexo) {
    double pesoIdeal;

    if (sexo == 'M' || sexo == 'm') {
       
        pesoIdeal = 72.7 * altura - 58.0;
    } else if (sexo == 'F' || sexo == 'f') {
        
        pesoIdeal = 62.1 * altura - 44.7;
    } else {
        cout << "Sexo inválido. Use 'M' para masculino ou 'F' para feminino.\n";
        pesoIdeal = -1.0;
    }

    return pesoIdeal;
}

int main() {
    double altura;
    char sexo;

    cout << "Digite a altura (em metros): ";
    cin >> altura;
    cout << "Digite o sexo ('M' para masculino ou 'F' para feminino): ";
    cin >> sexo;

    double pesoIdeal = calcularPesoIdeal(altura, sexo);

    if (pesoIdeal >= 0.0) {
        cout << "O peso ideal é: " << pesoIdeal << " kg\n";
    }

    return 0;
}
