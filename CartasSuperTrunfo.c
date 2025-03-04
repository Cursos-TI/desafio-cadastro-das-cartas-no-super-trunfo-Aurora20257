# include <stdio.h>
/*"Agora, iremos revisar tudo o que foi ensinado no Super Trunfo em C: Fundamentos e Técnicas - Tema 01, 
onde aprendemos a utilizar os fundamentos e técnicas, especificadores e operadores, desenvolvendo diferentes lógicas, 
tomando decisões simples com a estrutura if, utilizando pontos flutuantes (float) e manipulando a entrada e saída de dados."*/

int main (){

char   estado1[50], estado2[50];
int    codigo_da_carta1, codigo_da_carta2;
char   nome_da_cidade1[50], nome_da_cidade2[50];
int    populacao1, populacao2;
float  area_km2_1, area_km2_2;
float  pib1, pib2;
int    pontos_turisticos1, pontos_turisticos2;


printf("\n\nCARTA1\n\n");
//Leitura do primeiro estado
printf("Estado 1: \n");
scanf(" %[^\n]", estado1);

printf("Digite o Código da Carta: \n");
scanf("%d",&codigo_da_carta1);

getchar(); // Limpa buffer antes da leitura de string com espaços
printf("Nome da Cidade: \n");
scanf(" %[^\n]", nome_da_cidade1);

printf("População: \n");
scanf("%d", &populacao1);

printf("Área: \n");
scanf("%f", &area_km2_1);

printf("PIB: \n");
scanf("%f", &pib1);

printf("Número de Pontos Turísticos: \n");
scanf("%d", &pontos_turisticos1);




// Exibição dos dados coletados
printf("\n--- Dados do Estado 1 ---\n");
printf("Estado 1: %s\n", estado1);
printf("Código da Carta: A0%d\n", codigo_da_carta1);
printf("Cidade: %s\n", nome_da_cidade1);
printf("População: %d habitantes\n", populacao1);
printf("Área: %.2f km²\n", area_km2_1);
printf("PIB: %.2f reais\n", pib1);
printf("Pontos turísticos: %d\n", pontos_turisticos1);




/*Soma total '01' dos cinco pontos importantes que indentificam o histórico de 
cada estado inserido*/
float soma_carta1 = populacao1 + area_km2_1 + pib1 + pontos_turisticos1; 




printf("\n\nCARTA2\n\n");
//Leitura do primeiro estado
printf("Estado 2: \n");
scanf(" %[^\n]", estado2);

printf("Digite o Código da Carta: \n");s
scanf("%d",&codigo_da_carta2);

getchar(); // Limpa buffer antes da leitura de string com espaços
printf("Nome da Cidade: \n");
scanf(" %[^\n]", nome_da_cidade2);

printf("População: \n");
scanf("%d", &populacao2);

printf("Área: \n");
scanf("%f", &area_km2_2);

printf("PIB: \n");
scanf("%f", &pib2);

printf("Número de Pontos Turísticos: \n");
scanf("%d", &pontos_turisticos2);




// Exibição dos dados coletados
printf("\n--- Dados do Estado 2 ---\n");
printf("Estado 2: %s\n", estado2);
printf("Código da Carta: A0%d\n", codigo_da_carta2);
printf("Cidade: %s\n", nome_da_cidade2);
printf("População: %d habitantes\n", populacao2);
printf("Área: %.2f km²\n", area_km2_2);
printf("PIB: %.2f reais\n", pib2);
printf("Pontos turísticos: %d\n", pontos_turisticos2);




/*Soma total '02' dos cinco pontos importantes que indentificam o histórico de 
cada estado inserido*/
float soma_carta2 = populacao2 + area_km2_2 + pib2 + pontos_turisticos2; 




/*Agora, iremos avaliar a comparação entre as duas cartas, somando seus valores 
e definindo o vencedor por meio das estruturas if e else, juntamente com printf*/
printf("\nSoma total de Carta 1: %.2f\n", soma_carta1);
printf("\nSoma total da Carta 2: %.2f\n", soma_carta2);
// Comparação para definir o vencendor
if (soma_carta1 > soma_carta2)
{
  printf("\nCarta 1 venceu este jogo!\n");
}
else if (soma_carta1 < soma_carta2)
{
  printf("\nCarta 2 venceu este jogo!\n");
}
else
{
  printf("\nEmpate!\n");
}
return 0;
}




















