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

Contatos lercontato(){
    Contatos p;
    printf("Nome: ");
    scanf(" %[^\n]s", p.nome);
    printf("Numero: ");
    scanf("%d", &p.tell);
    printf("Email: ");
    scanf(" %[^\n]s", p.email);
    return p;
}


void CriarContato(Contatos tabela[]){
    Contatos p = lercontato();
    int id = hash(p.tell);
    while (tabela[id].tell != 0)
    {
        id = hash(id + 1);
    }
    tabela[id]=p;
}


Contatos *Buscar(Contatos tabela[]){
    int valor;
    printf("Digite o numero: ");
    scanf("%d", &valor);
    int id = hash(valor);
    printf("Indice Geardo: %d\n", id);
    while(tabela[id].tell != 0)
    {
        if(tabela[id].tell == valor){
            return &tabela[id];
        }else{
            id = hash(id+1);
        }
    }
    return NULL;
}

void DeletarNumero(Contatos tabela[]){
    int valor;
    printf("Digite o numero que deseja deletar: ");
    scanf("%d", &valor);
    int id = hash(valor);
    printf("Indice %d\n", id);
    while(tabela[id].tell != 0){
        if (tabela[id].tell == valor)
        {
           strcpy(tabela[id].email, "");
           strcpy(tabela[id].nome, "");
           tabela[id].tell = 0;
        }else if(tabela[id].tell != valor){
            printf("Numero nao encontrado\n");
        }
    }

}

