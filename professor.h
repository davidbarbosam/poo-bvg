#ifndef PROFESSOR_H
#define PROFESSOR_H

#include <string>
#include <iostream>
#include "UsuarioAutenticavel.h"
#include "Relatorio.h"
#include "TipoUsuario.h"

class Professor : public UsuarioAutenticavel, public Relatorio {
private:
    TipoUsuario tipo;
public:
    Professor(const std::string& nome, const std::string& senha);

    bool autenticar(const std::string& senhaTentativa) const override;
    void gerarRelatorio() const override;
};

#endif // PROFESSOR_H
