#ifndef ALUNO_H
#define ALUNO_H

#include "Usuario.h"
#include <vector>

class Aluno : public Usuario {
protected:
    string matricula;
    string curso;
    vector<string> disciplinas;

public:
    Aluno();
    Aluno(string nome, string email, string matricula, string curso);

    void adicionarDisciplina(string d);

    void gerarRelatorio();

    void exibirDetalhes();
    void exibirDetalhes(bool comNotas);
};

#endif
