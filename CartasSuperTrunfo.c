#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char codigo[10];
    char nome[100];
    int populacao, pnts_turist; //pnts_turist = Número de pontos turísticos
    float area, pib;
    
    // Entrada dos dados de cada cidade utilizando scanf.
    printf("Código da cidade: ");
    scanf("%s", &codigo);

    printf("Nome da cidade: ");
    scanf(" %s", &nome);

    printf("População: ");
    scanf("%d", &populacao);

    printf("Área em km²: ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pnts_turist);

    printf("\nCódigo da cidade: %s\nNome da cidade: %s\nPopulação: %d\nÁrea (km²): %f\nPIB: %f\nNúmero de pontos turísticos: %d\n", codigo, nome, populacao, area, pib, pnts_turist);

    return 0;
}
