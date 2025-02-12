#include <stdio.h>

int main() {
    // Definições das informações do estado
    char estado[50];
    int populacao;
    float area;
    double pib;
    char ponto_turisticos[100];

    // Entrada de dados
    printf("Digite o nome do estado: \n");
    scanf(" %[^\n]s", estado); // Permite ler espaços
    getchar(); // Limpa o buffer do teclado

    printf("Digite a População: \n");
    scanf("%d", &populacao);
    getchar(); // Limpa o buffer do teclado

    printf("Digite a Área do estado em km²: \n");
    scanf("%f", &area);
    getchar(); // Limpa o buffer do teclado

    printf("Digite o PIB do estado em reais: \n");
    scanf("%lf", &pib);
    getchar(); // Limpa o buffer do teclado

    printf("Digite o Ponto Turístico: \n");
    scanf(" %[^\n]s", ponto_turisticos); // Permite ler espaços

    // Exibição das informações
    printf("\nInformações sobre o estado: %s\n", estado);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f\n", pib);
    printf("Ponto Turístico: %s\n", ponto_turisticos);

    return 0;
}
