/*6) Fa�a um programa que apresente a s�rie de Fibonacci at� o d�cimo quinto termo. A fun��o 
deve receber esse termo e retornar o valor desse termo ap�s a s�rie de Fibonacci. A s�rie � 
formada pela sequ�ncia: 1,1,2,3,5,8,13,21,34,....,etc.*/

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
		    cout<<endl<<"O 15� termo �:"<<endl;
		    cout<<fib[cont]<<endl;
		}
	}
}
