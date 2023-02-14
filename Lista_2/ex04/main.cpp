/*Escreva uma função que receba seis pontos, preenchidos 
pelo usuário. Os três primeiros pontos formam um triângulo e os outros três formam outro triângulo. 
Comparando os dois triângulos, classifique se são isósceles, equiláteros e escalenos. */

#include <iostream>
#include <locale>

#define qtndTriangulos 2

struct pontos{
    int pontoA, pontoB, pontoC;
} triangulo[qtndTriangulos];

using namespace std;

int verificaTriangulos(int a, int b, int c){
    if((a==b) && (b==c)){
        return 1; // Equilátero
    }else if( (a!=b) && (a!=c) && (b!=c) ){
        return 2; // Escaleno
    }else{
        return 3; // Isósceles
    }
}

int main(){
    setlocale (LC_ALL, "");
    int triangulo1=0, triangulo2=0;
    
    for(int i=0; i<qtndTriangulos; i++){
        cout<<"Insira o "<<1<<"º lado do "<<i+1<<"º triangulo"<<endl;
        cin>>triangulo[i].pontoA;
        cout<<"Insira o "<<2<<"º lado do "<<i+1<<"º triangulo"<<endl;
        cin>>triangulo[i].pontoB;
        cout<<"Insira o "<<3<<"º lado do "<<i+1<<"º triangulo"<<endl;
        cin>>triangulo[i].pontoC;
    }
    
    cout<<"Verificando o 1º triângulo:"<<endl;
    
    if(verificaTriangulos(triangulo[0].pontoA, triangulo[0].pontoB, triangulo[0].pontoC)==1){
        cout<<"O 1º triângulo, que tem os valores de lado A "<<triangulo[0].pontoA<<", lado B "<<triangulo[0].pontoB<<", lado C "
        <<triangulo[0].pontoC<<" é Equilátero"<<endl;
        
    }else if(verificaTriangulos(triangulo[0].pontoA, triangulo[0].pontoB, triangulo[0].pontoC)==2){
        cout<<"O 1º triângulo, que tem os valores de lado A "<<triangulo[0].pontoA<<", lado B "<<triangulo[0].pontoB<<", lado C "
        <<triangulo[0].pontoC<<" é Escaleno"<<endl;
        
    }else if(verificaTriangulos(triangulo[0].pontoA, triangulo[0].pontoB, triangulo[0].pontoC)==3){
        cout<<"O 1º triângulo, que tem os valores de lado A "<<triangulo[0].pontoA<<", lado B "<<triangulo[0].pontoB<<", lado C "
        <<triangulo[0].pontoC<<" é Isósceles"<<endl;
    }
    
    cout<<endl;
    cout<<"Verificando o 2º triangulo:"<<endl;
    
    if(verificaTriangulos(triangulo[1].pontoA, triangulo[1].pontoB, triangulo[1].pontoC)==1){
        cout<<"O 1º triângulo, que tem os valores de lado A "<<triangulo[1].pontoA<<", lado B "<<triangulo[1].pontoB<<", lado C "
        <<triangulo[1].pontoC<<" é Equilátero"<<endl;
        
    }else if(verificaTriangulos(triangulo[1].pontoA, triangulo[1].pontoB, triangulo[1].pontoC)==2){
        cout<<"O 1º triângulo, que tem os valores de lado A "<<triangulo[1].pontoA<<", lado B "<<triangulo[1].pontoB<<", lado C "
        <<triangulo[1].pontoC<<" é Escaleno"<<endl;
        
    }else if(verificaTriangulos(triangulo[1].pontoA, triangulo[1].pontoB, triangulo[1].pontoC)==3){
        cout<<"O 1º triângulo, que tem os valores de lado A "<<triangulo[1].pontoA<<", lado B "<<triangulo[1].pontoB<<", lado C "
        <<triangulo[1].pontoC<<" é Isósceles"<<endl;
    }

    
    return 0;
}
