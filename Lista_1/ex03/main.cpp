/*3) Fazer um programa que l� um conjunto de 10 valores inteiros e verifica
se algum dos valores � igual a m�dia dos mesmos.*/

#include <iostream>
#include <locale>

using namespace std;

int main() {
	setlocale (LC_ALL, "");
	
	int num[10], med=0, cont, aux=0,op=0, numAux, cont2;
	
	for(int i=0; i<10; i++){
		cout<<"Digite o "<<i+1<<"� numero:"<<endl;
		cin>>num[i];
		aux=num[i]+aux;
		cont=cont+1;
	}

	med=aux/cont;	
	
	for(int i=0; i<10; i++){
		if(med==num[i]){
			op=1;
			numAux=num[i];
			cont2=cont2+1;
		}else{
			op=2;
		}
	};
	
	switch(op){
		case 1:
			cout<<"A m�dia dois valores inseridos foi:"<<endl;
			cout<<med<<endl;
			cout<<"Que � o mesmo valor da posi��o "<<cont2<<" do vetor"<<endl;
			break;
		case 2:
			cout<<"A m�dia dois valores inseridos foi:"<<endl;
			cout<<med<<endl;
			cout<<"Que n�o � igual a nenhum valor do vetor"<<endl;
			break;
	}	
	
	return 0;
}
