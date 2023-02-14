/*5) Procure a respeito das seguintes funções de manipulação de string: strcpy, strcmp, strcat, 
strlen e faça a programa a seguir utilizando essas funções: usuário vai passar nome e 
sobrenome para o programa (apenas duas palavras), que vai fazer as seguintes verificações: 
se nome for maior que sobrenome (usar strcmp) então imprimir concatenados o nome e 
depois o sobrenome. Caso contrário imprimir na tela o sobrenome e depois o nome. E se 
forem iguais colocar em uma terceira variável o nome e depois o sobrenome e exibir na 
tela também o tamanho (número de caracteres) da string total (nome completo do usuário).*/

#include <iostream>
#include <locale>
#include <string.h>

using namespace std;

int main() {
	setlocale (LC_ALL, "");
	
	int numNome, numSobrenome, numAux;
	char nome[20], sobrenome[20];
	string nomeInteiro;
	
	cout<<"Digite seu nome:"<<endl;
	cin>>nome;
	
	cout<<"Digite seu sobrenome"<<endl;
	cin>>sobrenome;
	
	nomeInteiro=nome,sobrenome;
	numAux= strcmp(nome,sobrenome);
	
	if(numAux<=-1){
		cout<<"O nome é menor que o Sobrenome: "<<endl;
		cout<<nome<<endl;
		cout<<sobrenome<<endl;
	}else if(numAux>=1){
		cout<<"O nome é maior que o Sobrenome: "<<endl;
		cout<<"Concatenados ficam: "<<strcat(nome,sobrenome)<<endl;
	}else if(numAux=0){
		cout<<nomeInteiro<<endl;
	}
	
	numNome = strlen(nome);
	numSobrenome = strlen(sobrenome);
	cout<<"O total de caracteres do nome é: "<<numNome<<endl;
	cout<<"O total de caracteres do sobrnome é "<<numNome<<endl;
	cout<<"E o total de caracteres de ambas é: "<<numNome+numNome;
	
	return 0;
}
