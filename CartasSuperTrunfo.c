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

    int opcao; //menu interativo

    printf("1. Iniciar Jogo\n");
    printf("2. Ver Regras\n");
    scanf("%d", &opcao);

    switch (opcao) {
    case 1:
      printf("Iniciando o jogo...\n");
      // Código para iniciar o jogo
      break;
    case 2:
      printf("Regras do Jogo:\n");
      printf("1. Regra 1\n");
      printf("2. Regra 2\n");
      printf("3. Regra 3\n");
      // Código para exibir as regras
      break;
    default:
      printf("Opção inválida. Tente novamente.\n");
      return 1;
  }

    // Entrada de dados - Carta 1

    printf("\nDigite uma sigla para o estado da primeira cidade (por exemplo RJ): \n");
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

 if (area1 == 0 || area2 == 0 || populacao1 == 0 || populacao2 == 0) {
        printf("\nErro: Área e população não podem ser zero.\n");
        return 1;
    }

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

    // Menu interativo para jogador escolher atributo

    int atributo;

    printf("Escolha agora um atributo que a disputa ocorrerá!\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos turísticos\n");
    printf("5. Densidade populacional (menor vence)\n");
    printf("6. PIB per capita\n");
    printf("7. Super Poder\n");

    // Casos

    scanf("%d", &atributo);

switch (atributo){
    case 1: // População
        if (populacao > populacao2) {
            printf("Carta 1 ganha na população!\n");
        } else if (populacao < populacao2){ 
            printf("Carta 2 ganha na população!\n");
        } else {
            printf("Empate!\n");
        }
        break;

    case 2: // Área
        if (area > area2) {
            printf("Carta 1 ganha na Área!\n");
        } else if (area < area2){ 
            printf("Carta 2 ganha na Área!\n");
        } else {
            printf("Empate!\n");
        }
        break;

    case 3:
        if (pib > pib2) {
            printf("Carta 1 ganha no PIB!\n");
        } else if (pib < pib2){ 
            printf("Carta 2 ganha no PIB!\n");
        } else {
            printf("Empate!\n");
        }
        break;

    case 4:
        if (turismo > turismo2) {
            printf("Carta 1 ganha no turismo!\n");
        } else if (turismo < turismo2){ 
            printf("Carta 2 ganha no turismo!\n");
        } else {
            printf("Empate!\n");
        }
        break;

    case 5:
        if (densidade1 < densidade2) {
            printf("Carta 1 ganha na densidade populacional!\n");
        } else if (densidade1 > densidade2){ 
            printf("Carta 2 ganha na densidade populacional!\n");
        } else {
            printf("Empate!\n");
        }
        break;

    case 6:
        if (pibpercapita1 > pibpercapita2) {
            printf("Carta 1 ganha no PIB per capita!\n");
        } else if (pibpercapita1 < pibpercapita2){ 
            printf("Carta 2 ganha no PIB per capita!\n");
        } else {
            printf("Empate!\n");
        }
        break;

    case 7:
        if (superpoder1 > superpoder2) {
            printf("Carta 1 ganha no super poder!\n");
        } else if (superpoder1 < superpoder2){
            printf("Carta 2 ganha no super poder!\n");
        } else {
            printf("Empate!\n");
        }
        break;

    default:
        printf("Atributo inválido.\n");
}

    return 0;

}
