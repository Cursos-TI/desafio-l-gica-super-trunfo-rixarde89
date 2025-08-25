#include <stdio.h>

//Tema 2 Super Trunfo de Países!
int main() {
//Abaixo serão declaradas as variaveis para as duas cartas.
    char estado_1, estado_2, cidade_1[50], cidade_2[50];
    char cod_carta_1[50], cod_carta_2[50]; 
    unsigned long int populacao_1, populacao_2;
    int pontosturisticos_1, pontosturisticos_2;
    float area_1, area_2, pib_1, pib_2;
    float densidadepopulacional_1, densidadepopulacional_2, pibpercapita_1, pibpercapita_2;
    float superpoder_1, superpoder_2;
   
//Abaixo iniciaremos a coleta de dados para a carta 1.
    printf("*** DESAFIO SUPER TRUNFO DE PAÍSES! ***\n\n");
    printf("--- CADASTRO DA PRIMEIRA CARTA ---\n\n");
    printf("Digite a letra do estado (apenas uma letra de A até H) :\n");
    scanf(" %c", &estado_1);
    printf("Digite a letra do estado com o número entre 01 a 04 para gerar o código (Ex:'A01') :\n");
    scanf("%s", cod_carta_1);
    printf("Digite o nome da cidade :\n");
    scanf("%s", cidade_1);
    printf("Digite o número de habitantes :\n");
    scanf("%lu", &populacao_1);
    printf("Digite a área territorial em quilometros quadrados :\n");
    scanf("%f", &area_1);
    printf("Digite o PIB :\n");
    scanf("%f", &pib_1);
    printf("Digite a quantidade de pontos turísticos :\n");
    scanf("%d", &pontosturisticos_1);
    printf("---------------------------------------------------\n");
     
//Abaixo iniciaremos a coleta de dados para a carta 2.    
    printf("--- CADASTRO DA SEGUNDA CARTA ---\n\n");
    printf("Digite a letra do estado (apenas uma letra de A até H) :\n");
    scanf(" %c", &estado_2);
    printf("Digite a letra do estado com o número entre 01 a 04 para gerar o código (Ex:'A01') :\n");
    scanf("%s", cod_carta_2);
    printf("Digite o nome da cidade :\n");
    scanf("%s", cidade_2);
    printf("Digite o número de habitantes :\n");
    scanf("%lu", &populacao_2);
    printf("Digite a área territorial em quilometros quadrados :\n");
    scanf("%f", &area_2);  
    printf("Digite o PIB :\n");
    scanf("%f", &pib_2);
    printf("Digite a quantidade de pontos turísticos :\n");
    scanf("%d", &pontosturisticos_2);
    printf("---------------------------------------------------\n");

//Calculos para saber a Densidade Populaciona e Pib Per Capita populacional das cartas 1 e 2.
    densidadepopulacional_1 = (float) populacao_1 / area_1;
    pibpercapita_1 = (float) (pib_1 * 1000000000.0f) / populacao_1;
    densidadepopulacional_2 = (float) populacao_2 / area_2;
    pibpercapita_2 = (float) (pib_2 * 1000000000.0f) / populacao_2; 

/*Calculo do  Super Poder:Para cada carta
somando todos os atributos numéricos população, área, PIB, 
número de pontos turísticos, PIB per capita e o inverso da densidade 
populacional*/
    superpoder_1 = (float) populacao_1 + area_1 + pib_1 + pontosturisticos_1 + pibpercapita_1 + (1 / densidadepopulacional_1);
    superpoder_2 = (float) populacao_2 + area_2 + pib_2 + pontosturisticos_2 + pibpercapita_2 + (1 / densidadepopulacional_2);

// Comparação das Cartas atributos
    printf("--- Resultado da comparação de atributos ---\n");
    printf("Carta 1: %s - População: %lu\n", cidade_1, populacao_1);
    printf("Carta 2: %s - População: %lu\n", cidade_2, populacao_2);
    printf("---------------------------------------------------\n");

// Lógica de comparação utilizando a estrutura if-else.
    printf("--- Resultado do vencedor! ---\n");
    if (populacao_1 > populacao_2){
        printf("VENCEDOR: A carta 1 %s venceu!\n", cidade_1);
    } else {
        printf("VENCEDOR: A carta 2 %s venceu!\n", cidade_2);  
    }
    
    return 0;
}