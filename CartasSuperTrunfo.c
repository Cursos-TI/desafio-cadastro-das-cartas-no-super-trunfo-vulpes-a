#include <stdio.h>

int main(){

    // Carta 1
    
    char estado[3];
    char codigo[11];
    char cidade[31];
    unsigned long int populacao;
    float area;
    float pib;
    int turismo;

    // Carta 2

    char estado2[3];
    char codigo2[11];
    char cidade2[31];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int turismo2;

    // Entrada de dados - Carta 1

    printf("Digite uma sigla para o estado da primeira cidade (por exemplo RJ): \n");
    scanf("%2s", estado);

    printf("Digite o código de sua cidade (número inteiro de 1 - 4): \n");
    scanf("%10s", codigo);

    printf("Digite o nome da cidade (sem espaço): \n");
    scanf("%30s", cidade);

    printf("Digite a população da cidade: \n");
    scanf("%lu", &populacao);

    printf("Digite, em quilômetros, a área da cidade: \n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &turismo);

    // Entrada de dados - Carta 2

    printf("Digite uma sigla para o estado da segunda cidade (por exemplo SP): \n");
    scanf("%2s", estado2);

    printf("Digite o código de sua cidade (número inteiro de 1 - 4): \n");
    scanf("%10s", codigo2);

    printf("Digite o nome da cidade (sem espaço): \n");
    scanf("%30s", cidade2);

    printf("Digite a população da cidade: \n");
    scanf("%lu", &populacao2);

    printf("Digite, em quilômetros, a área da cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &turismo2);

    // Cálculos

    float densidade1 = populacao / area;
    float pibpercapita1 = pib / populacao;

    float densidade2 = populacao2 / area2;
    float pibpercapita2 = pib2 / populacao2;

    // Super Poder

    float superpoder1 = (float)populacao + area + pib + (float)turismo + pibpercapita1 + (1 / densidade1);
    float superpoder2 = (float)populacao2 + area2 + pib2 + (float)turismo2 + pibpercapita2 + (1 / densidade2);

    // Comparações (1 se carta 1 vence, 0 se carta 2 vence)

    int comp_populacao = populacao > populacao2;
    int comp_area = area > area2;
    int comp_pib = pib > pib2;
    int comp_turismo = turismo > turismo2;
    int comp_densidade = densidade1 < densidade2; // menor vence
    int comp_pibpercapita = pibpercapita1 > pibpercapita2;
    int comp_superpoder = superpoder1 > superpoder2;

    // Resultados Finais

    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %lu\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos turísticos: %d\n", turismo);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f\n", pibpercapita1);
    printf("Super Poder: %.2f\n", superpoder1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", turismo2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f\n", pibpercapita2);
    printf("Super Poder: %.2f\n", superpoder2);

    // Comparações

    printf("\n--- Comparação de Cartas ---\n");
    printf("População: Carta 1 venceu (%d)\n", comp_populacao);
    printf("Área: Carta 1 venceu (%d)\n", comp_area);
    printf("PIB: Carta 1 venceu (%d)\n", comp_pib);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", comp_turismo);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", comp_densidade);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", comp_pibpercapita);
    printf("Super Poder: Carta 1 venceu (%d)\n", comp_superpoder);

    // Comparação de Atributo "População"

    printf("\n--- População ---\n");

    if (populacao > populacao2) {
        printf("Carta 1 - %s (%s): %lu\n", cidade, estado, populacao);
        printf("Carta 2 - %s (%s): %lu\n", cidade2, estado2, populacao2);
        printf("Resultado: Carta 1 (%s) venceu!", estado);

    }else {
        printf("Carta 1 - %s (%s): %lu\n", cidade, estado, populacao);
        printf("Carta 2 - %s (%s): %lu\n", cidade2, estado2, populacao2);
        printf("Resultado: Carta 2 (%s) venceu!", estado2);
    }

    return 0;
}
