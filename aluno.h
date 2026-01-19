#ifndef ALUNO_H
#define ALUNO_H

#include <string>
#include <iostream>

using namespace std;

class Aluno {
private:
    string nome;
    string matricula;
    string curso;

public:
    Aluno();
    Aluno(string nome, string matricula, string curso);

    void exibirInformacoes();
};

#endif