#ifndef PROFESSOR_HPP
#define PROFESSOR_HPP

#include <string>
#include "pessoa.hpp"

using namespace std;

class Professor : public Pessoa {
private:
   // Atributos
	string formacao;
   	string departamento;
   	float indice_de_aprovacao;
public:
   // Métodos
   Professor(); // Método Construtor
   Professor(string nome, int matricula, long int cpf, string formacao, string departamento, float indice_de_aprovacao);
   ~Professor();
   string getFormacao();
   void setFormacao(string formacao);
   string getDepartamento();
   void setDepartamento(string departamento);
   void setIndiceDeAprovacao(float indice);
   float getIndiceDeAprovacao();

   void imprimeDados();
};

#endif
