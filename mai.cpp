#include <iostream>
#include <vector>
#include "Pessoa.h"

using namespace std;

int main() {

    vector<Pessoa> pessoas;

    pessoas.push_back(Pessoa("Joao", "1111-1111"));
    pessoas.push_back(Pessoa("Maria", "2222-2222"));
    pessoas.push_back(Pessoa("Ana", "3333-3333"));

    for (int i = 0; i < pessoas.size(); i++) {
        pessoas[i].imprimirNome();
        pessoas[i].imprimirTelefone();
        cout << endl;
    }

    return 0;
}
