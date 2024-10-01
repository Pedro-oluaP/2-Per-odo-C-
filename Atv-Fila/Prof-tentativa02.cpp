#include <iostream>
#include <queue>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

struct Aluno {
    int matricula;
    float nota;

    bool operator < (const Aluno& outro) const {
        if (nota == outro.nota)
            return matricula > outro.matricula;
        return nota < outro.nota;
    }
};

int main() {
    queue<Aluno> fila;
    stack<Aluno> pilha;

    int matricula;
    float nota;
    char opcao;

    do {
        cout << "Digite a matricula do aluno: ";
        cin >> matricula;
        cout << "Digite a nota do aluno: ";
        cin >> nota;

        Aluno aluno;
        aluno.matricula = matricula;
        aluno.nota = nota;

        fila.push(aluno);

        cout << "Deseja inserir outro aluno? (s/n): ";
        cin >> opcao;
    } while (opcao == 's' || opcao == 'S');

    // Transferir os dados da fila para um vetor para ordenar
    vector<Aluno> alunos;
    while (!fila.empty()) {
        alunos.push_back(fila.front());
        fila.pop();
    }

    // Ordenar os dados
    sort(alunos.begin(), alunos.end());

    // Transferir os dados para a pilha
    for (auto it = alunos.rbegin(); it != alunos.rend(); ++it) {
        pilha.push(*it);
    }

    // Mostrar os dados ordenados
    cout << "\nAlunos ordenados por nota (decrescente):" << endl;
    while (!pilha.empty()) {
        Aluno aluno = pilha.top();
        pilha.pop();
        cout << "Matrícula: " << aluno.matricula << ", Nota: " << aluno.nota << endl;
    }

    return 0;
}
