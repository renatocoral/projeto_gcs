#include "servidor.hpp"
#include <iostream>

using namespace std;

Servidor::Servidor() {
   cout << "Construtor padrão da classe Servidor" << endl;
   setNome("");
   setMatricula(0);
   setCpf(0);
   departamento = "";
   carga_horaria = 8;
   cargo = "";
}

Servidor::Servidor(string nome, int matricula, long int cpf, string cargo, string departamento, int carga_horaria){
   cout << "Construtor Especifico da classe Servidor" << endl;
   setNome(nome);
   setMatricula(matricula);
   setCpf(cpf);
   this->cargo = cargo;
   this->departamento = departamento;
   this->carga_horaria = carga_horaria;
}


Servidor::~Servidor(){ 
   cout << "Destrutor da Classe Professor" << endl;
}

string Servidor::getCargo() {
	return cargo;
}
void Servidor::setCargo(string cargo) {
	this->cargo = cargo;
}
string Servidor::getDepartamento(){
	return departamento;
}
void Servidor::setDepartamento(string departamento){
	this->departamento = departamento;
}
void Servidor::setCargaHoraria(int carga_horaria){
	this->carga_horaria = carga_horaria;
}
int Servidor::getCargaHoraria(){
	return carga_horaria;
}

void Servidor::imprimeDados(){
    cout << getNome() << "\t" << getMatricula() << "\t" << getCpf() << "\t" << getCargo() << "\t" << getDepartamento() << "\t" << getCargaHoraria() << endl;
}
