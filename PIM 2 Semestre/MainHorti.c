/*
PROJETO IINTEGRADO MULTIDISCIPLINAR UNIP - MARQU�S
ADS 2� SEMESTRE - SISTEMA DE MODERNIZA��O DE UM SISTEMA DE HORTIFRUTI
GRUPO : G870344 - ANDR� LUIZ PEREIRA DA COSTA
        F358887 - ARNALDO ANT�NIO LEHMANN NETO
        R0522F0 - GABRIEL AUGUSTO MUNIZ LARANGEIRA
        G991168 - GUILHERME J�LIO RIBEIRO M�LLER
        G812FC3 - LUCAS HENRIQUE SILVA
        F3586A3 - PEDRO JOS� DA SILVA BRISQUE
*/

#include <stdio.h>                              
#include <stdlib.h>                             
#include <string.h>                             
#include <locale.h>

typedef struct {
    char *nomeProd; //nome precisa ser indicado como ponteiro no visual studio mas pode ser alterado como strcpy em outras IDE's
    int valorProd;
}Produto;

typedef struct {
    char* nomeProdkg; //nome precisa ser indicado como ponteiro no visual studio mas pode ser alterado como strcpy em outras IDE's
    int valorProdkg;
}Produtokg;

int codigoRet, statusMenu;

int main(void) {
    setlocale(LC_ALL, "Portuguese");
    char login[30], loginRegistrado[30] = "login";
    char senha[30], senhaRegistrada[30] = "senha";
    int status = 0;
    
    Produto item[10];
    // PRODUTOS VENDIDOS POR C�DIGO
    item[0].nomeProd = "LEITE";
    item[0].valorProd = 5;
    item[1].nomeProd = "OVOS";
    item[1].valorProd = 15;
    item[2].nomeProd = "FARDO DE CERVEJA";
    item[2].valorProd = 50;
    item[3].nomeProd = "SAB�O";
    item[3].valorProd = 6;
    item[4].nomeProd = "FARINHA";
    item[4].valorProd = 10;

    Produtokg itemkg[10];
    // PRODUTOS VENDIDOS POR PESO
    itemkg[0].nomeProdkg = "MUSSARELA";
    itemkg[0].valorProdkg = 40;
    itemkg[1].nomeProdkg = "CENOURA";
    itemkg[1].valorProdkg = 2;
    itemkg[2].nomeProdkg = "LINGUI�A";
    itemkg[2].valorProdkg = 35;
    itemkg[3].nomeProdkg = "FIL� DE FRANGO";
    itemkg[3].valorProdkg = 20;
    itemkg[4].nomeProdkg = "LIM�O";
    itemkg[4].valorProdkg = 10;

    do {
        system("cls");
        printf("------HORTIFRUTI------ \n");
        printf("--------ENTRAR-------- \n\n");
        status = 0;
        printf("INSIRA O SEU LOGIN: ");
        fflush(stdin);
        scanf_s("%s", login);
        if (strcmp(loginRegistrado, login)!=0){
            printf("LOGIN ERRADO!");
            status++;
        } else {
            printf("INSIRA A SUA SENHA: ");
            fflush(stdin);
            scanf_s("%s", senha);
            if (strcmp(senhaRegistrada, senha)!=0) {
                printf("SENHA ERRADA!");
                status++;
            } else {
                void menu();
            }
        }
    } while (status != 0);

    do {
        system("cls");
        int opcaoVenda;
        printf("Escolha a op��o de venda: \n");
        printf("[Digite 1] C�digo do produto\n");
        printf("[Digite 2] Peso do produto\n");
        printf("[Digite 3] Acessar estoque\n");
        printf("[Digite 4] Encerrar Programa\n");
        scanf_s("%d", &opcaoVenda);

        switch (opcaoVenda) {
        case 1:
            system("cls");
            printf("--------ESTA��O DE VENDA-------- \n\n");
            int valor, qtd, total, pagamento, troco;
            printf("Valor do produto: \n");
            scanf_s("%d", &valor);
            printf("Quantidade: \n");
            scanf_s("%d", &qtd);
            total = valor * qtd;
            printf("Pagamento recebido: \n");
            scanf_s("%d", &pagamento);
            printf("Total: %d \n", total);

            if (pagamento < total) {
                printf("Compra recusada \n");
            }
            else {
                troco = pagamento - total;
                printf("Troco: %d \n", troco);
            }
            break;

        case 2:
            system("cls");
            printf("--------ESTA��O DE PESO-------- \n\n");
            int valorkg, peso, pagamentokg, totalkg, trocokg;
            printf("Valor do produto por quilo: \n");
            scanf_s("%d", &valorkg);
            printf("Peso: \n");
            scanf_s("%d", &peso);
            totalkg = valorkg * peso;
            printf("Pagamento recebido: \n");
            scanf_s("%d", &pagamentokg);

            printf("Total: %d \n", totalkg);

            if (pagamentokg < totalkg) {
                printf("Compra recusada \n");
            }
            else {
                trocokg = pagamentokg - totalkg;
                printf("Troco: %d \n", trocokg);
            }
            break;
        case 3:
            system("cls");
            printf("--------PRODUTOS--------\n");
            printf("%s - VALOR: %d\n", item[0].nomeProd, item[0].valorProd);
            printf("%s - VALOR: %d\n", item[1].nomeProd, item[1].valorProd);
            printf("%s - VALOR: %d\n", item[2].nomeProd, item[2].valorProd);
            printf("%s - VALOR: %d\n", item[3].nomeProd, item[3].valorProd);
            printf("%s - VALOR: %d\n", item[4].nomeProd, item[4].valorProd);

            printf("\n\n---PRODUTOS POR QUILO---\n");
            printf("%s - VALOR: %d\n", itemkg[0].nomeProdkg, itemkg[0].valorProdkg);
            printf("%s - VALOR: %d\n", itemkg[1].nomeProdkg, itemkg[1].valorProdkg);
            printf("%s - VALOR: %d\n", itemkg[2].nomeProdkg, itemkg[2].valorProdkg);
            printf("%s - VALOR: %d\n", itemkg[3].nomeProdkg, itemkg[3].valorProdkg);
            printf("%s - VALOR: %d\n", itemkg[4].nomeProdkg, itemkg[4].valorProdkg);

            /*printf("\nAPERTE [1] PARA RETORNAR AO MENU");
            scanf_s("%d", &codigoRet);
            if (codigoRet == 1){
                statusMenu++;
            }*/
            break;
        case 4:
            system("cls");
            printf("APERTE ENTER PARA ENCERRAR O PROGRAMA");
            break;
        default:
            printf("APERTE ENTER PARA ENCERRAR O PROGRAMA\n\n");
        }
    } while (statusMenu != 0);

    system("pause");
    return 0;
}

