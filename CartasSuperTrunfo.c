#include <stdio.h>

int main() {
    //Exibiçao dos dados da primeira carta.
char estado1,estado2, codigo1[4],codigo2[4],cidade1[50],cidade2[50] ; //char para caracteres.
float area1,area2,pib1,pib2; //float para numeros reais.
int populacao1,populacao2, pontos_turisticos1,pontos_turisticos2;//int para numeros inteiros.
// Função para limpar o buffer de entrada
void limparBuffer()
{
    while(getchar()!='\n');
}
printf("Insira as informções da carta 1 \n");

printf("Escolha uma letra de A a H para representar o primeiro estado. \n ");
printf("Estado: \n");
scanf("%c", &estado1); //%c para ler o caractere. 
limparBuffer();//Limpar Buffer após ler o código.

printf("Escolha entre 01 a 04 para definir o numero da carta. \n");
printf("Número: \n");
scanf(" %s", codigo1);//%2s para ler uma string de 2 caracteres.
limparBuffer();

printf("Insira o nome da primeira cidade. \n");
printf("Nome da cidade: \n");
scanf("%s", cidade1);
limparBuffer();

printf("Insira a quantidade de habitantes da cidade. \n");
printf("Populaçao: \n");
scanf("%d ",&populacao1 ); //%d para ler um numero inteiro
limparBuffer();


printf("Insira a área territorial da cidade \n ");
printf("Área km²: \n");
scanf("%f" , &area1); //%f para ler um numero real.
limparBuffer();

printf("Insira o valor do produto interno bruto da cidade \n ");
printf("PIB:  \n");
scanf("%f", &pib1);//%f para ler um numero real.
limparBuffer();

printf("Insira a quantidade de pontos turísticos da cidade \n");
printf("Pontos Turísticos:  \n");
scanf("%d" ,&pontos_turisticos1); //%d para ler numero inteiro.
limparBuffer();


   //CARTA 2 - Dados da segunda carta.
printf("Insira as informações da carta 2 \n ");

printf("Escolha uma letra de A a H para representar o segundo estado.");
printf("Estado:  \n");
scanf("%c" ,&estado2);
limparBuffer();

printf("Escolha entre 01 a 04 para definir o número da carta. \n");
printf("Número:  \n");
scanf(" %s",codigo2);
limparBuffer();

printf("Insira o nome da segunda cidade. \n");
printf("Nome da cidade:  \n");
scanf("%s",cidade2);
limparBuffer();

printf("Insira a quantidade de habitantes da cidade \n");
printf("População:  \n");
scanf("%d",&populacao2);
limparBuffer();

printf("Insira a área territorial da cidade.\n");
printf("Área km²  \n");
scanf("%f",&area2);
limparBuffer();

printf("Insira o valor do produto interno bruto da cidade. \n ");
printf("PIB:  \n");
scanf("%f",&pib2);
limparBuffer();

printf("Insira a quantidade de pontos turísticos da cidade. \n");
printf("Pontos Turísticos:  \n");
scanf("%d",&pontos_turisticos2);
limparBuffer();


float densidade_populacional1=populacao1/area1;
float densidade_populacional2=populacao2/area2;
float pibpercapita1=pib1/populacao1;
float pibpercapita2=pib2/populacao2;

printf("Cálculos da primeira Carta.\n "); //Separação da Carta 1

printf("Cálculo da Densidade populacional da primeira carta: \n");
printf("%.2f", densidade_populacional1); //pontos flutuantes 2 casas decimais

printf("Cálculo do PIB Per Capita da primeira carta: \n");
printf("%.2f" , pibpercapita1);

printf("Cálculos da segunda Carta.\n");//Separação da Carta 2

printf("Cálculo da densidade populacional da segunda carta:  \n");
printf("%.2f", densidade_populacional2);

printf("Cálculo do PIB Per Capita da segunda carta:  \n");
printf("%.2f", pibpercapita2);

//Mostrar os dados das cartas na tela.

printf("Dados da carta 1 .\n");

printf("Estado: %c \n", estado1); //%c para imprimir um caractere.

printf("Código: %s \n ",codigo1); // %c%2s para imprimir  uma string para gerar o codigo da carta.

printf("Nome da cidade: %s \n",cidade1); //%s para imprimir uma string.

printf("População:%d \n",populacao1);//%d para imprimir um número inteiro.

printf("Área: %.2f km² \n",area1);//%.2f para imprimir um número real com 2 casas decimais.

printf("PIB: %.2f bilhões de reais \n",pib1); //%,2f para imprimir um número real com 2 casas decimais.

printf("Pontos turísticos: %d \n",pontos_turisticos1);//%d para imprimir um número inteiro.

printf("Densidade Populacional: %.2f hab/km² \n ", densidade_populacional1);//%.2f para imprimir um número real com 2 casas decimais

printf("PIB Per Capita: %.2f reais \n", pibpercapita1);



printf("Dados da carta 2 .\n");

printf("Estado: %c \n",estado2);

printf("Código: %s \n",codigo2);

printf("Nome da cidade: %s \n",cidade2);

printf("População:%d \n",populacao2);

printf("Área: %.2f km² \n",area2);

printf("PIB:%.2f bilhões de reais \n",pib2);

printf("Pontos turísticos: %d \n",pontos_turisticos2);

printf("Densidade Populacional: %.2f hab/km²  \n ",densidade_populacional2);

printf("PIB Per Capita: %.2f reais \n ",pibpercapita2);

return 0;
}


