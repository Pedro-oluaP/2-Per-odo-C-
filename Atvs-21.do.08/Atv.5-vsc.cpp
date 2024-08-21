#include <iostream>
using namespace std;

void determinarCategoria(int idade) {
    if (idade >= 5 && idade <= 7) {
        cout << "Categoria: Infantil A\n";
    } else if (idade >= 8 && idade <= 10) {
        cout << "Categoria: Infantil B\n";
    } else if (idade >= 11 && idade <= 13) {
        cout << "Categoria: Juvenil A\n";
    } else if (idade >= 14 && idade <= 17) {
        cout << "Categoria: Juvenil B\n";
    } else if (idade >= 18) {
        cout << "Categoria: Adulto\n";
    } else {
        cout << "Idade inválida.\n";
    }
}

int main() {
    int idade;

    cout << "Digite a idade do nadador: ";
    cin >> idade;

    determinarCategoria(idade);

    return 0;
}