/*
TAREFAS
PONTO EXTRA: Conex�o com o banco de dados MySQL.
PONTO EXTRA: Cria��o de biblioteca.
RF1. Fun��o para que usu�rio adiciona mais de um produto no ato de venda.
RF3. Fun��o para que o usuario gerente possa adicionar produtos
RF4. Fun��o para que o usuario possa transitar entre as telas (bot�o para voltar e sair)
RF5. Fun��o de cadastro para funcion�rios (registro em text ou mysql) 
RF6. Sistema conceitual de cart�o de cr�dito (dinheiro fisico aprova a compra apenas se o valor for igual ou maior aos produtos, cr�dito aprova a compra automaticamente ap�s digitar uma senha, d�bito repete a opera��o do dinheiro fisico ap�s inserir uma senha)
RF7. Hist�rico de opera��o (sei l� como fazer)
altera��es devem ser levantados no github apenas quando forem feitas, caso contr�rio copiem o c�digo e operem no offline at� tiverem sucesso.

DICION�RIO
#include <string.h> - Serve para usar strings (palavras) no programa
char login[30], loginRegistrado[30] = "login"; - Estabele uma palavra "login" para ser comparado com a entrada do usu�rio
scanf_s("%s", login); - %s serve para ler string
fflush(stdin); - limpa as informa��es inseridos na string
if (strcmp(login, loginRegistrado) == 0 && strcmp(senha, senhaRegistrado) == 0) { - strcmp compara duas strings, se elas forem iguais (0) o programa far� o pr�ximo strcmp e se for 0 tamb�m efetuar� o comando if
system("cls"); - limpa a tela de informa��o
switch (opcaoVenda) { - serve para o usuario escolher entre diversas op��es
*/