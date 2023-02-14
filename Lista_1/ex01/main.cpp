/*1) Fazer um programa que imprima a tabuada de 1 a 9.*/

#include <iostream>
#include <locale>

using namespace std;

int main() {
	setlocale (LC_ALL, "");
	int tabuada, cont=0;
	
	cout<<"=== Tabuada 1-9 ==="<<endl;
	
	for(int j=1; j<10; j++){
		cout<<"\nA tabuada do "<<j<<" é:"<<endl;	
		for(int i=0; i<11; i++){
			tabuada = j*i;
			cout<<j<<"x"<<i<<" é "<<tabuada<<endl;
		}
	}
	
	return 0;
}
