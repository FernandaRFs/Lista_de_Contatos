#include "ListadeContatos.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define TAM 31


void inicializar(Contatos tabela[]){
    int i;
    for ( i = 0; i < TAM; i++)
    {
        tabela[i].tell = 0;
    }
}

int hash(int chave){
    return chave%TAM;
}
