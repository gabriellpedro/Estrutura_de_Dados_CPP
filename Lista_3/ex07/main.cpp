/*7) Em função do aumento dos combustíveis, o setor de vendas da rede Carrefour precisa atualizar os valores 
de seus produtos no seu catálogo de vendas. O presidente ordenou um aumento de 4.78% para todos os itens. 
São 10 itens no catálogo. Sua tarefa é elaborar um programa que leia o nome e valor atual dos produtos 
(dados pelo usuário) e armazene em um vetor de struct, e após isso efetue o reajuste do valor dos produtos 
armazenando os em outro vetor, preservando o vetor original. O reajuste (acesso ao vetor) deverá ser feito 
utilizando ponteiros. Imprima na tela o valor reajustado, usando também ponteiros.*/

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
		cout<<"Digite o nome do "<<i+1<<"º produto"<<endl;
		cin>>Produtos[i].nome;
		cout<<"Digite o preço do "<<i+1<<"º produto"<<endl;
		cin>>Produtos[i].preco;
		VetorAux[i] = Produtos[i].preco;
	}
	
	cout<<"O produto "<<Produtos[0].nome<<" que tinha o valor de "<<Produtos[0].nome<<" terá um acréscimo."<<endl;
	cout<<"Passará a custar "<<(*ptr1)*4.78<<endl;
	
		cout<<"O produto "<<Produtos[1].nome<<" que tinha o valor de "<<Produtos[1].nome<<" terá um acréscimo."<<endl;
	cout<<"Passará a custar "<<(*ptr2)*4.78<<endl;
	
		cout<<"O produto "<<Produtos[2].nome<<" que tinha o valor de "<<Produtos[2].nome<<" terá um acréscimo."<<endl;
	cout<<"Passará a custar "<<(*ptr3)*4.78<<endl;
	
		cout<<"O produto "<<Produtos[3].nome<<" que tinha o valor de "<<Produtos[3].nome<<" terá um acréscimo."<<endl;
	cout<<"Passará a custar "<<(*ptr4)*4.78<<endl;
	
		cout<<"O produto "<<Produtos[4].nome<<" que tinha o valor de "<<Produtos[4].nome<<" terá um acréscimo."<<endl;
	cout<<"Passará a custar "<<(*ptr5)*4.78<<endl;
	
		cout<<"O produto "<<Produtos[5].nome<<" que tinha o valor de "<<Produtos[5].nome<<" terá um acréscimo."<<endl;
	cout<<"Passará a custar "<<(*ptr6)*4.78<<endl;
	
		cout<<"O produto "<<Produtos[6].nome<<" que tinha o valor de "<<Produtos[6].nome<<" terá um acréscimo."<<endl;
	cout<<"Passará a custar "<<(*ptr7)*4.78<<endl;
	
		cout<<"O produto "<<Produtos[7].nome<<" que tinha o valor de "<<Produtos[7].nome<<" terá um acréscimo."<<endl;
	cout<<"Passará a custar "<<(*ptr8)*4.78<<endl;
	
		cout<<"O produto "<<Produtos[8].nome<<" que tinha o valor de "<<Produtos[8].nome<<" terá um acréscimo."<<endl;
	cout<<"Passará a custar "<<(*ptr9)*4.78<<endl;
	
		cout<<"O produto "<<Produtos[9].nome<<" que tinha o valor de "<<Produtos[9].nome<<" terá um acréscimo."<<endl;
	cout<<"Passará a custar "<<(*ptr10)*4.78<<endl;	
	
	
	
	return 0;
}
