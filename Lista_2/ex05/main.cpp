/*Fa�a um programa que gerencie o estoque de um mercado e:
* Crie e leia um vetor de 5 produtos, com os dados: c�digo (inteiro), nome (m�ximo 15 letras), pre�o 
e quantidade.
* Leia um pedido, composto por um c�digo de produto e a quantidade. Localize este c�digo no vetor 
e, se houver quantidade suficiente para atender ao pedido integralmente, fa�a o pedido, atualize 
o estoque e informe o usu�rio (exibir na tela item vendido, quantidade vendida e quantos restam 
no estoque). Repita este processo at� zerar o estoque. 
* Se a quantidade do pedido for maior que o estoque, exibir mensagem com a quantidade de itens 
no estoque*/

#include<iostream>
#include <locale>

#define qntdProd 5

using namespace std;

struct produtos {
    string nome;
    double codigo;
    int estoque;
    float valorUnit;
} Cadastro_Produtos[qntdProd];


int main(){
	setlocale (LC_ALL, "");
    int op = 1;
    int auxCod = 0, auxEstoque = 0;

    Cadastro_Produtos[0].nome = "Bala Halls", Cadastro_Produtos[0].codigo = 100, Cadastro_Produtos[0].estoque = 5, Cadastro_Produtos[0].valorUnit = 1;
    
    Cadastro_Produtos[1].nome = "Caderno", Cadastro_Produtos[1].codigo = 200, Cadastro_Produtos[1].estoque = 5, Cadastro_Produtos[1].valorUnit =3;

    Cadastro_Produtos[2].nome = "L�pis", Cadastro_Produtos[2].codigo = 300, Cadastro_Produtos[2].estoque = 5, Cadastro_Produtos[2].valorUnit =1.50;

    Cadastro_Produtos[3].nome = "Bolsa", Cadastro_Produtos[3].codigo = 400, Cadastro_Produtos[3].estoque = 5, Cadastro_Produtos[3].valorUnit =55;
    
    Cadastro_Produtos[4].nome = "POCO X3 Pro", Cadastro_Produtos[4].codigo = 500, Cadastro_Produtos[4].estoque = 5, Cadastro_Produtos[4].valorUnit =150;

    do{
        for(int i=0; i<qntdProd; i++){
        	cout<<"Produto: "<<Cadastro_Produtos[i].nome<<" | C�digo: "<<Cadastro_Produtos[i].codigo<<" | Estoque: "<<Cadastro_Produtos[i].estoque<<endl;
		}
        cout<<"===="<<endl;
        cout<<"Qual o c�digo do produto que voc� deseja comprar: "<<endl;
        cin>>auxCod;
        
        
        for(int i=0; i<qntdProd; i++){
            if(auxCod == Cadastro_Produtos[i].codigo){
                cout<<"Nome do produto selecionado: ";
                cout<<Cadastro_Produtos[i].nome<<endl;
                cout<<endl;
                cout<<"Qual a quantidade que voc� deseja comprar?"<<endl;
                cin>>auxEstoque;
                if (Cadastro_Produtos[i].estoque>=auxEstoque){
                    Cadastro_Produtos[i].estoque= Cadastro_Produtos[i].estoque - auxEstoque;
                    cout<<endl;
					cout<<"_______________________________"<<endl;
                    cout<<"   Resumo pedido:   "<<endl;
                    cout<<"Produto: "<<Cadastro_Produtos[i].nome<<endl;
                    cout<<"Quantidade pedida: "<<auxEstoque<<endl;
                    cout<<"O pre�o do pedido custar� R$"<<Cadastro_Produtos[i].valorUnit*auxEstoque<<endl;
                    cout<<"_______________________________"<<endl;
                    cout<<endl;
                }else{
                    if(Cadastro_Produtos[i].estoque>=1){
                    	cout<<endl;
                    	cout<<"H� apenas "<<Cadastro_Produtos[i].estoque<<" itens em estoque"<<endl<<endl;
					}else{
						cout<<endl;
						cout<<"N�o h� quantidade suficiente."<<endl<<endl;
					}
                }
            }
        }
    }while(op=1);

    return 0;
}
