/*2) Popule um vetor (através do usuário) que tenha 5 unidades 
dessa nova estrutura e busque a pessoa mais velha. Exiba o nome e a data de nascimento dessa pessoa 
mais velha.*/

#include <iostream>
#include <locale>
#include <string.h>

#define qntAtletas 5

using namespace std;

struct Pessoas{
	char nome[40], posicao[20];
	int idade;
	float altura;
} atleta[qntAtletas];



int main(){
	setlocale (LC_ALL, "");
	
	char maisVelho[40], maisAlto[40];
	int maior=-1;
	float maiorAltura=-1.0;
	
	for(int i=0; i<qntAtletas; i++){
		cout<<"===="<<endl;
		cout<<"Digite o nome do atleta:"<<endl;
		cin>>atleta[i].nome;
		cout<<"Sua posição:"<<endl;
		cin>>atleta[i].posicao;
		cout<<"Sua idade:"<<endl;
		cin>>atleta[i].idade;
		cout<<"Sua altura:"<<endl;
		cin>>atleta[i].altura;
	}
	
	for(int i=0; i<qntAtletas; i++){
		if(atleta[i].idade>maior){
			maior=atleta[i].idade;
			strcpy(maisVelho,atleta[i].nome);
		};
		if(atleta[i].altura>maiorAltura){
		    maiorAltura=atleta[i].altura;
		    strcpy(maisAlto,atleta[i].nome);
		}
	}
	
	cout<<"O mais velho é "<<maisVelho<<" e ele tem "<<maior<<" anos"<<endl;
	cout<<"O mais ato é "<<maisAlto<<" e ele tem "<<maiorAltura<<" metros de altura"<<endl;
	
	
}
