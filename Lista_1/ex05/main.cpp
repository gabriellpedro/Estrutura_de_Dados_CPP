/*5) Procure a respeito das seguintes fun��es de manipula��o de string: strcpy, strcmp, strcat, 
strlen e fa�a a programa a seguir utilizando essas fun��es: usu�rio vai passar nome e 
sobrenome para o programa (apenas duas palavras), que vai fazer as seguintes verifica��es: 
se nome for maior que sobrenome (usar strcmp) ent�o imprimir concatenados o nome e 
depois o sobrenome. Caso contr�rio imprimir na tela o sobrenome e depois o nome. E se 
forem iguais colocar em uma terceira vari�vel o nome e depois o sobrenome e exibir na 
tela tamb�m o tamanho (n�mero de caracteres) da string total (nome completo do usu�rio).*/

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
		cout<<"O nome � menor que o Sobrenome: "<<endl;
		cout<<nome<<endl;
		cout<<sobrenome<<endl;
	}else if(numAux>=1){
		cout<<"O nome � maior que o Sobrenome: "<<endl;
		cout<<"Concatenados ficam: "<<strcat(nome,sobrenome)<<endl;
	}else if(numAux=0){
		cout<<nomeInteiro<<endl;
	}
	
	numNome = strlen(nome);
	numSobrenome = strlen(sobrenome);
	cout<<"O total de caracteres do nome �: "<<numNome<<endl;
	cout<<"O total de caracteres do sobrnome � "<<numNome<<endl;
	cout<<"E o total de caracteres de ambas �: "<<numNome+numNome;
	
	return 0;
}
