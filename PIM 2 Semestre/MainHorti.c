/*
PROJETO IINTEGRADO MULTIDISCIPLINAR UNIP - MARQUÊS
ADS 2° SEMESTRE - SISTEMA DE MODERNIZAÇÃO DE UM SISTEMA DE HORTIFRUTI
GRUPO : G870344 - ANDRÉ LUIZ PEREIRA DA COSTA
        F358887 - ARNALDO ANTÔNIO LEHMANN NETO
        R0522F0 - GABRIEL AUGUSTO MUNIZ LARANGEIRA
        G991168 - GUILHERME JÚLIO RIBEIRO MÜLLER
        G812FC3 - LUCAS HENRIQUE SILVA
        F3586A3 - PEDRO JOSÉ DA SILVA BRISQUE
*/

#include <stdio.h>                              
#include <stdlib.h>                             
#include <string.h>                             
#include <locale.h>

int main (void) {
    setlocale(LC_ALL, "Portuguese");            
    char login[50], loginGerente[10] = "Gerente", loginAtendente[10] = "Atendente"; 
    int password,formaVenda;

    printf("------HORTIFRUTI------ \n");
    printf("--------ENTRAR-------- \n\n");

    printf("Insira o seu login: \n");
    scanf_s("%49[^\n]s", login);
    fflush(stdin);
    
    if (strcmp(login, loginGerente) == 0 || strcmp(login, loginAtendente) == 0) {
        printf("Deu certo \n");
    }
    else {
        printf("Deu errado \n");
    }
    /*
    printf ("Insira a sua senha: \n");
    scanf_s("%d", &password);

    if (login == loginGerente && password == 1) {
        printf("Bem vindo gerente, escolha a operação\n");
    }
    else {
        printf("Bem vindo atendente, escolha a operação\n");
    }

    /*
    if (login == 1 && password == 1) {
        printf("Insira a forma de venda: \n");
        scanf_s("%d", &formaVenda);

        if (formaVenda = 1) {
            float valor, pagamento, total, troco, qtd;

            printf("Valor do produto: \n");
            scanf_s("%f", &valor);
            printf("Quantidade: \n");
            scanf_s("%f", &qtd);
            printf("Pagamento recebido: \n");
            scanf_s("%f", &pagamento);

            total = valor * qtd;
            printf("Total: %f \n", &total);

            if (pagamento < valor * qtd) {
                printf("Compra recusada \n");
            }
            else {
                troco = pagamento - valor * qtd;
                printf("Troco: %f \n", &troco);
            }
        }
        else {
            float valorkg, peso, pagamentokg;

            printf("Valor do produto por quilo: \n");
            scanf_s("%f", &valorkg);
            printf("Peso: \n");
            scanf_s("%f", &peso);
            printf("Pagamento recebido: \n");
            scanf_s("%f", &pagamentokg);

            printf("Total: \n", valorkg * peso);

            if (pagamentokg < valorkg * peso) {
                printf("Compra recusada \n");
            }
            else {
                printf("Troco: \n", pagamentokg - valorkg * peso);
            }
        }
    }
    else {
        printf("Permisao não concedida \n");
    }
    */

    system ("pause");
    return 0;
}