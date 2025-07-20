#include <stdio.h>

int main(){

    // Carta 1
    char estado[3];
    char codigo[11];
    char cidade[31];
    int populacao;
    float area;
    float pib;
    int turismo;

    // Carta 2
    char estado2[3];
    char codigo2[10];
    char cidade2[30];
    int populacao2;
    float area2;
    float pib2;
    int turismo2;

    // Primeira carta

    printf("Digite uma sigla para o estado da primeira cidade (por exemplo RJ): \n");
    scanf("%2s", estado);

    printf("Digite o código de sua cidade (número inteiro de 1 - 4): \n");
    scanf("%10s", codigo);

    printf("Digite o nome da cidade (sem espaço): \n");
    scanf("%30s", cidade);

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao);

    printf("Digite, em quilômetros, a área da cidade: \n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &turismo);

    // Segunda carta

    printf("Digite uma sigla para o estado da segunda cidade (por exemplo SP): \n");
    scanf("%2s", estado2);

    printf("Digite o código de sua cidade (número inteiro de 1 - 4): \n");
    scanf("%10s", codigo2);

    printf("Digite o nome da cidade (sem espaço): \n");
    scanf("%30s", cidade2);

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite, em quilômetros, a área da cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &turismo2);

    // Cálculos de densidade populacional e PIB per capita:

    float densidade1 = populacao / area;
    float pibpercapita1 = pib / populacao;

    float densidade2 = populacao2 / area2;
    float pibpercapita2 = pib2 / populacao2;

    // Resultados Finais

    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos turísticos: %d\n", turismo);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f\n", pibpercapita1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", turismo2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f\n", pibpercapita2);

    return 0;
}
