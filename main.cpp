#include <iostream>
#include "Aluno.h"
#include "Professor.h"
#include "FuncionarioAdministrativo.h"

int main() {
    Aluno aluno("Carlos", "1234");
    Professor prof("Maria", "abcd");
    FuncionarioAdministrativo func("João", "admin");

    if (aluno.autenticar("1234")) {
        aluno.gerarRelatorio();
        aluno.historico.push_back(Aluno::HistoricoDisciplinar("POO", 2024, 9.0));
        aluno.historico[0].exibir();
    }

    if (prof.autenticar("abcd")) {
        prof.gerarRelatorio();
    }

    if (func.autenticar("admin")) {
        func.gerarRelatorio();
    }

    return 0;
}
