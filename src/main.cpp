#include <iostream>
#include <sstream>
#include <list>
#include "aluno.hpp"
#include "professor.hpp"
#include "servidor.hpp"

using namespace std;

long int le_teclado_int(int aceita_zero) {
   
   string input = "";
   long int valor;
   while (true) {   
      getline(cin, input);  
      //if(input == "") 
      if((aceita_zero != 0) && (input == ""))
         throw(1); 
      stringstream myStream(input);
      if (myStream >> valor)
        break;
      cout << "Inteiro inválido, entre novamente!" << endl;
    }
    return valor;
}
float le_teclado_float() {
   
   string input = "";
   float valor;
   while (true) {   
      getline(cin, input);   
      stringstream myStream(input);
      if (myStream >> valor)
        break;
      cout << "Float inválido, entre novamente!" << endl;
    }
    return valor;
}

int main(int argc, char ** argv) {

cout << "Inicio do programa!!!!!!" << endl;

if(argc > 1) {
   // Polimosrfismo - Exemplo de Uso de Sobrecarga no Contrutor
   Aluno aluno_1;
   Aluno aluno_2("Joao", 1500432, 234556544543);

   Aluno *aluno_3 = new Aluno();
   Aluno *aluno_4 = new Aluno("Carlos", 12313, 1231231231);

   cout << "Nome do aluno: " << aluno_1.getNome() << endl;
   cout << "Matricula: " << aluno_1.getMatricula() << endl;
   cout << "CPF: " << aluno_1.getCpf() << endl;
   cout << "Ira " << aluno_1.getIra() << endl; 
   
   cout << "Nome do aluno: " << aluno_2.getNome() << endl;
   cout << "Matricula: " << aluno_2.getMatricula() << endl;
   cout << "CPF: " << aluno_2.getCpf() << endl;   
   cout << "Ira " << aluno_2.getIra() << endl;

   cout << "Nome do aluno: " << aluno_3->getNome() << endl;
   cout << "CPF: " << aluno_3->getCpf() << endl;
   cout << "Ira: " << aluno_3->getIra() << endl;

   cout << "Nome do aluno: " << aluno_4->getNome() << endl;
   cout << "CPF: " << aluno_4->getCpf() << endl;
   cout << "Ira: " << aluno_4->getIra() << endl;

}
else {
   list<Pessoa*> cadastro_de_pessoas;

   string entrada = "";
   int opcao = 10;
   while(opcao) {
      cout << "Escolha uma opção:" << endl;
      cout << "-----------------------" << endl;
      cout << "1 - Cadastrar Aluno:" << endl;
      cout << "2 - Cadastrar Professor:" << endl;
      cout << "3 - Cadastrar Servidor:" << endl;
      cout << "0 - Sair" << endl;
      try { opcao = (int) le_teclado_int(0); }
      catch(int v){ cout << "Opção inválida." << endl;  }

      string nome = "";
      int matricula;
      long int cpf;
      if ((opcao > 0) && (opcao <=3)) {
            cout << "Nome: ";
            getline (cin,nome);
            cout << "Matricula: ";
            matricula = (int) le_teclado_int(0);
            cout << "CPF: ";
            cpf = le_teclado_int(0);
      }
      if(opcao == 1) {
            Aluno *aluno = new Aluno(nome, matricula, cpf);
            cadastro_de_pessoas.push_back(aluno);      
      }
      else if(opcao == 2) {
            string formacao = "";
            string departamento = "";
            float indice_de_aprovacao;
            cout << "Formação: ";
            getline (cin,formacao);
            cout << "Departamento: ";
            getline (cin,departamento);
            cout << "Índice de Aprovação: ";
            indice_de_aprovacao = le_teclado_float();
            Professor *professor = new Professor(nome, matricula, cpf, formacao, departamento, indice_de_aprovacao);
            cadastro_de_pessoas.push_back(professor);      
      }
      else if(opcao == 3) {
         string cargo = "";
         string departamento = "";
         int carga_horaria;    
         cout << "Cargo: ";
         getline (cin,cargo);
         cout << "Departamento: ";
         getline (cin,departamento);
         cout << "Carga Horária: ";
         carga_horaria = (int) le_teclado_int(0);
         Servidor *servidor = new Servidor(nome, matricula, cpf, cargo, departamento, carga_horaria);
         cadastro_de_pessoas.push_back(servidor);      
      }
   }

   cout << "Tamanho da Lista: " << cadastro_de_pessoas.size() << endl;

   cout << "Nome: \t Matricula \t CPF" << endl;
   // for (Pessoa *p : cadastro_de_pessoas) {
   // 	p->imprimeDados();
   // }

   /*
      // Exemplo de Instanciação de Objetos (Estáticos e Dinâmicos)
      Aluno aluno_1;
      Aluno aluno_2;
      Aluno * aluno_3;
      cout << "------------" << endl;
      aluno_3 = new Aluno();
      Aluno * aluno_4 = new Aluno();

      aluno_1.setNome("João");
      aluno_1.setCpf(1234567788);

      aluno_2.setNome("Maria");
      aluno_2.setCpf(342567788);

      aluno_3->setNome("Filipe");
      aluno_3->setCpf(234243234);

      cout << "Nome do aluno: " << aluno_1.getNome() << endl;
      cout << "CPF: " << aluno_1.getCpf() << endl;
      cout << "Ira " << aluno_1.getIra() << endl;

      cout << "Nome do aluno: " << aluno_2.getNome() << endl;
      cout << "CPF: " << aluno_2.getCpf() << endl;
      cout << "Ira " << aluno_2.getIra() << endl;

      cout << "Nome do aluno: " << aluno_3->getNome() << endl;
      cout << "CPF: " << aluno_3->getCpf() << endl;
      cout << "Ira: " << aluno_3->getIra() << endl;

      delete(aluno_3);
      delete(aluno_4);
   */
}
   return 0;
}
