#include <stdio.h>

int main() {
    char estado1 [3];
    char codigo1 [4];
    char cidade1 [50];
    unsigned long int  populacao1;
    float pib1, superpoder1;
    int pontosturisticos1;
    float area1, densidade1, renda1, resultado1;

    char estado2 [3];
    char codigo2 [4];
    char cidade2 [50];
    unsigned long int  populacao2;
    float pib2, superpoder2;
    int pontosturisticos2;
    float area2, densidade2, renda2, resultado2;

    //carta1
    printf("Carta 1\n");
    printf("Estado:");
    scanf(" %3s" , estado1);

    printf("Codigo:");
    scanf(" %3s" , codigo1);

    printf("Nome da Cidade:");
    scanf(" %49[^\n]", cidade1);

    printf("Populacao:");
    scanf(" %lu" , &populacao1);

    printf("Area:");
    scanf(" %f" , &area1);

    printf("PIB:");
    scanf(" %f" , &pib1);

    printf("Numeros de Pontos Turisticos:");
    scanf(" %d" , &pontosturisticos1);

    //calculo carta 1

    densidade1 = populacao1 / area1;
    renda1 = pib1 / populacao1;
    superpoder1 = populacao1 + area1 + pib1 + pontosturisticos1 + renda1 + (1 / densidade1);
    
     //carta 2
     printf("Carta 2\n");
     printf("Estado:");
     scanf(" %3s" , estado2);
 
     printf("Codigo:");
     scanf(" %3s" , codigo2);
 
     printf("Nome da Cidade:");
     scanf(" %49[^\n]", cidade2);
 
     printf("Populacao:");
     scanf(" %lu" , &populacao2);
 
     printf("Area:");
     scanf(" %f" , &area2);
 
     printf("PIB:");
     scanf(" %f" , &pib2);
 
     printf("Numeros de Pontos Turisticos:");
     scanf(" %d" , &pontosturisticos2);

     //calculando
     densidade2 = populacao2 / area2;
     renda2 = pib2 / populacao2;
     superpoder1 = populacao2 + area2 + pib2 + pontosturisticos2 + renda2 + (1 / densidade2);
 
     // Impressão dos resultados
     printf("\n--- Comparacao das Cartas ---\n");
     printf("Populacao: %d\n", populacao1 > populacao2);
     printf("Area: %d\n", area1 > area2);
     printf("PIB: %d\n", pib1 > pib2);
     printf("Numero de Pontos Turisticos: %d\n", pontosturisticos1 > pontosturisticos2);
     printf("Densidade Populacional (menor vence): %d\n", densidade1 < densidade2);
     printf("PIB per Capita: %d\n", renda1 > renda2);
     printf("Super Poder: %d\n", superpoder1 > superpoder2);
     



    return 0;
}
