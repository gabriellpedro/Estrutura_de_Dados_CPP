/*8) Crie um programa que popule um vetor de 10 valores inteiros, passados pelo usu�rio. 
Depois disso, pergunte ao usu�rio se ele quer ordenar de forma crescente ou decrescente.
Pesquise o bubble sort na internet. Dependendo da resposta do usu�rio, crie um segundo 
vetor para armazenar os valores ordenados de forma crescente ou decrescente. As partes 
de ordenar de forma crescente ou decrescente devem ser feitas em duas fun��es separadas. 
A fun��o deve retornar o vetor para ser exibido na main*/

#include <iostream>
#include <locale>

using namespace std;

int *crescente (int vetor[]){
    int aux;
    for(int i=0; i<10; i++){
        for(int j=i+1; j<10; j++){
            if(vetor[i]>vetor[j]){
                aux=vetor[i];
                vetor[i]=vetor[j];
                vetor[j]=aux;
            }
        }
    }
    return vetor;
}


int *decrescente (int vetor[]){
    int aux;
    for(int i=0; i<10; i++){
        for(int j=i+1; j<10; j++){
            if(vetor[i]<vetor[j]){
                aux=vetor[i];
                vetor[i]=vetor[j];
                vetor[j]=aux;
            }
        }
    }
    return vetor;
}



int main() {
	setlocale (LC_ALL, "Portuguese");
	
	int valores[10], op=0;
	int valoresOrdenado[10];
	
	for(int i=0; i<10; i++){
	    cout<<"Digite o "<<i+1<<"� valor:"<<endl;
	    cin>>valores[i];
	}

	cout<<"Voc� deseja ver de forma crescente ou decrescente?"<<endl;
	cout<<"Crescente - 1\nDecrescente - 2"<<endl;
	cin>>op;
	
	
	if(op==1){
        crescente(valores);
        
        for(int i=0; i<10;i++){
            valoresOrdenado[i]=valores[i];
        }
        
        cout<<"De forma ordenada, os mesmos ficar�o:"<<endl;
    	cout<<endl;
    	
    	for(int i=0; i<10; i ++){
            cout<<valoresOrdenado[i]<<endl;
    	}
	}else if(op=2){
    	decrescente(valores);
    	
    	 for(int i=0; i<10;i++){
            valoresOrdenado[i]=valores[i];
        }
    	
    	cout<<"De forma decrescente, os mesmos ficar�o:"<<endl;
    	cout<<endl;
    	
    	for(int i=0; i<10; i ++){
            cout<<valoresOrdenado[i]<<endl;
    	}
	}
    return 0;
}
