#ifndef PROFESSOR_H
#define PROFESSOR_H

#include "Usuario.h"
#include <vector>

class Professor : public Usuario {
protected:
    string areaDeAtuacao;
    vector<string> disciplinasMinistradas;

public:
    Professor();
    Professor(string nome, string email, string area);

    void adicionarDisciplina(string d);

    void gerarRelatorio();
};

#endif
