/*10)Crie um programa que tenha uma fun��o que receba um inteiro e verifique se � par, impar
ou n�mero primo. As mensagens de �� par� ou �� impar� ou �� primo� devem ser exibidas
na pr�pria fun��o, ou seja, a fun��o em si n�o deve retornar nada.*/

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
    	cout<<"\nDigite qual n�mero voc� gostaria de verificar: "<<endl;
    	cin>>numero;
    	
    	if(comparacao_restoDivisao(numero)){
    	    cout<<"O n�mero "<<numero<<" � Par!";
    	}else{
    	    cout<<"O n�mero "<<numero<<" � �mpar!";
    	}
    	
    	if(comparacao_numPrimo(numero)){
    	    cout<<" E o n�mero � primo."<<endl;
    	}else{
    	    cout<<"\n";
    	}
    	
    	cout<<"\nVoc� deseja continuar\n1 - Sim\n2- N�o"<<endl;
    	cin>>op;
	}while(op==1);
	
}
