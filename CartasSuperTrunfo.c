#include <stdio.h>

int main() {
    // Declaração das variáveis para os dados da carta 1
    char estado1;
    char codigo1[5]; 
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Declaração das variáveis para os dados da carta 2
    char estado2;
    char codigo2[5];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Entrada de dados para a carta 1
    printf("Digite os dados da carta 1:\n");

    printf("Estado: ");
    scanf(" %c", &estado1);  

    printf("Código: ");
    scanf("%s", codigo1);  

    printf("Cidade: ");
    scanf(" %49[^\n]", cidade1);  

    printf("População: ");
    scanf("%d", &populacao1);

    printf("area:");
    scanf("%f", &area1);

    printf("pib:");
    scanf("%f", &pib1);

    printf("pontos turisticos:");
    scanf("%d", &pontosTuristicos1);

    // Entrada de dados para a carta 2

    printf("\nDigite os dados da carta 2:\n");  
    printf("estado");
    scanf(" %c", &estado2);

    printf("codigo:");
    scanf("%s", codigo2);

    printf("Cidade: ");
    scanf(" %49[^\n]", cidade2); 

    printf("População: ");
    scanf("%d", &populacao2);

    printf("area:");
    scanf("%f", &area2);

    printf("pib:");
    scanf("%f", &pib2);

    printf("pontos turisticos:");
    scanf("%d", &pontosTuristicos2);

    // Exibindo os dados da carta 1
    printf("estado: %c",estado1);
    printf("codigo: %s",codigo1);
    printf("cidade: %s\n", cidade1);
    printf("populacao: %d",populacao1);
    printf("area: %f",area1);
    printf("pib: %f", pib1);
    printf("pontos turisticos: %d\n", pontosTuristicos1);

    // Exibindo os dados da carta 2
    printf("estado: %c", estado2);
    printf("codigo: %s", codigo2);
    printf("cidade: %s\n", cidade2);
    printf("populacao: %d", populacao2);
    printf("area: %f", area2);
    printf("pib: %f", pib2);
    printf("pontos turisticos: %d\n", pontosTuristicos2);
    return 0;
}