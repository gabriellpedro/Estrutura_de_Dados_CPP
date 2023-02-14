/*9) Crie um programa que popule um vetor de 10 valores float, passados pelo usuário. Dentro 
de uma função, sem ordenar, procure pelo maior e menor valor e exiba-os na tela. A função 
deve receber esse vetor e retornar o maior e menor valor para serem exibidos na tela.*/

#include <iostream>
#include <locale>

using namespace std;

int *calculo_maior(int numeros[]){
    int maior=numeros[0];
    int aux=0, posicao;
    
    for(int i=0; i<10; i++){
        if(numeros[i]>maior){
            maior=numeros[i];
            posicao=i;
        }
    }
    aux=numeros[0];
    numeros[0]=maior;
    numeros[posicao]=aux;
    return numeros;
};

int *calculo_menor(int numeros[]){
    int menor=numeros[0];
    int aux=0, posicao;
    
    for(int i=0; i<10; i++){
        if(numeros[i]<menor){
            menor=numeros[i];
            posicao=i;
        }
    }
    aux=numeros[0];
    numeros[0]=menor;
    numeros[posicao]=aux;
    return numeros;
}

int main()
{
    setlocale (LC_ALL, "");
    
    int numeros[10];

    for(int i=0; i<10; i++){
        cout<<"Digite o "<<i+1<<"º valor do vetor:"<<endl;
        cin>>numeros[i];
    }
    
    calculo_maior(numeros);
    cout<<"O maior número é: "<<numeros[0]<<endl;
    
    calculo_menor(numeros);
    cout<<"O menor número é: "<<numeros[0]<<endl;

    return 0;
}
