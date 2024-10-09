// Nome: Pedro Paulo Melo
// Obj: ganhar pontos / aprender
// entrada: normal... so digitar...
// Resultado: teoricamente é pra da certo, mas não testei o suficiente, ainda mais c levar em conta q é um "frankstain" d sites da internet + gpt + as suas aulas

#include <iostream>
#include <list>
#include <algorithm>
#include <cctype>
#include <string>
using namespace std;

// Função (retirada da internet) q converte string para minúsculas
string toLower(const string& str) {
    string lowerStr = str;
    transform(lowerStr.begin(), lowerStr.end(), lowerStr.begin(), ::tolower);
    return lowerStr;
}

// Função q insere palavra na lista ordenada sem repetições
bool inserirOrdenado(list<string>& lista, const string& palavra) {
    string lowerPalavra = toLower(palavra);

    // Verificar se a palavra já ta na lista
    list<string>::iterator it;
    for (it = lista.begin(); it != lista.end(); ++it) {
        if (toLower(*it) == lowerPalavra) {
            return false;
        }
    }

    // Insere a palavra na posição correta
    for (it = lista.begin(); it != lista.end(); ++it) {
        if (toLower(*it) > lowerPalavra) {
            break;
        }
    }
    lista.insert(it, palavra);
    return true;
}

// Função q exibe a lista
void exibirLista(const list<string>& lista) {
    cout << "\nLista de palavras ordenada:" << endl;
    for (list<string>::const_iterator it = lista.begin(); it != lista.end(); ++it) {
        cout << *it << endl;
    }
}

// Função q remove uma palavra da lista
bool removerPalavra(list<string>& lista, const string& palavra) {
    string lowerPalavra = toLower(palavra);
    list<string>::iterator it;
    for (it = lista.begin(); it != lista.end(); ++it) {
        if (toLower(*it) == lowerPalavra) {
            lista.erase(it);
            return true;
        }
    }
    return false;
}

int main() {
    list<string> lista;
    string palavra;
    char opcao;

    do {
        cout << "Digite uma palavra para inserir (ou 'sair' para encerrar): ";
        cin >> palavra;

        if (toLower(palavra) == "sair") {
            break;
        }

        // Inserir a palavra na lista
        if (inserirOrdenado(lista, palavra)) {
            cout << "Palavra inserida com sucesso!!" << endl;
        } else {
            cout << "A palavra '" << palavra << "' já ta na lista." << endl;
        }

        cout << "Deseja exibir a lista atual? (s/n): ";
        cin >> opcao;
        if (opcao == 's' || opcao == 'S') {
            exibirLista(lista);
        }

        cout << "Deseja remover uma palavra? (s/n): ";
        cin >> opcao;
        if (opcao == 's' || opcao == 'S') {
            cout << "Digite a palavra a ser removida: ";
            cin >> palavra;
            if (removerPalavra(lista, palavra)) {
                cout << "Palavra removida com sucesso!!" << endl;
            } else {
                cout << "A palavra '" << palavra << "' não foi encontrada na lista." << endl;
            }
        }

        cout << "Deseja inserir outra palavra? (s/n): ";
        cin >> opcao;
    } while (opcao == 's' || opcao == 'S');

    exibirLista(lista);

    return 0;
}
