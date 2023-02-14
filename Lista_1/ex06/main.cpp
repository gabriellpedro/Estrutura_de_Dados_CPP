/*6) Faça um programa que apresente a série de Fibonacci até o décimo quinto termo. A função 
deve receber esse termo e retornar o valor desse termo após a série de Fibonacci. A série é 
formada pela sequência: 1,1,2,3,5,8,13,21,34,....,etc.*/

#include <iostream>
#include <locale>

using namespace std;

int main() {
	setlocale (LC_ALL, "Portuguese");
	
	int num1=0, num2=1, fib[16];
	double op=15;
	
	for(int cont=0; cont<op; cont++){
		fib[cont] = num1 + num2;
		num1=num2;
		num2=fib[cont];
		cout<<fib[cont]<<" / ";
		if(cont==14){
		    cout<<endl<<"O 15º termo é:"<<endl;
		    cout<<fib[cont]<<endl;
		}
	}
}
