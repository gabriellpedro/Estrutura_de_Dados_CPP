/*10)Crie um programa que tenha uma função que receba um inteiro e verifique se é par, impar
ou número primo. As mensagens de “É par” ou “É impar” ou “É primo” devem ser exibidas
na própria função, ou seja, a função em si não deve retornar nada.*/

#include <iostream>
#include <locale>

using namespace std;

bool comparacao_restoDivisao(int num){
    if(num%2==0){
        return true;//par
    }else{
        return false;//impar
    }
}

bool comparacao_numPrimo(int num){
    for(int i=2; i<num; i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}




int main() {
	setlocale (LC_ALL, "");
	int numero=0, op=1;
	
	do{
    	cout<<"\nDigite qual número você gostaria de verificar: "<<endl;
    	cin>>numero;
    	
    	if(comparacao_restoDivisao(numero)){
    	    cout<<"O número "<<numero<<" é Par!";
    	}else{
    	    cout<<"O número "<<numero<<" é Ímpar!";
    	}
    	
    	if(comparacao_numPrimo(numero)){
    	    cout<<" E o número é primo."<<endl;
    	}else{
    	    cout<<"\n";
    	}
    	
    	cout<<"\nVocê deseja continuar\n1 - Sim\n2- Não"<<endl;
    	cin>>op;
	}while(op==1);
	
}
