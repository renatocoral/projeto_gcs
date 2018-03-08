#include "aluno.hpp"
#include <iostream>

using namespace std;

Aluno::Aluno() {
   cout << "Construtor padrão da classe Aluno" << endl;
   setNome("");
   setMatricula(0);
   setCpf(0);
   curso = "Eng. de Software";
   ira = 5.0;
}

Aluno::Aluno(string nome, int matricula, long int cpf) {
   cout << "Construtor Especifico da classe Aluno" << endl;
   setNome(nome);
   setMatricula(matricula);
   setCpf(cpf);
   curso = "Eng. de Software";
   ira = 5.0;
}

Aluno::~Aluno(){ 
   cout << "Destrutor da Classe Aluno" << endl;
}

float Aluno::getIra() {
   return ira;
}

void Aluno::calculaIra(){};

