#include <stdio.h>

int main() {
    // Declaração das variáveis para a carta 01
    char estado01;
    char codigo01[4];
    char nomeCidade01[50];
    int populacao01;
    float area01;
    float pib01;
    int pontosTuristicos01;
    float quocientedensidade01;
    float quocientepib01;
    float superPoder01;

    // Declaração das variáveis para a carta 02
    char estado02;
    char codigo02[4];
    char nomeCidade02[50];
    int populacao02;
    float area02;
    float pib02;
    int pontosTuristicos02;
    float quocientedensidade02;
    float quocientepib02;
    float superPoder02;

    // Leitura dos dados da carta 01
    printf("Insira os dados da carta 01:\n");

    printf("Estado:");
    scanf(" %s\n", &estado01);

    printf("Codigo: ");
    scanf("%3s\n", codigo01);  // Limita a 3 caracteres + '\0'

    printf("Cidade: ");
    scanf("%s\n]", nomeCidade01);

    printf("Populacao: ");
    scanf("%f\n", &populacao01);  

    printf("Area: ");
    scanf("%f\n", &area01);

    printf("PIB: ");
    scanf("%f\n", &pib01);

    printf("Pontos turisticos: ");
    scanf("%d\n", &pontosTuristicos01);

    // Cálculos para carta 01
    quocientepib01 = pib01 / (float)populacao01;
    quocientedensidade01 = (float)populacao01 / area01;

    // Leitura dos dados da carta 02
    printf("\nInsira os dados da carta 02:\n");

    printf("Estado: ");
    scanf(" %c", &estado02);

    printf("Codigo: ");
    scanf("%3s\n", codigo02);

    printf("Cidade: ");
    scanf("%s\n]", nomeCidade02);

    printf("Populacao: ");
    scanf("%f\n", &populacao02);

    printf("Area: ");
    scanf("%f\n", &area02);

    printf("PIB: ");
    scanf("%f\n", &pib02);

    printf("Pontos turisticos: ");
    scanf("%d\n", &pontosTuristicos02);

    // Cálculos para carta 02
    quocientepib02 = pib02 / (float)populacao02;
    quocientedensidade02 = (float)populacao02 / area02;

    // Cálculo do Super Poder (soma dos atributos numéricos)
    superPoder01 = (float)populacao01 + area01 + pib01 + (float)pontosTuristicos01 + quocientepib01 + (1.0f / quocientedensidade01);
    superPoder02 = (float)populacao02 + area02 + pib02 + (float)pontosTuristicos02 + quocientepib02 + (1.0f / quocientedensidade02);

    // Exibição dos dados da Carta 01
    printf("\nCarta 01\n");
    printf("Estado: %s\n", estado01);
    printf("Codigo: %s\n", codigo01);
    printf("Cidade: %s\n", nomeCidade01);
    printf("Populacao: %lu\n", populacao01);
    printf("Area: %.2f km\n", area01);
    printf("PIB: %.2f bilhões de reais\n", pib01);
    printf("Pontos turisticos: %d\n", pontosTuristicos01);
    printf("PIB per capita: %.6f\n", quocientepib01);
    printf("Densidade Populacional: %.6f habitantes/km\n", quocientedensidade01);
    printf("Super Poder: %.6f\n", superPoder01);

    // Exibição dos dados da Carta 02
    printf("\nCarta 02\n");
    printf("Estado: %s\n", estado02);
    printf("Codigo: %s\n", codigo02);
    printf("Cidade: %s\n", nomeCidade02);
    printf("Populacao: %lu\n", populacao02);
    printf("Area: %.2f km\n", area02);
    printf("PIB: %.2f bilhoes de reais\n", pib02);
    printf("Pontos turisticos: %d\n", pontosTuristicos02);
    printf("PIB per capita: %.6f\n", quocientepib02);
    printf("Densidade Populacional: %.6f habitantes/km\n", quocientedensidade02);
    printf("Super Poder: %.6f\n", superPoder02);

    // Comparações
    printf("\nComparacoes das cartas\n");

    printf("Populacao: Carta 01 venceu (%d)\n", populacao01 > populacao02);
    printf("Area: Carta 01 venceu (%d)\n", area01 > area02);
    printf("PIB: Carta 01 venceu (%d)\n", pib01 > pib02);
    printf("Pontos Turisticos: Carta 01 venceu (%d)\n", pontosTuristicos01 > pontosTuristicos02);
    printf("Densidade Populacional: Carta 01 venceu (%d)\n", quocientedensidade01 < quocientedensidade02);
    printf("PIB per Capita: Carta 01 venceu (%d)\n", quocientepib01 > quocientepib02);
    printf("Super Poder: Carta 01 venceu (%d)\n", superPoder01 > superPoder02);

    return 0;
}
