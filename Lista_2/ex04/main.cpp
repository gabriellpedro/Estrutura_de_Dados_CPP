/*Escreva uma fun��o que receba seis pontos, preenchidos 
pelo usu�rio. Os tr�s primeiros pontos formam um tri�ngulo e os outros tr�s formam outro tri�ngulo. 
Comparando os dois tri�ngulos, classifique se s�o is�sceles, equil�teros e escalenos. */

#include <iostream>
#include <locale>

#define qtndTriangulos 2

struct pontos{
    int pontoA, pontoB, pontoC;
} triangulo[qtndTriangulos];

using namespace std;

int verificaTriangulos(int a, int b, int c){
    if((a==b) && (b==c)){
        return 1; // Equil�tero
    }else if( (a!=b) && (a!=c) && (b!=c) ){
        return 2; // Escaleno
    }else{
        return 3; // Is�sceles
    }
}

int main(){
    setlocale (LC_ALL, "");
    int triangulo1=0, triangulo2=0;
    
    for(int i=0; i<qtndTriangulos; i++){
        cout<<"Insira o "<<1<<"� lado do "<<i+1<<"� triangulo"<<endl;
        cin>>triangulo[i].pontoA;
        cout<<"Insira o "<<2<<"� lado do "<<i+1<<"� triangulo"<<endl;
        cin>>triangulo[i].pontoB;
        cout<<"Insira o "<<3<<"� lado do "<<i+1<<"� triangulo"<<endl;
        cin>>triangulo[i].pontoC;
    }
    
    cout<<"Verificando o 1� tri�ngulo:"<<endl;
    
    if(verificaTriangulos(triangulo[0].pontoA, triangulo[0].pontoB, triangulo[0].pontoC)==1){
        cout<<"O 1� tri�ngulo, que tem os valores de lado A "<<triangulo[0].pontoA<<", lado B "<<triangulo[0].pontoB<<", lado C "
        <<triangulo[0].pontoC<<" � Equil�tero"<<endl;
        
    }else if(verificaTriangulos(triangulo[0].pontoA, triangulo[0].pontoB, triangulo[0].pontoC)==2){
        cout<<"O 1� tri�ngulo, que tem os valores de lado A "<<triangulo[0].pontoA<<", lado B "<<triangulo[0].pontoB<<", lado C "
        <<triangulo[0].pontoC<<" � Escaleno"<<endl;
        
    }else if(verificaTriangulos(triangulo[0].pontoA, triangulo[0].pontoB, triangulo[0].pontoC)==3){
        cout<<"O 1� tri�ngulo, que tem os valores de lado A "<<triangulo[0].pontoA<<", lado B "<<triangulo[0].pontoB<<", lado C "
        <<triangulo[0].pontoC<<" � Is�sceles"<<endl;
    }
    
    cout<<endl;
    cout<<"Verificando o 2� triangulo:"<<endl;
    
    if(verificaTriangulos(triangulo[1].pontoA, triangulo[1].pontoB, triangulo[1].pontoC)==1){
        cout<<"O 1� tri�ngulo, que tem os valores de lado A "<<triangulo[1].pontoA<<", lado B "<<triangulo[1].pontoB<<", lado C "
        <<triangulo[1].pontoC<<" � Equil�tero"<<endl;
        
    }else if(verificaTriangulos(triangulo[1].pontoA, triangulo[1].pontoB, triangulo[1].pontoC)==2){
        cout<<"O 1� tri�ngulo, que tem os valores de lado A "<<triangulo[1].pontoA<<", lado B "<<triangulo[1].pontoB<<", lado C "
        <<triangulo[1].pontoC<<" � Escaleno"<<endl;
        
    }else if(verificaTriangulos(triangulo[1].pontoA, triangulo[1].pontoB, triangulo[1].pontoC)==3){
        cout<<"O 1� tri�ngulo, que tem os valores de lado A "<<triangulo[1].pontoA<<", lado B "<<triangulo[1].pontoB<<", lado C "
        <<triangulo[1].pontoC<<" � Is�sceles"<<endl;
    }

    
    return 0;
}
