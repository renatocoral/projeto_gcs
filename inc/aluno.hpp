#ifndef ALUNO_HPP
#define ALUNO_HPP

#include <string>
#include "pessoa.hpp"

using namespace std;

class Aluno : public Pessoa {
private:
   // Atributos
   string curso;
   float ira;
public:
   // Métodos
   Aluno(); // Método Construtor
   Aluno(string nome, int matricula, long int cpf);
   ~Aluno();
   float getIra();

   void calculaIra();
};

#endif
