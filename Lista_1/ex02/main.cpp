/*Os preços dos produtos de uma loja serão atualizados por conta da inflação que aumentou 
15%. Crie um programa que vai popular o vetor de 10 unidades de double e depois vai 
atualizar os preços de acordo com a inflação. Depois disso, exibir o valor na tela.*/

#include <iostream>
#include <locale>


/*double calculo_inflacao (double, double);
double calculo_inflacao (double produtos[], double produtosAux[]){
	for(int i=0; i<10; i++){
		produtosAux[i] = (produtos[i] *0.15)+ produtos[i];
	};
	return calculo_inflacao;
}
*/

using namespace std;

int main() {
	setlocale (LC_ALL, "");
	double produtos[10], produtosAux[10];
	
	for(int i=0; i<10; i++){
		cout<<"Digite o valor do produto "<<i+1<<":"<<endl;
		cin>>produtos[i];
	}
	
	//produtosAux[]=calculo_inflacao(produtos[], produtosAux[])
	
	cout<<"Com o aumento da inflação, os produtos receberão 15% de aumento: "<<endl;
	
	for(int i=0; i<10; i++){
		produtosAux[i] = (produtos[i] *0.15)+ produtos[i];
		cout<<"O produto "<<i+1<<" Que custava "<<produtos[i]<<" custará "<<produtosAux[i]<<endl;
	};
	
	//for(int i=0; i<10; i++){
	//	cout<<"O produto "<<i+1<<" Que custava "<<produtos[i]<<" custará "<<produtosAux[i]<<endl;
	//};
	
	return 0;
}
