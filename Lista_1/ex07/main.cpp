/*7)Criar uma função que retorna o seguinte: 
A função recebe 4valores do tipo inte retornar otripl odo 1º + o quadrado dos outros dois. 
Vai retornar o tipo float, ou seja, tem que fazer um cast do valor 
(procurar cast de int para float na internet).*/

#include <iostream>
#include <locale>
#include <math.h>

using namespace std;


int calculo(int, int, int);
int calculo(int x, int y, int z){
    return (x*3)+((pow (y,2))+(pow (z,2)));
};

int main() {
	setlocale(LC_ALL, "");
	
	int valor1, valor2, valor3, valor4,resultado;
	
	
    cout<<"Insira o 1º valor"<<endl;
	cin>>valor1;
	
	cout<<"Insira o 2º valor"<<endl;
	cin>>valor2;

	cout<<"Insira o 3º valor"<<endl;
	cin>>valor3;
	
	cout<<"Insira o 4º valor"<<endl;
	cin>>valor4;
	
	resultado=calculo(valor1,valor2,valor3);
	cout<<"O triplo do primeiro valor, maios o quadrado dos outros dois é: "<<resultado;
	return 0;
}
