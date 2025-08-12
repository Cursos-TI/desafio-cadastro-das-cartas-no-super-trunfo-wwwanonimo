#include <stdio.h>

int main(){
    char estado [5] = "";
    char codigo [5] = "";
    char cidade [30] = "";
    int populacao;
    float area;
    float pib;
    int p_turisticos;

    //Carta 1
    printf("===Carta 1===\n");

    printf("Estado:");
    scanf("%s", &estado);

    printf("Codigo:");
    scanf("%s", &codigo);

    printf("Cidade:");
    scanf("%s", &cidade);

    printf("Populacao:");
    scanf("%d", &populacao);

    printf("Area:");
    scanf("%f", &area);

    printf("PIB:");
    scanf("%f", &pib);

    printf("Numero de Pontos Turisticos:");
    scanf("%d", &p_turisticos);
    

    //Impressão Carta 1
    printf("\nEstado: %s\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %d\n");
    printf("Area: %.2f km\n", area);
    printf("PIB: %.2f bilhoes de reais\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", p_turisticos);


    //Carta 2
    printf("\n===Carta 2===\n");

    printf("Estado:");
    scanf("%s", &estado);

    printf("Codigo:");
    scanf("%s", &codigo);

    printf("Cidade:");
    scanf("%s", &cidade);

    printf("Populacao:");
    scanf("%d", &populacao);

    printf("Area:");
    scanf("%f", &area);

    printf("PIB:");
    scanf("%f", &pib);

    printf("Numero de Pontos Turisticos:");
    scanf("%d", &p_turisticos);
    

    //Impressão Carta 2
    printf("\nEstado: %s\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %d\n");
    printf("Area: %.2f km\n", area);
    printf("PIB: %.2f bilhoes de reais\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", p_turisticos);
    
}