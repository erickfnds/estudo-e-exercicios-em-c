#include <stdio.h>
#include <string.h>
int main()
{

    char tamanho[50] = "", tamanhor[50] = "";
    int cardapio = -1;
    int valor_final = 0, quentinhag = 22, quentinhap = 18;

    printf(" Bem vindo ao restaurante Nosso lar\n aqui esta nosso cardapio\n");
    printf("[1] - Frango com quiabo\n");
    printf("[2] - frango parmegiana\n");
    printf("[3] - carne assada\n");
    printf("[4] - strogonoff\n");
    printf("[5] - bife com fritas\n");
    printf("Todas acompanham arroz, feijao, macarrao e farofa. para escolher digite o numero do prato selecionado.\n");
    scanf(" %d", &cardapio);
    printf("\n qual vai ser o tamanho? temos da pequena e da grande\n");
    scanf(" %s", tamanho);

    switch (cardapio)
    {
    case 1:
        if (strstr(tamanho, "grande") != NULL)
        {

            printf("\n Aqui esta seu frango com quiabo tamanho grande\n");

            valor_final += quentinhag;
        }
        else if (strstr(tamanho, "pequena") != NULL)
        {
            printf("\nAqui esta seu frango com quiabo tamanho pequena\n");
            valor_final += quentinhap;
        }
        break;

    case 2:
        if (strstr(tamanho, "grande") != NULL)
        {

            printf("\n Aqui esta seu frango parmegiana grande\n");
            valor_final += quentinhag;
        }
        else if (strstr(tamanho, "pequena") != NULL)
        {
            printf("\nAqui esta seu frango parmegiana tamanho pequena\n");
            valor_final += quentinhap;
        }
        break;
    case 3:
        if (strstr(tamanho, "grande") != NULL)
        {

            printf("\n Aqui esta sua carne assada grande\n");
            valor_final += quentinhag;
        }
        else if (strstr(tamanho, "pequena") != NULL)
        {
            printf("\nAqui esta sua carne assada tamanho pequena\n");
            valor_final += quentinhap;
        }
        break;
    case 4:
        if (strstr(tamanho, "grande") != NULL)
        {

            printf("\n Aqui esta seu strogonoff grande\n");
            valor_final += quentinhag;
        }
        else if (strstr(tamanho, "pequena") != NULL)
        {
            printf("\nAqui esta seu estrogonoff tamanho pequeno\n");
            valor_final += quentinhap;
        }
        break;
    case 5:
        if (strstr(tamanho, "grande") != NULL)
        {

            printf("\n Aqui esta seu bife com fritas tamanho grande\n");
            valor_final += quentinhag;
        }
        else if (strstr(tamanho, "pequena") != NULL)
        {
            printf("\nAqui esta seu bife com fritas tamanho pequeno\n");
            valor_final += quentinhap;
        }
        break;
    default:
        printf("\nnao temos essa opçao no cardapio\n");
        break;
    }

    int bebidas = -1, bebidal = 6, bebida2 = 14;

    printf("\n tambem temos bebidas\n ");
    printf("[1] - Coca cola\n");
    printf("[2] - Fanta uva\n");
    printf("[3] - Fanta laranja\n");
    printf("[4] - Pepsi\n");
    printf("[5] - Guarana antartica\n");
    printf("\n Qual opcao voce deseja?\n");
    scanf("%d", &bebidas);
    printf("\n qual vai ser o tamanho? temos lata e 2L\n");
    scanf(" %s", tamanhor);

    switch (bebidas)
    {
    case 1:
        if (strstr(tamanhor, "lata") != NULL)
        {
            printf(" aqui esta sua coca cola em lata");
            valor_final += bebidal;
        }
        else if (strstr(tamanhor, "2L") != NULL || strstr(tamanhor, "dois litros") != NULL || strstr(tamanhor, "2l") != NULL)
        {
            printf(" aqui esta sua coca de 2L");
            valor_final += bebida2;
        }
        break;
    case 2:
        if (strstr(tamanhor, "lata") != NULL)
        {
            printf(" aqui esta sua fanta uva lata");
            valor_final += bebidal;
        }
        else if (strstr(tamanhor, "2L") != NULL || strstr(tamanhor, "dois litros") != NULL || strstr(tamanhor, "2l") != NULL)
        {
            printf(" aqui esta sua fanta uva de 2L");
            valor_final += bebida2;
        }
        break;
    case 3:
        if (strstr(tamanhor, "lata") != NULL)
        {
            printf(" aqui esta sua fanta laranja lata");
            valor_final += bebidal;
        }
        else if (strstr(tamanhor, "2L") != NULL || strstr(tamanhor, "dois litros") != NULL || strstr(tamanhor, "2l") != NULL)
        {
            printf(" aqui esta sua fanta laranja de 2L");
            valor_final += bebida2;
        }
        break;
    case 4:
        if (strstr(tamanhor, "lata") != NULL)
        {
            printf(" aqui esta sua pepsi lata");
            valor_final += bebidal;
        }
        else if (strstr(tamanhor, "2L") != NULL || strstr(tamanhor, "dois litros") != NULL || strstr(tamanhor, "2l") != NULL)
        {
            printf(" aqui esta sua pepsi de 2L");
            valor_final += bebida2;
        }
        break;
    case 5:
        if (strstr(tamanhor, "lata") != NULL)
        {
            printf(" aqui esta seu guarana antartica lata");
            valor_final += bebidal;
        }
        else if (strstr(tamanhor, "2L") != NULL || strstr(tamanhor, "dois litros") != NULL || strstr(tamanhor, "2l") != NULL)
        {
            printf(" aqui esta seu guarana antartica de 2L");
            valor_final += bebida2;
        }
        break;
    default:
        printf("nao temos essa opcao");
        break;
    }

    printf("\nO valor final deu: R$ %d\n\n", valor_final);

    int formad_pagamento;

    printf("Qual vai ser a forma de pagamento?\n");
    printf("[1] Dinheiro\n");
    printf("[2] Cartao?\n");
    scanf(" %d", &formad_pagamento);

    if (formad_pagamento == 1)
    {

        int dinheiro, troco;

        printf("\n digite o valor de dinheiro entregue\n");
        scanf(" %d", &dinheiro);
        if (dinheiro >= valor_final)
        {
            troco = dinheiro - valor_final;
            printf("\n aqui esta seu troco %d", troco);
        }
        else
        {
            printf(" valor insuficiente.");
        }
    }
    else if (formad_pagamento == 2)
    {
        printf("\nPagamento no cartao aprovado com sucesso!\n");
    }

    else
    {
        printf("\nforma de pagamento invalida\n\n");
    }

    return 0;
}
