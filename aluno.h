#ifndef ALUNO_H
#define ALUNO_H

#include <string>
#include <vector>
#include <iostream>
#include "UsuarioAutenticavel.h"
#include "Relatorio.h"
#include "TipoUsuario.h"

class Aluno : public UsuarioAutenticavel, public Relatorio {
private:
    TipoUsuario tipo;
public:
    Aluno(const std::string& nome, const std::string& senha);

    bool autenticar(const std::string& senhaTentativa) const override;
    void gerarRelatorio() const override;

    // Classe interna
    class HistoricoDisciplinar {
    private:
        std::string disciplina;
        int ano;
        double nota;
    public:
        HistoricoDisciplinar(const std::string& disciplina, int ano, double nota);
        void exibir() const;
    };

    std::vector<HistoricoDisciplinar> historico;
};

#endif // ALUNO_H
