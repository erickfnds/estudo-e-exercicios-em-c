/*
 * Arquivo: sistema-login.c
 * EF
 * Data: 21/07/2026
 * Descricao: Sistema de autenticacao com limite de tentativas e bloqueio temporizado via Sleep().
 */




#include <stdio.h>
#include <string.h>
#include <windows.h>

int main()
{

    char usuario[50] = "abcd\n", email[50] = "abcd@efgh.com\n", senha[50] = "123abc\n";
    char email_digitado[50], usuario_digitado[50], senha_digitada[50];
    int max_tentativas = 3;
    int acertou = 0;
    int bloqueio_ativo = 1;
   
printf("Credenciais para teste:\n");
printf("Email: abcd@efgh.com\n");
printf("Usuario: abcd\n");
printf("Senha: 123abc\n");
  
  while (acertou == 0)
    {
        for (int i = 1; i <= max_tentativas; i++)
        {

            printf("\nBom dia, sr. para fazer o login necessita do email, nome do usuario e a senha..\n");
            printf("\nDigite o seu endereco de email:\n ");
            fgets(email_digitado, sizeof(email_digitado), stdin);
            printf(" Digite seu usuario:\n");
            fgets(usuario_digitado, sizeof(usuario_digitado), stdin);
            printf(" agora digite a senha:\n");
            fgets(senha_digitada, sizeof(senha_digitada), stdin);

            if (strcmp(email_digitado, email) == 0 &&
                strcmp(usuario_digitado, usuario) == 0 &&
                strcmp(senha_digitada, senha) == 0)

            {
                printf(" Email, Usuario e senha corretos. pode prosseguir...\n");
                acertou = 1;
                break;
            }
            else
            {
                printf("\nAlgo esta incorreto, Tentativa %d de %d\n", i, max_tentativas);
            }
        }
        if (acertou == 0)
        {
            printf(" acabaram suas tentativas\n");
            if (bloqueio_ativo == 1)  //interruptor 
            {
                printf("\nAcesso bloqueado por seguranca\n");
                printf("Aguarde 30 segundos, para que possa fazer uma nova tentativa...\n");

                Sleep(30000);

                printf("\nTempo encerrado Voce ja pode tentar de novo.\n");
            }

            
        }
    }
    return 0;
}
