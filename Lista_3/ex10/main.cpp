/*10) Crie um programa que leia do teclado uma sequência de 10 números decimais e um número que deseja 
buscar. Armazene em um vetor. Depois disso, ordene os números de forma crescente. Por último, exiba o 
vetor e se o número buscado foi encontrado ou não. Faça todo o exercício usando somente ponteiros.*/

#include <locale>
#include <iostream>

using namespace std;

main (){
	setlocale(LC_ALL, "Portuguese");
	int Valores[10], *ptr, resposta, *pesquisa, Aux, *ptr2;
	
	for (int i=0; i<10; i++){
		cout<<"Qual o "<<i+1<<"º número do vetor?"<<endl;
		cin>>Valores[i];		
	}
	
	for (int i = 0; i < 10; i++){
		for (int j = i + 1; j < 10; j++){
		ptr=&Valores[i];
		ptr2=&Valores[j];
			if (*ptr>*ptr2){
			    Aux=*ptr;
				*ptr=*ptr2;
				*ptr2=Aux;
			}	
		}
	}
		for (int i = 0; i < 10; i++){
			ptr=&Valores[i];
			cout<<*ptr<<endl;	
	}
	
	cout<<"Qual número você deseja buscar dentro do vetor? "<<endl;
	cin>>resposta;	
	for (int i=0; i<10; i++){
		ptr=&Valores[i];
		pesquisa=&resposta;
		if (*pesquisa==*ptr){
			cout<<"O número buscado foi encontrado na posição "<<i+1<<endl;
		}
	}
}
