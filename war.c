// Definição da struct Territorio
typedef struct {
    char nome[30];
    char corExercito[20];
    int tropas;
} Territorio;
#include <stdio.h>
#include <string.h>

#define MAX_TERRITORIOS 5

int main() {
    Territorio mapa[MAX_TERRITORIOS];

    printf("=== Cadastro de Territórios ===\n");

    for (int i = 0; i < MAX_TERRITORIOS; i++) {
        printf("\nTerritório %d:\n", i + 1);

        printf("Nome: ");
        scanf(" %[^\n]", mapa[i].nome);

        printf("Cor do exército: ");
        scanf(" %[^\n]", mapa[i].corExercito);

        printf("Quantidade de tropas: ");
        scanf("%d", &mapa[i].tropas);
    }

    printf("\n=== Territórios Cadastrados ===\n");
    for (int i = 0; i < MAX_TERRITORIOS; i++) {
        printf("\nTerritório %d\n", i + 1);
        printf("Nome: %s\n", mapa[i].nome);
        printf("Cor do Exército: %s\n", mapa[i].corExercito);
        printf("Tropas: %d\n", mapa[i].tropas);
    }

    return 0;
}
