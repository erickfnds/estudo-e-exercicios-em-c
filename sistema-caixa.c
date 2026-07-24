#include <stdio.h>
#include <string.h>
int main()
{

    float saldo = 500, deposito = 0, saque = 0;
    int opcao;
    float novo_saldo = 0;
    do
    {
        printf(" bem vindo ao caixa eletronico.\n");
        printf(" Escolha a opcao desejada.\n");
        printf("[1] - Saldo\n");
        printf("[2] - Deposito\n");
        printf("[3] - Sacar\n");
        printf("[0] - Sair\n\n");
        scanf(" %d", &opcao);

        switch (opcao)
        {
        case 1:
            printf(" \nesse e seu saldo atual %.2f\n", saldo);
            break;

        case 2:
            printf(" \nDigite o quanto voce quer depositar \n");
            scanf(" %f", &deposito);
            if(deposito > 0){


            novo_saldo = deposito + saldo;
            saldo += deposito;

            printf(" \nvoce depositou RS%.2f e seu novo saldo e RS%.2f\n\n", deposito, novo_saldo);
        }
            break;

        case 3:

            printf(" \nDigite o valor a ser sacado\n");
            scanf(" %f", &saque);
           if (saque > 0 && saque <= saldo)
            {

                novo_saldo = saldo - saque;
                saldo -= saque;
                printf("\n voce sacou R$ %.2f, seu novo saldo e R$%.2f\n", saque, novo_saldo);
            }
            else
            {
                printf(" Valor invalido\n");
            }
            break;

        case 0:
            printf("\n Voce saiu do painel.\n");
            break;

        default:
            printf(" \nopcao invalida. tente novamente\n");
            break;
        }
    } while (opcao != 0);

    return 0;
}
