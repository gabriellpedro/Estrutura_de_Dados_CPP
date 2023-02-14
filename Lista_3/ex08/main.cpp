/*8) Crie um programa que leia 9 valores inteiros do usuário. Esses valores devem ser variados, podendo ser 
repetidos. 
a) Use ponteiro para popular o vetor.
b) Ordene o vetor de forma crescente (use bubble sort)
c) Crie uma matriz 3x3 e popule essa matriz com os valores do vetor, usando ponteiro.
d) Exiba cada elemento do vetor e da matriz, usando ponteiro.*/

#include <iostream>
#include <locale>

using namespace std;

int *crescente (int vetor[]){
    int aux;
    for(int i=0; i<5; i++){
        for(int j=i+1; j<5; j++){
            if(vetor[i]>vetor[j]){
                aux=vetor[i];
                vetor[i]=vetor[j];
                vetor[j]=aux;
            }
        }
    }
    return vetor;
}

struct numeros{
	int valores;
} Numeros[5];

int main(int argc, char** argv){
	setlocale (LC_ALL, "");
	
	int vetor[5], *ptr1 = NULL, *ptr2 = NULL, *ptr3 = NULL, *ptr4 = NULL, *ptr5 = NULL;
	int aux[5];
	
	ptr1 = &Numeros[0].valores;
	ptr2 = &Numeros[1].valores;
	ptr3 = &Numeros[2].valores;
	ptr4 = &Numeros[3].valores;
	ptr5 = &Numeros[4].valores;
	
	for(int i=0; i<5; i++){
		cout<<"Digite o valor"<<endl;
		cin>>Numeros[i].valores;
		cout<<Numeros[i].valores;
	}

	for(int i=0; i<5; i++){
		aux[i] = Numeros[i].valores;
	}
	
	//crescente(aux);
	
	for(int i=0; i<5; i++){
		Numeros[i].valores = aux[i];
		cout<<Numeros[i].valores<<endl;
	}
}
