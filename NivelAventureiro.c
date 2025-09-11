#include <stdio.h>

int main(){

char Estado1, Estado2;
char Codigo1 [4], Codigo2 [4];
char Cidade1 [20], Cidade2 [20];
int Populacao1, Populacao2;
float Area1, Area2;
float PIB1, PIB2;
int pontosTuristicos1, pontosTuristicos2;
float densidadePopulacional1, densidadePopulacional2;
float pibPerCapita1, pibPerCapita2;


printf("Digite a letra do Estado da carta 1:  \n");
scanf(" %c", &Estado1);

printf("Digite o Codigo da carta 1:  \n");
scanf("%s", &Codigo1);

printf("Digite a Cidade da carta 1:  \n");
scanf("%s[^\n]", &Cidade1);   

printf("Digite a Populacao da carta 1:  \n");
scanf("%d", &Populacao1);

printf("Digite a Area da carta 1:  \n");
scanf("%f", &Area1);

printf("Digite o PIB da carta 1:  \n");
scanf("%f", &PIB1);

printf("Digite os pontos Turisticos da carta 1:  \n");
scanf("%d", &pontosTuristicos1);

 densidadePopulacional1 = Populacao1 / Area1;
 pibPerCapita1 = PIB1 / Populacao1;

printf("Digite a letra do Estado da carta 2:  \n");
scanf(" %c", &Estado2);

printf("Digite o Codigo da carta 2:  \n");
scanf("%s", &Codigo2);

printf("Digite a Cidade da carta 2:  \n");
scanf("%s[^\n]", &Cidade2);   

printf("Digite a Populacao da carta 2:  \n");
scanf("%d", &Populacao2);

printf("Digite a Area da carta 2:  \n");
scanf("%f", &Area2);

printf("Digite o PIB da carta 2:  \n");
scanf("%f", &PIB2);

printf("Digite os pontos Turisticos da carta 2:  \n");
scanf("%d", &pontosTuristicos2);

 densidadePopulacional2 = Populacao2 / Area2;
 pibPerCapita2 = PIB2 / Populacao2;

printf("Carta 1\n");
printf("Estado: %c\n", Estado1);
printf("Código: %s\n", Codigo1);
printf("Nome da Cidade: %s\n", Cidade1); 
printf("População: %d\n", Populacao1);
printf("Área: %.2f Km²\n", Area1);
printf("PIB: %.2f bilhões de reais\n", PIB1);
printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

printf("Carta 2\n");
printf("Estado: %c\n", Estado2);
printf("Código: %s\n", Codigo2);
printf("Nome da Cidade: %s\n", Cidade2); 
printf("População: %d\n", Populacao2);
printf("Área: %.2f km²\n", Area2);
printf("PIB: %.2f bilhões de reais\n", PIB2);
printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
printf("PIB per Capita: %.2f reais\n", pibPerCapita2);


return 0;
}