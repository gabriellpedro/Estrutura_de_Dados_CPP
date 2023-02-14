/*4) Fazer uma rotina que aguarda um string do teclado e retorna o valor 1 se a
string digitada foi "SIM" e 0 se a string digitado foi "NAO". A rotina/ufnção só deve
retornar alguma coisa se a string digitado for "SIM" ou "NAO". Faça a verificação para 
que o usuário não estrague o seu código*/

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
			cout<<endl<<"É IGUAL A SIM"<<endl;
			op=1;
			cout<<"O valor para Sim é: "<<op<<endl<<endl;
		}else if(resp==b){
			cout<<endl<<"É IGUAl A NAO"<<endl;
			op=0;
			cout<<"O valor para Não é: "<<op<<endl<<endl;;
		}else{
			cout<<endl<<"Digite uma das duas opções\n"<<endl;
		}
	}while(op!=4);
		
	return 0;
}
