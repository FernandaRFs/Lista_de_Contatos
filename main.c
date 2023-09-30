#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"ListadeContatos.c"

#define TAM 31



int main(void)
{
    int menu=1, opcao;
    Contatos *dados, tabela[TAM];
    inicializar(tabela);
    printf("Primeira vez usando o nosso programa:\n1 - sim\n2 - nao\n");
    scanf("%d", &opcao);
    if (opcao == 1)
    {
        printf("\n");
    }else if (opcao == 2)
    {
        lerarquivo(tabela);
    }
    
    while (menu!=0)
    {
        printf("Seja Bem-vindo(a) ao nosso programa de contatos\nSelecione a opcao que deseja:\n1 - Criar Contato\n2 - Buscar Contato\n3 - Listar Contatos\n4 - Apagar Contato\n0 - Sair\n");
        scanf("%d", &menu);
        switch (menu)
        {
        case 0:
            Arquivar(tabela);
            printf("Ate mais...");
            break;
        case 1:
            CriarContato(tabela);
            break;
        case 2:
            dados = Buscar(tabela);
            if (dados)
            {
                printf("\tNumero encontrado\n");
                imprimircontato(*dados);
            }else{
                printf("Numero nao encontrado\n");
            }
            break;
        case 3:
            Listar(tabela);
            break;
        case 4:
            DeletarNumero(tabela);
            printf("Numero Deletado\n");
            break;
        default:
        printf("Opcao invalida\n");
        break;
        }
    }
    return 0;
}