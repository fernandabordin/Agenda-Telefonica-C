#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <string.h>

// Fernanda Bordin RA: 23163885-2

struct Agenda {
    char nome[50];
    char numero[20];
};

main() {
    setlocale(LC_ALL, "Portuguese");

    struct Agenda listaContato[10];
    char select;
    int count = 0;
    int quantContatos = 0;

    while (1) {
        printf("************* MENU *************\n");
        printf(" \n");
        printf("Digite: \n");
        printf(" \n");
        printf("1- Cadastrar novos contatos\n");
        printf("2- Mostrar contatos cadastrados\n");
        printf("3- Sair da agenda\n");
        printf("\n");
        printf("********************************\n");

        select = getch();
        system("cls");

        switch (select) {
            case '1':
                for (count = quantContatos; count < 10; count++) {
                    printf("Digite o nome: \n");
                    scanf("%s", listaContato[count].nome);

                    if(strcmp(listaContato[count].nome, "C") == 0) {
                        break;
                    }

                    printf("Digite o telefone: \n");
                    scanf("%s", listaContato[count].numero);

                    if(strcmp(listaContato[count].numero, "C") == 0) {
                        break;
                    }

                    quantContatos++;
                }
                if (count == 10) {
                    printf("Agenda está cheia \n");
                }
                break;
            case '2':
                if (quantContatos == 0) {
                    printf("Agenda vazia! \n \n \n");
                } else {
                    for (count = 0; count < quantContatos; count++) {
                        if (listaContato[count].nome != NULL && listaContato[count].numero) {
                            printf("%s \n", listaContato[count].nome);
                            printf("%s \n", listaContato[count].numero);
                            printf("\n");
                        }
                    }
                }
                break;    
            case '3':
                printf("Volte sempre!!! \n");    
                exit(0);
                break;    
            default:
                printf("Opção inválida! \n \n \n");
                break;
        }      
    }   
}
