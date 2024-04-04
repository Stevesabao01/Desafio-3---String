#include<stdio.h>
#include<conio.h>
#include<string.h>

main(){
    char nome[50], sobrenome[50], n[50];
    int i, j=0, x=0, tam, sei, aux=0;

    printf("Digite nome completo: ");
    fflush(stdin);
    gets(nome);
    tam = strlen(nome);

    for(i = tam -1; nome[i]!= '\0'; i--) {
        sobrenome[j] = nome[i];
        j++;
    }

    sei = strlen(sobrenome);
    strrev(sobrenome);
    fflush(stdin);

    aux = tam - sei;

    for(i=0; i<aux; i++){
        n[x] = nome[i];
        x++;
    }

    fflush(stdin);
    printf("%s, ", sobrenome);
    printf("%s\n", n);

    getch();

    printf("\nDigite o nome completo denovo: ");
    fflush(stdin);
    gets(nome);
    tam = strlen(nome);

    for(i = tam -1; nome[i]!= '\0'; i--){
        sobrenome[j] = nome[i];
        j++;
    }

    sei = strlen(sobrenome);
    printf("\n%s\n", sobrenome);
    printf("%d\n", sei);

    getch();
}