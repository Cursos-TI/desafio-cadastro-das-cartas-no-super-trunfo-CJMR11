#include <stdio.h>

int main() {
    // Declaração das variáveis para as duas cartas
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
    float densidade1, densidade2, pib_per_capita1, pib_per_capita2;
    float super_poder1, super_poder2;
    int resultado_populacao, resultado_area, resultado_pib;
    int resultado_pontos_turisticos, resultado_densidade, resultado_pib_per_capita;
    int resultado_super_poder;

    // Entrada de dados para a Carta 1
    printf("Digite o estado da Carta 1 (ex: A): ");
    scanf("%c", &estado1);
    printf("Digite o código da Carta 1 (ex: A01): ");
    scanf("%s", &codigo1);
    printf("Digite a população da Carta 1: ");
    scanf("%lu", &populacao1);
    printf("Digite a área da Carta 1 (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB da Carta 1: ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da Carta 1: ");
    scanf("%d", &pontos_turisticos1);

    // Entrada de dados para a Carta 2
    printf("\nDigite o estado da Carta 2 (ex: B): ");
    scanf(" %c", &estado2);
    printf("Digite o código da Carta 2 (ex: B02): ");
    scanf("%s", &codigo2);
    printf("Digite a população da Carta 2: ");
    scanf("%lu", &populacao2);
    printf("Digite a área da Carta 2 (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB da Carta 2: ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da Carta 2: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculo dos atributos adicionais 
    densidade1 = (float)populacao1 / area1;
    densidade2 = (float)populacao2 / area2;
    pib_per_capita1 = pib1 / populacao1;
    pib_per_capita2 = pib2 / populacao2;

    // Cálculo do Super Poder 
    super_poder1 = (float)populacao1 + area1 + pib1 + pontos_turisticos1 + (1.0 / densidade1) + pib_per_capita1;
    super_poder2 = (float)populacao2 + area2 + pib2 + pontos_turisticos2 + (1.0 / densidade2) + pib_per_capita2;

    // Comparação dos atributos 
    resultado_populacao = (populacao1 > populacao2) ? 1 : 0;
    resultado_area = (area1 > area2) ? 1 : 0;
    resultado_pib = (pib1 > pib2) ? 1 : 0;
    resultado_pontos_turisticos = (pontos_turisticos1 > pontos_turisticos2) ? 1 : 0;
    resultado_densidade = (densidade1 < densidade2) ? 1 : 0;
    resultado_pib_per_capita = (pib_per_capita1 > pib_per_capita2) ? 1 : 0;
    resultado_super_poder = (super_poder1 > super_poder2) ? 1 : 0;

    // Exibição dos dados cadastrados e calculados
    printf("\nDados da Carta 1\n");
    printf("Estado da Carta 1: %c\n", estado1);
    printf("Código da Carta 1: %s\n",codigo1);
    printf("População: %lu hab\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);

    printf("\nDados da Carta 2\n");
    printf("Estado da Carta 2: %c\n", estado2);
    printf("Código da Carta 2: %s\n",codigo2);
    printf("População: %lu hab\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);

    // Exibição dos resultados da comparação
    printf("\nResultado da Comparação\n");
    printf("População: %s\n", resultado_populacao ? "Carta 1 vence" : "Carta 2 vence");
    printf("Área: %s\n", resultado_area ? "Carta 1 vence" : "Carta 2 vence");
    printf("PIB: %s\n", resultado_pib ? "Carta 1 vence" : "Carta 2 vence");
    printf("Pontos turísticos: %s\n", resultado_pontos_turisticos ? "Carta 1 vence" : "Carta 2 vence");
    printf("Densidade Populacional: %s\n", resultado_densidade ? "Carta 1 vence" : "Carta 2 vence");
    printf("PIB per Capita: %s\n", resultado_pib_per_capita ? "Carta 1 vence" : "Carta 2 vence");
    printf("Super Poder: %s\n", resultado_super_poder ? "Carta 1 vence" : "Carta 2 vence");

    return 0;
}
