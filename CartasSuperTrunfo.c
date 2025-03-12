#include <stdio.h>

int main() {
    char estado1 [3];
    char codigo1 [4];
    char cidade1 [50];
    int populacao1;
    float pib1;
    int pontosturisticos1;
    float area1, densidade1, renda1;

    char estado2 [3];
    char codigo2 [4];
    char cidade2 [50];
    int populacao2;
    float pib2;
    int pontosturisticos2;
    float area2, densidade2, renda2;

    //carta1
    printf("Carta 1\n");
    printf("Estado:");
    scanf(" %3s" , estado1);

    printf("Codigo:");
    scanf(" %3s" , codigo1);

    printf("Nome da Cidade:");
    scanf(" %49[^\n]", cidade1);

    printf("Populacao:");
    scanf(" %d" , &populacao1);

    printf("Area:");
    scanf(" %f" , &area1);

    printf("PIB:");
    scanf(" %f" , &pib1);

    printf("Numeros de Pontos Turisticos:");
    scanf(" %d" , &pontosturisticos1);

    densidade1 = populacao1 / area1;
    renda1 = pib1 / populacao1;

    
     //carta 2
     printf("Carta 2\n");
     printf("Estado:");
     scanf(" %3s" , estado2);
 
     printf("Codigo:");
     scanf(" %3s" , codigo2);
 
     printf("Nome da Cidade:");
     scanf(" %49[^\n]", cidade2);
 
     printf("Populacao:");
     scanf(" %d" , &populacao2);
 
     printf("Area:");
     scanf(" %f" , &area2);
 
     printf("PIB:");
     scanf(" %f" , &pib2);
 
     printf("Numeros de Pontos Turisticos:");
     scanf(" %d" , &pontosturisticos2);

     //calculando
     densidade2 = populacao2 / area2;
     renda2 = pib2 / populacao2;
 
    //imprindo resultado carta 1
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %3s\n" , estado1);
    printf("Codigo: %4s\n" , codigo1);
    printf("Nome da cidade: %50s\n" , cidade1);
    printf("Populacao: %d\n" , populacao1);
    printf("Area: %.2f km²\n" , area1);
    printf("PIB: %.2f bilhoes de reais\n" , pib1);
    printf("Numero de pontos turisticos: %d\n" , pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/ km²\n" , densidade1);
    printf("PIB per Capita: %.2f reais\n" , renda1);

    //imprimindo resultado carta 2
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %3s\n" , estado2);
    printf("Codigo: %4s\n" , codigo2);
    printf("Nome da cidade: %50s\n" , cidade2);
    printf("Populacao: %d\n" , populacao2);
    printf("Area: %.2f km²\n" , area2);
    printf("PIB: %.2f bilhoes de reais\n" , pib2);
    printf("Numero de pontos turisticos: %d\n" , pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/ km²\n" , densidade2);
    printf("PIB per Capita: %.2f reais\n" , renda2);




    return 0;
}
