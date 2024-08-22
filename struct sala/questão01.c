#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[100];
    int idade;
    char end[100];
}pessoa;

int main(){
    pessoa pessoa1;
    printf("digite o nome\n");
    fgets(pessoa1.nome, 100, stdin);

    printf("digite a idade\n");
    scanf("%i", &pessoa1.idade);

    printf("digite se endereco");
    fgets(pessoa1.end, 100, stdin);
    

    printf("%c", pessoa1.nome);
    printf("%i", pessoa1.idade);
    printf("%c", pessoa1.end);


    return 0;
}