#include <iostream>
using namespace std;

int encontrarMaior(int a, int b, int c) {
    int maior = a;
    if (b > maior) {
        maior = b;
    }
    if (c > maior) {
        maior = c;
    }
    return maior;
}

int main() {
    int valor1, valor2, valor3;

   cout << "Digite o primeiro valor: ";
   cin >> valor1;
   cout << "Digite o segundo valor: ";
   cin >> valor2;
   cout << "Digite o terceiro valor: ";
   cin >> valor3;

    int maiorValor = encontrarMaior(valor1, valor2, valor3);

   cout << "O maior valor e " << maiorValor <<endl;

    return 0;
}
