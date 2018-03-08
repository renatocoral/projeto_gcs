#ifndef SERVIDOR_HPP
#define SERVIDOR_HPP

#include <string>
#include "pessoa.hpp"

using namespace std;

class Servidor : public Pessoa {
private:
   // Atributos
	string cargo;
   string departamento;
   int carga_horaria;
public:
   // Métodos
   Servidor(); // Método Construtor
   Servidor(string nome, int matricula, long int cpf, string cargo, string departamento, int carga_horaria);
   ~Servidor();
   string getCargo();
   void setCargo(string cargo);
   string getDepartamento();
   void setDepartamento(string departamento);
   int getCargaHoraria();
   void setCargaHoraria(int carga_horaria);

   void imprimeDados();
};

#endif
