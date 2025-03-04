#include <stdio.h>

int main() {
    //Exibiçao dos dados da primeira carta.
char estado1,estado2, codigo1[4],codigo2[4],cidade1[50],cidade2[50] ; //char para caracteres.
float area1,area2,pib1,pib2; //float para numeros reais.
int populacao1,populacao2, pontos_turisticos1,pontos_turisticos2;//int para numeros inteiros.
printf("Insira as informções da carta 1 \n");

printf("Escolha uma letra de A a H para representar o primeiro estado. \n ");
printf("Estado: ");
scanf("%c", &estado1);
printf("Estado : %c \n", estado1);//%c para ler o caractere.

printf("Escolha entre 01 a 04 para definir o numero da carta. \n");
printf("Número: ");
scanf(" %2s", codigo1);//%2s para ler uma string de 2 caracteres.

printf("Insira o nome da primeira cidade. \n");
printf("Nome da cidade: ");
scanf("%s", &cidade1); // para ler a string.

printf("Insira a quantidade de habitantes da cidade. \n");
printf("Populaçao: ");
scanf("%d ",&populacao1); //%d para ler um numero inteiro

printf("Insira a área territorial da cidade \n ");
printf("Área km²: ");
scanf("%f" , &area1); //%f para ler um numero real.

printf("Insira o valor do produto interno bruto da cidade \n ");
printf("PIB:  ");
scanf("%f", &pib1);//%f para ler um numero real.

printf("Insira a quantidade de pontos turísticos da cidade \n");
printf("Pontos Turísticos:  "novos);
scanf("%d" ,&pontos_turisticos1); //%d para ler numero inteiro.

//Exibição de  dados 
float densidade_populacional1,densidade_populacional2,pibpercapita1,pibpercapita2;
float x1=populacao1;
float x2=populacao2;
float y2=area2;
float y1=area1;
float densidade_populacional1=x1/y1;//Divisão de dois pontos flutuantes
float densidade_populacional2=x2/y2;
float a1=pib1;
float a2=pib2;
float b1=populacao1;     
float b2=populacao2;      
float pibpercapita1=a1/b1;
float pibpercapita2=a2/b2;

plrintf("Caculo da densidade populacional da cidade.");//A densidade populacional é poopulação dividida pela area para obter o número de habitantes por quilômetro quadrado.
densidade_populacional1=populacao1/area1;
printf("A densidade populacional é: %.2f \n",habitantes/km²);

printf("Calculo do PIB Per Capita.");//O PIB Per Capita é PIB da cidade dividido pela população indicando a riqueza média por pessoa na cidade.
pibpercapita1=pib1/populaca, pib1;
printf("PIB Per Capita é : %.2f \nreais.");

   //CARTA 2 - Dados da segunda carta.
printf("Insira as informações da carta 2 \n ");

printf("Escolha uma letra de A a H para representar o segundo estado.");
printf("Estado:  ");
scanf("%c" ,&estado2);

printf("Escolha entre 01 a 04 para definir o número da carta. \n");
printf("Número:  ");
scanf(" %2s",codigo2);

printf("Insira o nome da segunda cidade. \n");
printf("Nome da cidade:  ");
scanf("%s", &cidade2);

printf("Insira a quantidade de habitantes da cidade \n");
printf("População:  ");
scanf("%d",&populacao2);

printf("Insira a área territorial da cidade.\n");
printf("Área km²  ");
scanf("%f",&area2);

printf("Insira o valor do produto interno bruto da cidade. \n ");
printf("PIB:  ");
scanf("%f",&pib2);

printf("Insira a quantidade de pontos turísticos da cidade. \n");
printf("Pontos Turísticos:  ");
scanf("%d",&pontos_turisticos2);



//Mostrar os dados das cartas na tela.
printf("Dados da carta 1 .");

printf("Estado: '%c' \n", estado1); //%c para imprimir um caractere.
printf("Código: %c%2s \n ",codigo1); // %c%2s para imprimir  uma string para gerar o codigo da carta.
printf("Nome da cidade: %s",cidade1); //%s para imprimir uma string.
printf("População:%d \n",populacao1);//%d para imprimir um numero inteiro.
printf("Área: %.2f km² \n",area1);//%.2f para imprimir um numero real com 2 casas decimais.
printf("PIB: %,2f bilhões de reais \n",pib1); //%,2f para imprimir um número real com 2 casas decimais.
printf("Pontos turísticos: %d \n",pontos_turisticos1);//%d para imprimir um número inteiro.
print("Densidade Populacional: ")


printf("Dados da carta 2 .");

printf("Estado: '%c' \n",estado2);
printf("Código: %c%2s \n",codigo2);
printf("Nome da cidade: %s",cidade2);
printf("População:%d \n",populacao2);
printf("Área: %.2f km² \n",area2);
printf("PIB:%,2f bilhões de reais \n",pib2);
printf("Pontos turísticos: %d \n",pontos_turisticos2);

return 0;
}


