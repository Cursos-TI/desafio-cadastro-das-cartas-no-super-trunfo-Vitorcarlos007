#include <stdio.h>

int main() {
    // Dados da Carta 1
    char estado1[] = "SP";
    char codigo1[] = "A01";
    char nomeCidade1[] = "São Paulo";
    unsigned long int populacao1 = 12325000;
    float area1 = 1521.11;
    float pib1 = 699.28; // bilhões de reais
    int pontosTuristicos1 = 50;

    // Dados da Carta 2
    char estado2[] = "RJ";
    char codigo2[] = "B02";
    char nomeCidade2[] = "Rio de Janeiro";
    unsigned long int populacao2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 300.50; // bilhões de reais
    int pontosTuristicos2 = 30;

    // Exibindo os dados das cartas
    printf("\n==================== CARTA 1 ====================\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\n==================== CARTA 2 ====================\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    // Comparação dos pontos turísticos
    printf("\n==================== RESULTADO DAS COMPARAÇÕES ====================\n");

    // Comparando os pontos turísticos
    if (pontosTuristicos1 > pontosTuristicos2) {
        printf("A carta vencedora é a Carta 1 - %s! (Pontos Turísticos)\n", nomeCidade1);
    } else if (pontosTuristicos2 > pontosTuristicos1) {
        printf("A carta vencedora é a Carta 2 - %s! (Pontos Turísticos)\n", nomeCidade2);
    } else {
        printf("Empate! Ambas as cidades têm o mesmo número de pontos turísticos.\n");
    }

    return 0;
}