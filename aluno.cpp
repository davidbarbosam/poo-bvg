#include "Aluno.h"

Aluno::Aluno() {
    nome = "";
    matricula = "";
    curso = "";
}

Aluno::Aluno(string nome, string matricula, string curso) {
    this->nome = nome;
    this->matricula = matricula;
    this->curso = curso;
}

void Aluno::exibirInformacoes() {
    cout << "Nome: " << nome << endl;
    cout << "Matricula: " << matricula << endl;
    cout << "Curso: " << curso << endl;
}
