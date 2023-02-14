/*2) Seja a seguinte struct que é utilizada para descrever os produtos que estão no estoque de uma loja :
Faça um programa que armazene 5 produtos e exiba-os na tela. 
Obs: fique atento, porque código e preço são 
ponteiros dentro de struct.*/

#include <iostream>
#include <locale>

#define qntdProdutos 5

using namespace std;

struct Produto{
    char nome [30];
    int *codigo;
    double *preco;
    char fornecedor [50];
} CadastroProdutos[qntdProdutos];

int main(){
    setlocale(LC_ALL, "");
    int memoriaCodigo[5], auxCod = 0;
    double memoriaPreco [5], auxPreco = 0;
    
    
    for(int i=0; i<qntdProdutos; i++){
        cout<<"\nDigite o nome do produto"<<endl;
        cin>>CadastroProdutos[i].nome;
        
        cout<<"Digite o código deste produto"<<endl;
        cin>>auxCod;
        CadastroProdutos->codigo = &memoriaCodigo[i];
        *(CadastroProdutos->codigo) = auxCod;
        
        cout<<"Digite o preço deste produto:"<<endl;
        cin>>auxPreco;
        CadastroProdutos->preco = &memoriaPreco[i];
        *(CadastroProdutos->preco) = auxPreco;
    }
    
    cout<<"Os produtos cadastrados são:"<<endl;
    
    for(int i=0; i<qntdProdutos; i++){
        cout<<endl;
        cout<<CadastroProdutos[i].nome<<endl;
        cout<<memoriaCodigo[i]<<endl;
        cout<<memoriaPreco[i]<<endl;
    }

    return 0;
}
