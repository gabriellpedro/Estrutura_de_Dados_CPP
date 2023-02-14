/*9) Crie um programa que leia do teclado duas frases. 
a) Através de ponteiro, determine quantas letras tem a primeira frase (ou seja, use o ponteiro para 
percorrer o array de char). 
b) Verifique o tamanho dessa segunda frase (usando strlen), use strcpy para copiar a segunda frase numa 
terceira variável e compare as duas frases usando strcmp. Faça essa parte usando uma função que 
recebe como parâmetro as duas frases e retorne o tamanho da maior frase.*/

#include <locale>
#include <iostream>
#include <string.h>
#include <cstdlib>

using namespace std;

int TamanhoFrases(char primFrase[], char segFrase[]){
	int diff;
	diff =  strcmp(primFrase,segFrase); 
	if (diff < 0){
		cout << "A frase maior é a segunda." << endl;
		cout << "Tamanho da segunda frase: " << strlen(segFrase);
	}else if (diff == 0){
		cout << "Ambas possuem o mesmo tamanho" << endl;
		cout << "Tamanho das frases: " << strlen(segFrase);	
	}else{
		cout << "A frase maior é a primeira." << endl;
		cout << "Tamanho da primeira frase: " << strlen(primFrase);	
	}
}


int main(){
	setlocale(LC_ALL,"Portuguese");
	char primFrase[50], segFrase[50], auxFrase[50], *ptrChar;
	int DiffCaract, cont, tam1;
	
	cout << "Insira a primeira frase: " << endl;
	cin >> primFrase;
	
	cout << "Insira a segunda frase: " << endl;
	cin >> segFrase;	
	
	ptrChar = primFrase;
		
	strcpy(auxFrase,segFrase);	
	
	tam1 = strlen(primFrase);
	for (int i = 0; i < tam1; i++){
		if (ptrChar != "\0"){
			cont++;
		}
	}
	cout << "O tamanho da primeira frase é: " << cont << endl;
	
	TamanhoFrases(primFrase, segFrase);
	
}
