/*Use strcat para concatenar os nomes.Crie a função: void exibir (char arr, int tamanho);
Escreva o conteúdo da função exibir, 
sabendo que ela deve percorrer o array denomes e printar o array inteiro utilizando ponteiro.*/

#include <iostream>
#include <string.h>

using namespace std;

void exibir (char n1[], char n2[], char n3[], char n4[]){
    char *ponteiro1, *ponteiro2, *ponteiro3, *ponteiro4;
    
    ponteiro1 = n1;
    ponteiro2 = n2;
    ponteiro3 = n3;
    ponteiro4 = n4;
    
    strcat(ponteiro1, " | ");
    strcat(ponteiro1, ponteiro2);
    strcat(ponteiro1, " | ");
    strcat(ponteiro1, ponteiro3);
    strcat(ponteiro1, " | ");
    strcat(ponteiro1, ponteiro4);
    
    cout<<ponteiro1<<endl;
}

int main(){
    char nome1[20], nome2[20], nome3[20], nome4[20];
    
    strcpy(nome1, "Luis");
    strcpy(nome2, "Fernando");
    strcpy(nome3, "Vitoria");
    strcpy(nome4, "Leticia");
    
    exibir(nome1, nome2, nome3, nome4);
    
    cout<<exibir<<endl;
    
    return 0;
}
