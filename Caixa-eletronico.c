/*
 * Projeto: Sistema de Caixa Eletrônico em C
 * Erikf / GitHub
 * Criado em: 25/07/2026
 * Descrição: Sistema interativo com autenticação de usuários, depósito e saque.
 */




#include <stdio.h>
#include <string.h>


struct Usuario
{
    char username[50];
    char senha[50];
    float saldo;
};

int main()
{

    struct Usuario usuarios[5] = {
        {"user1", "1234", 1000.0},
        {"user2", "12345", 2000.0},
        {"user3", "123456", 3000.0},
        {"user4", "1234567", 4000.0},
        {"user5", "12345678", 5000.0},
    };

    char digitar_username[50];
    char digitar_senha[50];
    float deposito = 0, saque = 0;
    int login_sucesso = 0;
    int painel = 0;
    int usuario_logado = -1;

    printf("Digite seu username\n");
    scanf(" %50s", digitar_username);
    printf("Digite sua senha\n");
    scanf(" %50s", digitar_senha);

    for (int i = 0; i < 5; i++)
    {
        if (strcmp(digitar_username, usuarios[i].username) == 0 && strcmp(digitar_senha, usuarios[i].senha) == 0)
        {

            login_sucesso = 1;
            usuario_logado = i;
            break;
        }
    }

    if (login_sucesso == 1)
    {
        printf("Bem vindo ao painel do caixa 24hrs. Escolha a baixa a opcao q deseja\n");
        do
        {

            printf("[1] - Ver saldo\n");
            printf("[2] - Fazer deposito\n");
            printf("[3] - Fazer saque\n");
            printf("[0] - Sair\n");
            scanf(" %d", &painel);

            switch (painel)
            {
            case 1:
                printf("esse e seu saldo atual R$ %.2f.\n\n", usuarios[usuario_logado].saldo);
                break;

            case 2:
                printf(" Digite o quanto voce vai depositar.\n");
                scanf(" %f", &deposito);
                if (deposito > 0)
                {
                    usuarios[usuario_logado].saldo += deposito;

                    printf(" Voce depositou R$ %.2f seu saldo atual e R$ %.2f\n\n", deposito, usuarios[usuario_logado].saldo);
                }
                else
                {
                    printf("valor invalido.\n\n");
                }
                break;

            case 3:
                printf(" Digite o valor a ser sacado.\n");
                scanf(" %f", &saque);
                if (saque > 0 && saque <= usuarios[usuario_logado].saldo)
                {

                    usuarios[usuario_logado].saldo -= saque;
                    printf("\n voce sacou R$ %.2f, seu novo saldo e R$%.2f\n", saque, usuarios[usuario_logado].saldo);
                }

                else
                {
                    printf(" Valor invalido\n");
                }
                break;
            case 0:
                printf("\nVoce saiu do sistema.\n");
                break;

            default:
                printf("\n Opcao nao encontrada.\n");
            }
        } while (painel != 0);
    }
    else
    {
        printf("\n Username ou senha errado.\n");
    }

    return 0;
}
