
/*NÍVEL MESTRE - MODIFICADORES (SHORT). Variáveis inteira que ocupa menos memória dentro do valor permitido*/
//Apenas Teste

#include <stdio.h>

int main(){

short int numeroPequeno = 32767; // Valor máximo de short int
printf("Nùmero pequeno (Short int): %d\n", numeroPequeno);

numeroPequeno = 32768; // Valor maior que o máximo de short int
printf("Número pequeno atualizado (short int): %d\n", numeroPequeno);

//printf ("\n***TAMANHO DAS VARIÁVEIS***/n");
//printf("Shory int: %lu B - int long int: %lu B\n", sizeof(int) sizeof(short)
//printf("Float: %lu B - long double: %luB\n", sizeof(float), sizeof (short)

return 0;

}
