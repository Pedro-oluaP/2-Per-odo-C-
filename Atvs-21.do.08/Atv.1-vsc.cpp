#include <iostream>
#include <string>
using namespace std;

struct Aluno {
    int matricula;
    string nome;
};

int main() {
    const int MAX_ALUNOS = 50;
    Aluno alunos[MAX_ALUNOS];

    int numAlunos;

    cout << "Digite o numero de alunos (ate: " << MAX_ALUNOS << "): ";
    cin >> numAlunos;

    for (int i = 0; i < numAlunos; ++i) {
        cout << "Aluno " << i + 1 << ":\n";
        cout << "Matricula: ";
        cin >> alunos[i].matricula;
        cout << "Nome: ";
        cin.ignore();
        getline(cin, alunos[i].nome);
    }

    cout << "\nDados dos alunos:\n";
    for (int i = 0; i < numAlunos; ++i) {
        cout << "Aluno " << i + 1 << ":\n";
        cout << "Matricula: " << alunos[i].matricula << "\n";
        cout << "Nome: " << alunos[i].nome << "\n";
    }

    return 0;
}
