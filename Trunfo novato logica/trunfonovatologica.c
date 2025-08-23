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
    
    printf("\n");    
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

    printf("\n");
/*
Calculos para saber a Densidade Populacional, Pib Per Capita e Super poder (somando todos os atributos numéricos população, área, PIB, 
número de pontos turísticos, PIB per capita e o inverso da densidade
populacional – quanto menor a densidade, maior o super poder) das Cartas 1 e 2.
*/
densidadepopulacional_1 = (float) populacao_1 / area_1;
pibpercapita_1 = (float) (pib_1 * 1000000000.0f) / populacao_1;
superpoder_1 = (float) populacao_1 + area_1 + pib_1 + pontosturisticos_1 + pibpercapita_1 + (1 / densidadepopulacional_1);

densidadepopulacional_2 = (float) populacao_2 / area_2;
pibpercapita_2 = (float) (pib_2 * 1000000000.0f) / populacao_2;
superpoder_2 = (float) populacao_2 + area_2 + pib_2 + pontosturisticos_2 + pibpercapita_2 + (1 / densidadepopulacional_2);

// Comparação das Cartas 
    if (populacao_1 > populacao_2){
        printf("Carta 1 venceu por ter maior população:(%lu) da cidade de:(%s)\n", populacao_1, cidade_1));
    } else {
        printf("Carta 2 venceu por ter maior população:(%lu) da cidade de:(%s)\n", populacao_2, cidade_2);
    }

    if (area_1 > area_2){
        printf("Carta 1 tem maior área em Km².\n");
    } else {
        printf("Carta 2 tem maior área em Km²\n");
    }

    if (pib_1 > pib_2){
        printf("Carta 1 tem maior Pib.\n");
    } else {
        printf("Carta 2 tem maior Pib\n");
    }

    if (pontosturisticos_1 > pontosturisticos_2){
        printf("Carta 1 tem mais pontos turísticos.\n");
    } else {
        printf("Carta 2 tem mais pontos turísticos.\n");
    }
 
    if (densidadepopulacional_1 < densidadepopulacional_2){
        printf("Carta 1 tem menos densidade populacional.\n");
    } else {
        printf("Carta 2 tem menos densidade populacional.\n");
    }

    if (pibpercapita_1 > pibpercapita_2){
        printf("Carta 1 tem mais Pib per capita.\n");
    } else {
        printf("Carta 2 tem mais Pib per capita.\n");
    }

    if (superpoder_1 > superpoder_2){
        printf("Carta 1 tem mais Super poder.\n");
    } else {
        printf("Carta 2 tem mais Super poder.\n");
    }

// Resultado Da carta vencendora

    return 0;
}

