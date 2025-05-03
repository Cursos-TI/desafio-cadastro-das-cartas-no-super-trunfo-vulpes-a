#include <stdio.h>

int main() {

// Carta 1
    char estado;
    char codigo[10];
    char cidade[30];
    int populacao;
    float area;
    float pib;
    int turismo;

// Carta 2
    char Estado;
    char Codigo[10];
    char Cidade[30];
    int Populacao;
    float Area;
    float Pib;
    int Turismo;

// Turismo refere-se à quantidade de pontos turísticos na cidade

    // Primeira carta
    printf("Digite uma sigla para sua primeira cidade (1 letra apenas): \n");
    scanf(" %c", &estado);

    printf("Digite o código de sua cidade (número inteiro de 1 - 4): \n");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade);

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao);

    printf("Digite, em quilômetros, a área da cidade, em números inteiros: \n");
    scanf("%f", &area);

    printf("Digite: O PIB da cidade, em números inteiros:  \n");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &turismo);

    // Segunda carta
    printf("Digite uma sigla para sua segunda cidade (1 letra apenas): \n");
    scanf(" %c", &Estado);

    printf("Digite o código de sua cidade (número inteiro de 1 - 4): \n");
    scanf("%s", Codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", Cidade);

    printf("Digite a população da cidade: \n");
    scanf("%d", &Populacao);

    printf("Digite, em quilômetros, a área da cidade, em números inteiros: \n");
    scanf("%f", &Area);

    printf("Digite: O PIB da cidade, em números inteiros:  \n");
    scanf("%f", &Pib);

    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &Turismo);

    // Resultados Finais
    printf(" Carta 1\n");
    printf("Estado: %c \nCódigo: %s \nNome da cidade: %s \nPopulação: %d \nÁrea: %.0f \nPIB: %.2f \nPontos turísticos: %d \n", estado, codigo, cidade, populacao, area, pib, turismo);

    printf(" Carta 2\n");
    printf("Estado: %c \nCódigo: %s \nNome da cidade: %s \nPopulação: %d \nÁrea: %.0f \nPIB: %.2f \nPontos turísticos: %d \n", Estado, Codigo, Cidade, Populacao, Area, Pib, Turismo);

    return 0;
}
