/*1) Considere uma estrutura de conta corrente contendo o nome do titular, o CPF e o valor na conta. Escreva 
uma função que cadastre 5 usuários e os exiba na tela ordenados de forma decrescente de acordo com 
o valor na conta.*/

#include <iostream>
#include <locale>

#define qntdContas 5

using namespace std;

struct conta{
    string Nome;
    string CPF;
    double Quantia;
} Conta_banco[qntdContas];

int Ordem_Descrescente(conta Conta_banco[]){
	int Aux;
	for(int i = 0; i < qntdContas; i++){
		for(int j = i + 1;j < qntdContas; j++){
			if (Conta_banco[i].Quantia < Conta_banco[j].Quantia){
				Aux = Conta_banco[i].Quantia ;
				Conta_banco[i].Quantia  = Conta_banco[j].Quantia ;
				Conta_banco[j].Quantia  = Aux;	
			}
		}
	}	
}


void InfoContas(conta Conta_banco[]){
	for (int i = 0; i < qntdContas; i++){
	    cout<<"___"<<endl<<endl;
		cout << " "<< i+1 << "º Usuário" << endl << endl;
		cout << "Insira o nome do " << i+1 << "º Usuário" << endl;
		cin >>Conta_banco[i].Nome;
		cout << "Insira o CPF do " << i+1 << "º Usuário " << endl;
		cin >>Conta_banco[i].CPF;
		cout << "Insira o Valor presente na conta do " << i+1 << "º Usuário" << endl;
		cin >>Conta_banco[i].Quantia;
	}	
}

int main(){
    setlocale (LC_ALL, "");
    
    cout<<"Cadastrando usuários no banco:"<<endl;
    
    InfoContas(Conta_banco);
    
    for(int i=0; i < qntdContas; i++){
        Ordem_Descrescente(Conta_banco);
        cout<<"___"<<endl;
        cout<<"O "<<i+1<<"º usuário é: "<<Conta_banco[i].Nome<<endl;
        cout<<"Número de CPF: "<<Conta_banco[i].CPF<<endl;
        cout<<"Com a quantia de "<<Conta_banco[i].Quantia<<endl;
    }
    return 0;
}
