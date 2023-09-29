#ifndef LISTADECONTATOS_H_INCLUDED
#define LISTADECONTATOS_H_INCLUDED

typedef struct{
    int tell;
    char nome[50];
    char email[50];
}Contatos;

void inicializar(Contatos tabela[]);

int hash(int chave);

Contatos lercontato();

void CriarContato(Contatos tabela[]);

Contatos *Buscar(Contatos tabela[]);

void DeletarNumero(Contatos tabela[]);

void imprimircontato(Contatos pessoa);

void Listar(Contatos tabela[]);

void Arquivar(Contatos tabela[]);

void lerarquivo(Contatos tabela[]);

#endif