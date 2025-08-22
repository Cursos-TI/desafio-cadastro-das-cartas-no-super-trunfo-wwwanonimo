#include <stdio.h>

int main(){
    //Variaveis Carta1
    char estado1 [5] = "";
    char codigo1 [5] = "";
    char cidade1 [30] = "";
    int populacao1;
    float area1;
    float pib1;
    int p_turisticos1;
    float  C_DensidadePopulacional_1;
    float C_PIBperCapital_1;

    //Variaveis Carta2
    char estado2 [5] = "";
    char codigo2 [5] = "";
    char cidade2 [30] = "";
    int populacao2;
    float area2;
    float pib2;
    int p_turisticos2;
    float C_DensidadePopulacional_2;
    float C_PIBperCapital_2;

    //Carta 1
    printf("===Carta 1===\n");

    printf("Estado:");
    scanf("%s", estado1);

    printf("Codigo:");
    scanf("%s", codigo1);

    printf("Cidade:");
    scanf("%s", cidade1);

    printf("Populacao:");
    scanf("%i", &populacao1);

    printf("Area:");
    scanf("%f", &area1);

    printf("PIB:");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos:");
    scanf("%i", &p_turisticos1);
    
    //Calculo Variaveis Carta1
    C_DensidadePopulacional_1 = (float) populacao1 / area1;
    C_PIBperCapital_1 = (float) pib1 / populacao1;

    //Impressão Carta 1
    printf("\nEstado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", p_turisticos1);
    printf ("Densidade populaciona:%.2f hab/km\n", C_DensidadePopulacional_1);
    printf("PIB per Capita:%f reais\n", C_PIBperCapital_1);


    //Carta 2
    printf("\n===Carta 2===\n");

    printf("Estado:");
    scanf("%s", estado2);

    printf("Codigo:");
    scanf("%s", codigo2);

    printf("Cidade:");
    scanf("%s", cidade2);

    printf("Populacao:");
    scanf("%i", &populacao2);

    printf("Area:");
    scanf("%f", &area2);

    printf("PIB:");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos:");
    scanf("%i", &p_turisticos2);
    
    //Calculo Variaveis Carta2
    C_DensidadePopulacional_2 = (float) populacao2/area2;
    C_PIBperCapital_2 = (float) pib2 /populacao2;

    //Impressão Carta 2
    printf("\nEstado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", p_turisticos2);
    printf("Densidade Populacional:%.2f hab/k\n", C_DensidadePopulacional_2);
    printf("PIB per Capita: %f reais\n", C_PIBperCapital_2);

    return 0;
}