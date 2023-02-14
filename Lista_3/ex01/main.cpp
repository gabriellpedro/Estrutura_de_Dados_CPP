/*1) A delegação francesa de Futsal deseja criar um programa que deva conter o nome do atleta, sua posição, 
idade e altura. Crie uma estrutura representando um atleta. Escreva um programa que leia os dados de cinco 
atletas e os exiba por ordem de idade, do mais velho para o mais novo.*/

#include <iostream>
#include <locale>
#include <string.h>

#define qntAtletas 5

using namespace std;

int *decrescente (int vetor[]){
    int aux;
    for(int i=0; i<5; i++){
        for(int j=i+1; j<5; j++){
            if(vetor[i]<vetor[j]){
                aux=vetor[i];
                vetor[i]=vetor[j];
                vetor[j]=aux;
            }
        }
    }
    return vetor;
}

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
	int idades[5];
	
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
	
	for(int i=0; i<qntAtletas;i++){
		idades[i] = atleta[i].idade;
	}
	
	decrescente(idades);
	
	cout<<"A ordem decrescente das idades será:"<<endl;
	
	for(int i=0; i<qntAtletas;i++){
		atleta[i].idade = idades[i];
		cout<<atleta[i].idade<<endl;
	}	
	
}
