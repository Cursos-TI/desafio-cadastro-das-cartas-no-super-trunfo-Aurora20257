#include <stdio.h>

int main(){

//Definições das informações do estado
printf("Desafio Xadrez!\n");
char estado[50];
int codigo_da_carta;
char nome_da_cidade[50];
int populacao;
float area_km2;
float pib;
int pontos_turisticos;

//Entrada de dados
printf("Estado: \n");
 scanf("%[^\n]", estado); //Permite ler espaços (Char)
  getchar(); 

printf("Digiti o Código da Carta: \n");
 scanf("%d", &codigo_da_carta); //(int)
  getchar(); 

printf("Nome da Cidade: \n");
 scanf("%[^\n]", nome_da_cidade); //Permite ler espaços (char)
 

printf("População: \n");
 scanf("%d", &populacao); //(int)

  getchar(); // Limpa o buffer do teclado

printf("Área: \n"); 
 scanf("%f", &area_km2); //(float)

  getchar(); // Limpa o buffer do teclado

printf("PIB: \n");
 scanf("%f", &pib); //(float)


printf("Número de Pontos Turísticos: \n");
 scanf("%d", &pontos_turisticos); //(int)

//Exibição dos dados coletados
printf("\n--- Dados do Estado ---\n");
printf("Estado: %s\n", estado);
printf("Código da Carta: A0%d\n", codigo_da_carta);
printf("Cidade: %s\n", nome_da_cidade);
printf("População: %d habitantes\n", populacao);
printf("Área: %.2f km²\n", area_km2);
printf("PIB: %.2f reais\n", pib);
printf("Pontos turísticos: %d\n", pontos_turisticos);

return 0;

}



