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

typedef struct {
    char *nomeProd; //nome precisa ser indicado como ponteiro no visual studio mas pode ser alterado como strcpy em outras IDE's
    int valorProd;
}Produto;

int main(void) {
    setlocale(LC_ALL, "Portuguese");
    char login[30], loginRegistrado[30] = "login";
    char senha[30], senhaRegistrada[30] = "senha";
    int status;

    Produto item[10];

    item[0].nomeProd = "LEITE";
    item[0].valorProd = 5;
    item[1].nomeProd = "OVOS";
    item[1].valorProd = 15;
    item[2].nomeProd = "FARDO DE CERVEJA";
    item[2].valorProd = 50;
    item[3].nomeProd = "SABÃO";
    item[3].valorProd = 6;
    item[4].nomeProd = "FARINHA";
    item[4].valorProd = 10;

    printf("%s/n%d/n", item[0].nomeProd, item[0].valorProd);

    do {
        system("cls");
        printf("------HORTIFRUTI------ \n");
        printf("--------ENTRAR-------- \n\n");
        status = 0;
        printf("INSIRA O SEU LOGIN:");
        fflush(stdin);
        scanf_s("%s", login);
        if (strcmp(loginRegistrado, login)!=0){
            printf("LOGIN ERRADO!");
            status++;
        } else {
            printf("INSIRA A SUA SENHA:");
            fflush(stdin);
            scanf_s("%s", senha);
            if (strcmp(senhaRegistrada, senha)!=0) {
                printf("SENHA ERRADA!");
                status++;
            }
        }
    } while (status != 0);

        system("cls");
        int opcaoVenda;
        printf("Escolha a opção de venda: \n");
        printf("[Digite 1] Código do produto\n");
        printf("[Digite 2] Peso do produto\n");
        printf("[Digite 3] Encerrar Programa\n");
        scanf_s("%d", &opcaoVenda);

        switch (opcaoVenda) {
        case 1 :
            printf("--------ESTAÇÃO DE VENDA-------- \n\n");
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

        case 2 :
            printf("--------ESTAÇÃO DE PESO-------- \n\n");
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
        default:
            printf("APERTE ENTER PARA ENCERRAR O PROGRAMA\n\n");
        }

    system("pause");
    return 0;
}

/*
TAREFAS
PONTO EXTRA: Conexão com o banco de dados MySQL.
PONTO EXTRA: Criação de biblioteca.
RF1. Função para que usuário adiciona mais de um produto no ato de venda.
RF2. Uso de structs para os produtos
RF3. Função para que o usuario gerente possa adicionar produtos
RF4. Função para que o usuario possa transitar entre as telas (botão para voltar e sair)
RF5. Função de cadastro para funcionários (registro em text ou mysql) 
RF6. Sistema conceitual de cartão de crédito (dinheiro fisico aprova a compra apenas se o valor for igual ou maior aos produtos, crédito aprova a compra automaticamente após digitar uma senha, débito repete a operação do dinheiro fisico após inserir uma senha)
RF7. Histórico de operação (sei lá como fazer)
alterações devem ser levantados no github apenas quando forem feitas, caso contrário copiem o código e operem no offline até tiverem sucesso.

DICIONÁRIO
#include <string.h> - Serve para usar strings (palavras) no programa
char login[30], loginRegistrado[30] = "login"; - Estabele uma palavra "login" para ser comparado com a entrada do usuário
scanf_s("%s", login); - %s serve para ler string
fflush(stdin); - limpa as informações inseridos na string
if (strcmp(login, loginRegistrado) == 0 && strcmp(senha, senhaRegistrado) == 0) { - strcmp compara duas strings, se elas forem iguais (0) o programa fará o próximo strcmp e se for 0 também efetuará o comando if
system("cls"); - limpa a tela de informação
switch (opcaoVenda) { - serve para o usuario escolher entre diversas opções
*/