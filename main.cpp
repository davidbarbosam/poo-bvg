#include <iostream>
#include "Aluno.h"
#include "Disciplina.h"

using namespace std;

int main() {

    Aluno aluno1("Joao", "2023001", "ADS");

    Disciplina d1("Matematica", 60, 7.0);
    Disciplina d2("Programacao", 80, 5.5);

    aluno1.exibirInformacoes();

    if (verificarAprovacao(d1))
        cout << "Aprovado em Matematica" << endl;
    else
        cout << "Reprovado em Matematica" << endl;

    if (verificarAprovacao(d2))
        cout << "Aprovado em Programacao" << endl;
    else
        cout << "Reprovado em Programacao" << endl;

    return 0;
}
