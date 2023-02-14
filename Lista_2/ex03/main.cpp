/*3) Escreva um programa que calcule a distância entre dois pontos no plano cartesiano. Cada ponto é um 
par (x,y) de reais (double). Escreva uma estrutura para armazenar cada ponto. O cálculo da distância 
deverá ser feita em uma função separada que vai receber os dois pontos (na forma de struct), fazer o 
cálculo e retornar o resultado para ser exibido na main*/

#include<iostream>
#include <math.h>
#include <locale>

#define qntdPontos 2

using namespace std;

struct pontos{
    int x1, y1, x2, y2;
} pontos[qntdPontos];

float calculaDistancia(int x1, int y1, int x2, int y2) {
    return sqrt( pow(x2-x1,2) + pow(y2-y1, 2) );
}

int main() {
    setlocale (LC_ALL, "");
    float distancia=0;
    
    cout<<"Digite as coordenadas do primeiro ponto:"<<endl;
    cout<<"X1: ";
    cin>>pontos[0].x1;
    cout<<"Y1: ";
    cin>>pontos[0].y1;
    
    cout<<"Digite as coordenadas do segundo ponto:"<<endl;
    cout<<"X2: ";
    cin>>pontos[1].x2;
    cout<<"Y2 ";
    cin>>pontos[1].y2;
    

    distancia = calculaDistancia(pontos[0].x1, pontos[0].y1, pontos[1].x2, pontos[1].y2);

    cout<<"A distância é: "<<distancia<<endl;
    return 0;
}
