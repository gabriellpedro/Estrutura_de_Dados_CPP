/*10) Crie um programa que leia do teclado uma sequ�ncia de 10 n�meros decimais e um n�mero que deseja 
buscar. Armazene em um vetor. Depois disso, ordene os n�meros de forma crescente. Por �ltimo, exiba o 
vetor e se o n�mero buscado foi encontrado ou n�o. Fa�a todo o exerc�cio usando somente ponteiros.*/

#include <locale>
#include <iostream>

using namespace std;

main (){
	setlocale(LC_ALL, "Portuguese");
	int Valores[10], *ptr, resposta, *pesquisa, Aux, *ptr2;
	
	for (int i=0; i<10; i++){
		cout<<"Qual o "<<i+1<<"� n�mero do vetor?"<<endl;
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
	
	cout<<"Qual n�mero voc� deseja buscar dentro do vetor? "<<endl;
	cin>>resposta;	
	for (int i=0; i<10; i++){
		ptr=&Valores[i];
		pesquisa=&resposta;
		if (*pesquisa==*ptr){
			cout<<"O n�mero buscado foi encontrado na posi��o "<<i+1<<endl;
		}
	}
}
