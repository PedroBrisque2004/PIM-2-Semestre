/*
PROJETO IINTEGRADO MULTIDISCIPLINAR UNIP - MARQU�S
ADS 2� SEMESTRE - SISTEMA DE MODERNIZA��O DE UM SISTEMA DE HORTIFRUTI
GRUPO : 0000000 - ANDR� LUIZ
        0000000 - ARNALDO LEHMANN
        0000000 - GUILHERME M�LLER
        0000000 - LUCAS HENRIQUE
        0000000 - MUNIZ
        F3586A3 - PEDRO JOS� DA SILVA BRISQUE
*/

//#include <mysql.h>
#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int password, senhaReg = 'S', login, loginReg = 1, formaVenda;
    //int valor = 0, pagamento = 0, qtd = 0;
    //float valorkg = 0.0, peso = 0.0, pagamentokg = 0.0;

    printf ("Insira o seu login: \n");
    scanf_s("%d", &login);

    printf("Insira a sua senha: \n");
    scanf_s("%d", &password);

    if ((login = loginReg) && (password = senhaReg)) {
        printf("Bem vindo funcionario, escolha a forma de venda:  \nCodigo do produto - Digite 1\nPesagem - Digite 0\n");
        scanf_s("%d", &formaVenda);

        if (formaVenda = 1) {
            int valor, pagamento, qtd;

            printf("Valor do produto: \n");
            scanf_s("%d", &valor);
            printf("Quantidade: \n");
            scanf_s("%d", &qtd);
            printf("Pagamento recebido: \n");
            scanf_s("%d", &pagamento);

            printf("Total: \n", valor * qtd);

            if (pagamento < valor * qtd) {
                printf("Compra recusada \n");
            }
            else {
                printf("Troco: \n", pagamento - valor * qtd);
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
        printf("Permisao n�o concedida \n");
    }

    system ("pause");
    return 0;
}