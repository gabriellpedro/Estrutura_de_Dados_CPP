/*4) Fazer uma rotina que aguarda um string do teclado e retorna o valor 1 se a
string digitada foi "SIM" e 0 se a string digitado foi "NAO". A rotina/ufn��o s� deve
retornar alguma coisa se a string digitado for "SIM" ou "NAO". Fa�a a verifica��o para 
que o usu�rio n�o estrague o seu c�digo*/

#include <iostream>
#include <locale>

using namespace std;

int main() {
	setlocale (LC_ALL, "");
	
	string resp;
	string a = ("SIM");
	string b = ("NAO");
	int op=0;
	
	do{
		cout<<"Digite SIM ou NAO"<<endl;
		cin>>resp;
		
		if(resp==a){
			cout<<endl<<"� IGUAL A SIM"<<endl;
			op=1;
			cout<<"O valor para Sim �: "<<op<<endl<<endl;
		}else if(resp==b){
			cout<<endl<<"� IGUAl A NAO"<<endl;
			op=0;
			cout<<"O valor para N�o �: "<<op<<endl<<endl;;
		}else{
			cout<<endl<<"Digite uma das duas op��es\n"<<endl;
		}
	}while(op!=4);
		
	return 0;
}
