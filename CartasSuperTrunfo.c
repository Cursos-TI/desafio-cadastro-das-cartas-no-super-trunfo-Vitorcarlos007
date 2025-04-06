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

    // **Cálculos dos novos atributos para a primeira carta 
    float densidade1 = populacao1 / area1;          
    float pib_per_capita1 = pib1 / populacao1;     

    // **Cálculos dos novos atributos para a segunda carta 
    float densidade2 = populacao2 / area2;          
    float pib_per_capita2 = pib2 / populacao2;     

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

    printf("Área: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada de dados para a carta 2
    printf("\nDigite os dados da carta 2:\n");

    printf("Estado: ");
    scanf(" %c", &estado2); 

    printf("Código: ");
    scanf("%s", codigo2);

    printf("Cidade: ");
    scanf(" %49[^\n]", cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Exibindo os dados da carta 1
    printf("\nDados da carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);

    // Exibindo os dados da carta 2
    printf("\nDados da carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);

    return 0;
}