/*6) A Microsoft está contratando funcionários para realizarem testes no gerenciador de memória do seu novo 
computador. Seu programa deverá ler 5 números inteiros, 5 números decimais, 5 letras, armazená-las em uma 
única struct contendo vetor de inteiro, vetor de decimais e vetor de char. Então, através de ponteiros, trocar os 
seus valores, substituindo todos os números inteiros pelo número 100, os decimais por 1.99, e as letras por ’W’. 
Depois da substituição, o programa deverá exibir o valor das variáveis já devidamente atualizadas.*/

#include <iostream>
#include <locale>
#include <string.h>

using namespace std;

struct valores{
    int numInt;
    float numFloat;
    char letra;
} Valores[5];

void troca_int(int *ptr1, int *ptr2, int *ptr3, int *ptr4, int *ptr5){
    
    *ptr1 = 100;
    *ptr2 = 100;
    *ptr3 = 100;
    *ptr4 = 100;
    *ptr5 = 100;
    
}

void troca_float(float *ptr1, float *ptr2, float *ptr3, float *ptr4, float *ptr5){
    
    *ptr1 = 1.99;
    *ptr2 = 1.99;
    *ptr3 = 1.99;
    *ptr4 = 1.99;
    *ptr5 = 1.99;
    
}

void troca_letra(char *ptr1, char *ptr2, char *ptr3, char *ptr4, char *ptr5){
    
    *ptr1 = 'W';
    *ptr2 = 'W';
    *ptr3 = 'W';
    *ptr4 = 'W';
    *ptr5 = 'W';
    
}


int main(){
    setlocale(LC_ALL, "");
    
    int *pontInt1 = NULL, *pontInt2 = NULL, *pontInt3 = NULL, *pontInt4 = NULL, *pontInt5 = NULL;
    float *pontFloat1 = NULL, *pontFloat2, *pontFloat3 = NULL, *pontFloat4 = NULL, *pontFloat5 = NULL;
    char *ptrChar1 = NULL, *ptrChar2 = NULL, *ptrChar3 = NULL, *ptrChar4 = NULL, *ptrChar5 = NULL;
    
    for(int i=0; i<5; i++){
        cout<<"Digite o "<<i+1<<"º valor inteiro"<<endl;
        cin>>Valores[i].numInt;
    }
    
    pontInt1 = &Valores[0].numInt;
    pontInt2 = &Valores[1].numInt;
    pontInt3 = &Valores[2].numInt;
    pontInt4 = &Valores[3].numInt;
    pontInt5 = &Valores[4].numInt;
    
    pontFloat1 = &Valores[0].numFloat;
    pontFloat2 = &Valores[1].numFloat;
    pontFloat3 = &Valores[2].numFloat;
    pontFloat4 = &Valores[3].numFloat;
    pontFloat5 = &Valores[4].numFloat;
    
    ptrChar1 = &Valores[0].letra;
    ptrChar2 = &Valores[1].letra;
    ptrChar3 = &Valores[2].letra;
    ptrChar4 = &Valores[3].letra;
    ptrChar5 = &Valores[4].letra;
    
    
    for(int i=0; i<5; i++){
        cout<<"Digite o "<<i+1<<"º valor float"<<endl;
        cin>>Valores[i].numFloat;
    }
    
    for(int i=0; i<5; i++){
        cout<<"Digite a "<<i+1<<"º letra"<<endl;
        cin>>Valores[i].letra;
    }
    
    cout<<"Os valores inteiros antes da troca eram:"<<endl;
    for(int i=0; i<5; i++){
        cout<<i+1<<"º numero: "<<Valores[i].numInt<<endl;
    }
    
    troca_int(pontInt1, pontInt2, pontInt3, pontInt4, pontInt5);
    cout<<endl;
    
    cout<<"Os valores inteiros após a troca são:"<<endl;
    for(int i=0; i<5; i++){
        cout<<i+1<<"º numero "<<Valores[i].numInt<<endl;
    }
    
    cout<<"==="<<endl;
    
    cout<<"Os valores float antes da troca eram:"<<endl;
    for(int i=0; i<5; i++){
        cout<<i+1<<"º numero: "<<Valores[i].numFloat<<endl;
    }
    
    troca_float(pontFloat1, pontFloat2, pontFloat3 , pontFloat4, pontFloat5 );
    cout<<endl;
    
    cout<<"Os valores float após a troca são:"<<endl;
    for(int i=0; i<5; i++){
        cout<<i+1<<"º numero "<<Valores[i].numFloat<<endl;
    }

    cout<<"==="<<endl;
    
    cout<<"As letra santes da troca eram:"<<endl;
    for(int i=0; i<5; i++){
        cout<<i+1<<"º numero: "<<Valores[i].letra<<endl;
    }
    
    troca_letra(ptrChar1, ptrChar2, ptrChar3, ptrChar4, ptrChar5);
    cout<<endl;
    cout<<"As letras após a troca são:"<<endl;
    for(int i=0; i<5; i++){
        cout<<i+1<<"º numero "<<Valores[i].letra<<endl;
    }

    return 0;
}
