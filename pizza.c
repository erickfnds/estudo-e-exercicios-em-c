/*
 * Projeto: Atendimento de Pizzaria
 * Linguagem: C
 * daata de criação: 17/07/2026
 * 
 */








#include <stdio.h>
#include <string.h> 

int main() {
    char escolha [100], pizza , bebida[100], cardapio [100] = "1"; 
    
    float marguerita = 52.00, calabresa = 40.00, qqueijos = 45, portuguesa = 60.00;
    float coca = 16.00, guarana = 14.00, pepsi = 16.00, vinho = 32.00, cerveja = 10.00;
    float valor_pizza = 0.00;   
    float valor_bebida = 0.00;  
    float valor_total = 0.00; 
    char formadepagamento[100], aproximacao[100];
    float valor_pago = 0.00;
    float troco = 0.00;
    int senha;

    printf(" bem vindo a nossa pizzaria.     Digite [1] para acessar o nosso cardapio.\n ");
    fgets(cardapio, sizeof(cardapio), stdin);
    
    if(strstr(cardapio, "1") != NULL){
        printf(" Aqui esta o cardapio ");
        printf(" Marguerita R$ 52.00,  Calabresa R$ 40.00, 4 queijos R$ 45.00, Portuguesa R$60.00\n");
        printf(" Qual voce escolhe ? ");
    }

    fgets(escolha, sizeof(escolha), stdin);
        
    if(strstr(escolha, "marguerita") != NULL) {
        printf(" Aqui esta a sua pizza de Marguerita\n");
        valor_pizza = marguerita;
    }
    else if(strstr(escolha, "calabresa") != NULL) {
        printf(" Aqui esta a sua pizza de Calabresa\n");
        valor_pizza = calabresa;
    }
    else if(strstr(escolha, "4 queijos") != NULL) {
        printf(" Aqui esta a sua pizza de 4 queijos\n");
        valor_pizza = qqueijos;
    }
    else if(strstr(escolha, "portuguesa") != NULL) {
        printf(" Aqui esta a sua pizza de Portuguesa\n");
        valor_pizza = portuguesa;
    }
    else {
        printf(" Desculpe, nao temos essa pizza no cardapio.\n");
    }

    printf(" o Sr(a) gostaria de alguma coisa pra beber?\n Temos Coca-cola R$16.00 , Guarana Antartica R$ 14.00, Pepsi R$16.00 , Vinho R$32.00 e Cerveja R$10.00 ");
    fgets(bebida, sizeof(bebida), stdin);

    if(strstr(bebida, "coca")!= NULL){
        printf(" aqui esta a sua coca\n");
        valor_bebida = coca;
    }
    else if(strstr(bebida,"guarana")!= NULL){
        printf(" aqui esta o seu guarana\n");
        valor_bebida = guarana;
    }
    else if(strstr(bebida,"pepsi")!= NULL){
        printf(" aqui esta a sua pepsi\n");
        valor_bebida = pepsi;
    }
    else if(strstr(bebida,"vinho")!= NULL){
        printf(" aqui esta o sua vinho\n");
        valor_bebida = vinho;
    }
    else if(strstr(bebida,"cerveja")!= NULL){
        printf(" aqui esta a sua cerveja\n");
        valor_bebida = cerveja;
    }
    
    printf(" aqui esta o valor total %.1f\n\n Qual sera a forma de pagamento ?\n", valor_total = valor_pizza + valor_bebida);

    printf(" qual vai ser a forma de pagamento ? dinheiro ou cartao?\n ");
    fgets(formadepagamento, sizeof(formadepagamento), stdin);

    if(strstr(formadepagamento, "dinheiro")!= NULL){
        printf(" com quanto de dinheiro voce vai pagar R$ ? \n");
        scanf("%f", &valor_pago);
        while(getchar() != '\n');

        troco = valor_pago - valor_total;
        printf("Seu troco e R$ %.2f. Obrigado!\n", troco);
    }
    else if(strstr(formadepagamento, "cartao")!= NULL){
        fflush(stdin);

        printf(" tem aproximacao ? ");
        fgets(aproximacao,sizeof(aproximacao),stdin);
        
        if (strstr(aproximacao, "sim")!= NULL){
            printf(" Processando ...");
            printf("BIP");
            printf(" quer a sua via ? ");
        }
        else if (strstr(aproximacao, "nao")!= NULL){
            printf(" Por favor, insira o cartao e digite a senha de 4 digitos.\n");
            scanf("%d", &senha);
            while(getchar() != '\n');

            if (senha >= 1000 && senha <= 9999){
                printf(" Processando ...\n");
                printf(" BIP!\n");
                printf(" Pagamento Autorizado!\n");
                printf(" Quer a sua via ?\n");   
            }
            else {
                printf(" Senha incorreta! Precisa ter 4 digitos.\n");
            }
        } 
    } 
    return 0;
}
