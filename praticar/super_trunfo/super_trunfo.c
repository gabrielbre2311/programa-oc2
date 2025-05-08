#include <stdio.h>

// Programa: Cadastro de Cartas do Super Trunfo de Países
// Objetivo: Ler e exibir os dados de duas cartas representando cidades brasileiras

int main() {
    // ---------- Declaração de variáveis para a Carta 1 ----------
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // ---------- Declaração de variáveis para a Carta 2 ----------
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // ---------- Leitura dos dados da Carta 1 ----------
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado1);

    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1); // Permite entrada com espaços

    printf("População (habitantes): ");
    scanf("%d", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // ---------- Leitura dos dados da Carta 2 ----------
    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("População (habitantes): ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // ---------- Exibição formatada das Cartas ----------
    printf("\n=============================================\n");
    printf("               CARTA 1                       \n");
    printf("=============================================\n");
    printf("Estado:                        %c\n", estado1);
    printf("Código:                        %s\n", codigo1);
    printf("Nome da Cidade:                %s\n", nomeCidade1);
    printf("População:                     %d habitantes\n", populacao1);
    printf("Área:                          %.2f km²\n", area1);
    printf("PIB:                           %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos:   %d\n", pontosTuristicos1);

    printf("\n=============================================\n");
    printf("               CARTA 2                       \n");
    printf("=============================================\n");
    printf("Estado:                        %c\n", estado2);
    printf("Código:                        %s\n", codigo2);
    printf("Nome da Cidade:                %s\n", nomeCidade2);
    printf("População:                     %d habitantes\n", populacao2);
    printf("Área:                          %.2f km²\n", area2);
    printf("PIB:                           %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos:   %d\n", pontosTuristicos2);

    printf("\nCadastro concluído com sucesso!\n");

    return 0;
}
