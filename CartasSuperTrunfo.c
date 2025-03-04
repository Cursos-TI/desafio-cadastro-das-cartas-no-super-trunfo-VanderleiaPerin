#include <stdio.h>

int main(){

char estado1[5], estado2[5];
char codigo1[5], codigo2[5];
char cidade1[20], cidade2[20];
int populacao1, populacao2;
float area1, area2;
float PIB1, PIB2;
int pontosTuristicos1, pontosTuristicos2;

// Carta 1
printf("Carta 1:\n"); 

printf("Digite a inicial do nome do estado:");
scanf("%s", &estado1);

printf("Digite o código da carta:");
scanf("%s", &codigo1);

printf("Digite o nome da cidade:");
scanf("%s", &cidade1);

printf("Digite a população:");
scanf("%i", &populacao1);

printf("Digite a área:");
scanf("%f", &area1);

printf("Digite o PIB:");
scanf("%f", &PIB1);

printf("Digite a quantidade de pontos turísticos:");
scanf("%f", &pontosTuristicos1);


//Carta 2

printf("Carta 2:\n");

printf("Digite a inicial do nome do estado:");
scanf("%s", &estado2);

printf("Digite o código da carta:");
scanf("%s", &codigo2);

printf("Digite o nome da cidade:");
scanf("%s", &cidade2);

printf("Digite a população:");
scanf("%i", &populacao2);

printf("Digite a área:");
scanf("%f", &area2);

printf("Digite o PIB:");
scanf("%f", &PIB2);

printf("Digite a quantidade de pontos turísticos:");
scanf("%f", &pontosTuristicos2);



printf("\nCarta 1:\n");
printf("Estado: %s\n", estado1);
printf("Código: %s\n", codigo1);
printf("Nome da Cidade: %s\n", cidade1);
printf("População: %i\n", populacao1);
printf("Área: %.2f\n", area1);
printf("PIB: %.2f\n", PIB1);
printf("Número de Pontos Turísticos: %i\n", pontosTuristicos1);

printf("\nCarta 2:\n");
printf("Estado: %s\n", estado2);
printf("Código: %s\n", codigo2);
printf("Nome da Cidade: %s\n", cidade2);
printf("População: %i\n", populacao2);
printf("Área: %.2f\n", area2);
printf("PIB: %.2f\n", PIB2);
printf("Número de Pontos Turísticos: %i\n", pontosTuristicos2);

return 0;
}  