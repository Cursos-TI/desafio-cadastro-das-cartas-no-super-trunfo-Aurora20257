#include <stdio.h>


/* 🎮 Nível Novato
No nível Novato, você iniciará criando o sistema básico do jogo Super Trunfo com o tema "Países". As cartas serão divididas por estados, cada um com quatro cidades.

Cada país será dividido em oito estados, identificados pelas letras de A a H. Cada estado terá quatro cidades, numeradas de 1 a 4. A combinação da letra do estado 
e o número da cidade define o código da carta (por exemplo, A01, A02, B01, B02).

🚩 Objetivo:
Criar cartas representando cidades, contendo as seguintes propriedades:
População
Área
PIB
Número de pontos turísticos

⚙️ Funcionalidades do Sistema:
O sistema permitirá ao usuário cadastrar cartas de cidades, inserindo manualmente os dados via terminal de comando.
Após o cadastro, o sistema exibirá os dados de cada cidade de forma clara e organizada.

📥 Entrada e 📤 Saída de Dados:
O usuário insere os dados de cada carta interativamente.
Após o cadastro, os dados são exibidos com todas as propriedades da cidade, uma por linha.*/


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
printf("\n--- Dados do Estado ---\n"); //Exibição de Títulos
printf("Estado: %s\n", estado); // (Char)
printf("Código da Carta: A0%d\n", codigo_da_carta); // (Int)
printf("Cidade: %s\n", nome_da_cidade); // (Char)
printf("População: %d habitantes\n", populacao); // (Int)
printf("Área: %.2f km²\n", area_km2); // (float)
printf("PIB: %.2f reais\n", pib); // (float)
printf("Pontos turísticos: %d\n", pontos_turisticos); // (Int)


/*🛡️ Nível Aventureiro
No nível Aventureiro, você expandirá o sistema para incluir propriedades calculadas, permitindo uma análise mais detalhada das cartas.

🆕 Diferença em relação ao Nível Novato:

Novas Propriedades Calculadas:
Densidade Populacional: População dividida pela área da cidade.
PIB per Capita: PIB total dividido pela população.

⚙️ Funcionalidades do Sistema:
O sistema agora calculará automaticamente a Densidade Populacional e o PIB per Capita com base nos dados inseridos.
Essas novas propriedades serão adicionadas às informações exibidas para cada cidade.

📥 Entrada e 📤 Saída de Dados:
O usuário continua inserindo os dados de cada carta interativamente.
O sistema exibirá os dados, incluindo as novas propriedades calculadas, de forma clara e organizada.*/


//Densidade Populacional: População dividida pela área da cidade.
float densidade_populacional = populacao / area_km2; // (int = populacao; float = area_km2;)

//PIB per Capita: PIB total dividido pela população.
float pib_per_capita = pib / populacao; // (int = populacao; float = pib;)

// Exebição de dados Aventureiro
printf("\n---Exibição do cálculo---\n"); //Exibição dSãoe Título
printf("Densidade Populacional: %.2f hab/km2\n", densidade_populacional); // (float)
printf("PIB per capita: %.2f reis/hab\n", pib_per_capita); // (float)


return 0;

}



