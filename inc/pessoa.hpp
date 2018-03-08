#ifndef PESSOA_HPP
#define PESSOA_HPP

#include <string>

using namespace std;

class Pessoa {
   // Atributos
private:
   int matricula;
   string nome;
   long int cpf;
   string telefone;
   string endereco;
public:
   Pessoa();  // Metodo Construtor
   ~Pessoa(); // Metodo Destrutor
   int getMatricula();
   void setMatricula(int matricula);
   string getNome();
   void setNome(string nome);
   long int getCpf();
   void setCpf(long int cpf);
   string getTelefone();
   void setTelefone(string telefone);
   string getEndereco();
   void setEndereco(string endereco);

   virtual void imprimeDados();
   

};

#endif
