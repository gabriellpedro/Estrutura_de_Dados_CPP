/*7) Em fun��o do aumento dos combust�veis, o setor de vendas da rede Carrefour precisa atualizar os valores 
de seus produtos no seu cat�logo de vendas. O presidente ordenou um aumento de 4.78% para todos os itens. 
S�o 10 itens no cat�logo. Sua tarefa � elaborar um programa que leia o nome e valor atual dos produtos 
(dados pelo usu�rio) e armazene em um vetor de struct, e ap�s isso efetue o reajuste do valor dos produtos 
armazenando os em outro vetor, preservando o vetor original. O reajuste (acesso ao vetor) dever� ser feito 
utilizando ponteiros. Imprima na tela o valor reajustado, usando tamb�m ponteiros.*/

#include <iostream>
#include <locale>
#include <string>

#define qntdProdutos 10

using namespace std;

struct produtos{
	float preco;
	string nome;
}Produtos[qntdProdutos];

int main() {
	setlocale (LC_ALL, "");
	
	int VetorAux[qntdProdutos], *ptr1,*ptr2,*ptr3,*ptr4, *ptr5,*ptr6,*ptr7,*ptr8,*ptr9,*ptr10;
	
	ptr1 = &VetorAux[0];
	ptr2 = &VetorAux[1];
	ptr3 = &VetorAux[2];
	ptr4 = &VetorAux[3];
	ptr5 = &VetorAux[4];
	ptr6 = &VetorAux[5];
	ptr7 = &VetorAux[6];
	ptr8 = &VetorAux[7];
	ptr9 = &VetorAux[8];
	ptr10 = &VetorAux[9];
	
	
	for(int i=0; i<qntdProdutos; i++){
		cout<<"Digite o nome do "<<i+1<<"� produto"<<endl;
		cin>>Produtos[i].nome;
		cout<<"Digite o pre�o do "<<i+1<<"� produto"<<endl;
		cin>>Produtos[i].preco;
		VetorAux[i] = Produtos[i].preco;
	}
	
	cout<<"O produto "<<Produtos[0].nome<<" que tinha o valor de "<<Produtos[0].nome<<" ter� um acr�scimo."<<endl;
	cout<<"Passar� a custar "<<(*ptr1)*4.78<<endl;
	
		cout<<"O produto "<<Produtos[1].nome<<" que tinha o valor de "<<Produtos[1].nome<<" ter� um acr�scimo."<<endl;
	cout<<"Passar� a custar "<<(*ptr2)*4.78<<endl;
	
		cout<<"O produto "<<Produtos[2].nome<<" que tinha o valor de "<<Produtos[2].nome<<" ter� um acr�scimo."<<endl;
	cout<<"Passar� a custar "<<(*ptr3)*4.78<<endl;
	
		cout<<"O produto "<<Produtos[3].nome<<" que tinha o valor de "<<Produtos[3].nome<<" ter� um acr�scimo."<<endl;
	cout<<"Passar� a custar "<<(*ptr4)*4.78<<endl;
	
		cout<<"O produto "<<Produtos[4].nome<<" que tinha o valor de "<<Produtos[4].nome<<" ter� um acr�scimo."<<endl;
	cout<<"Passar� a custar "<<(*ptr5)*4.78<<endl;
	
		cout<<"O produto "<<Produtos[5].nome<<" que tinha o valor de "<<Produtos[5].nome<<" ter� um acr�scimo."<<endl;
	cout<<"Passar� a custar "<<(*ptr6)*4.78<<endl;
	
		cout<<"O produto "<<Produtos[6].nome<<" que tinha o valor de "<<Produtos[6].nome<<" ter� um acr�scimo."<<endl;
	cout<<"Passar� a custar "<<(*ptr7)*4.78<<endl;
	
		cout<<"O produto "<<Produtos[7].nome<<" que tinha o valor de "<<Produtos[7].nome<<" ter� um acr�scimo."<<endl;
	cout<<"Passar� a custar "<<(*ptr8)*4.78<<endl;
	
		cout<<"O produto "<<Produtos[8].nome<<" que tinha o valor de "<<Produtos[8].nome<<" ter� um acr�scimo."<<endl;
	cout<<"Passar� a custar "<<(*ptr9)*4.78<<endl;
	
		cout<<"O produto "<<Produtos[9].nome<<" que tinha o valor de "<<Produtos[9].nome<<" ter� um acr�scimo."<<endl;
	cout<<"Passar� a custar "<<(*ptr10)*4.78<<endl;	
	
	
	
	return 0;
}
