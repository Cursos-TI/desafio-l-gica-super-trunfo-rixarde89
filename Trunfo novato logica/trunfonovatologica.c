#include <stdio.h>
#include <stdlib.h>
// Tema 3 Este código implementa um menu interativo para a comparação de cartas.

int main() {
// Abaixo serão declaradas as variaveis para as duas cartas.
// Carta 1
    char estado_1 = 'S', cidade_1[50] = "ARACAJU";
    char cod_carta_1[50] = "S01";
    unsigned long int populacao_1 = 628849;
    int pontosturisticos_1 = 15;
    float area_1 = 181.9, pib_1 = 18;
    float densidadepopulacional_1; 
    float pibpercapita_1;
    float superpoder_1;
// Carta 2
    char estado_2 = 'A', cidade_2[50] = "MACEIÓ";
    char cod_carta_2[50] = "A02";
    unsigned long int populacao_2 = 957916 ;
    int pontosturisticos_2 = 15 ;
    float area_2 = 509.6, pib_2 = 27;
    float densidadepopulacional_2;
    float pibpercapita_2;
    float superpoder_2;

    int opcao;
// Calculos para saber a Densidade Populacional carta 1 e 2.
    densidadepopulacional_1 = (float)populacao_1 / area_1; 
    densidadepopulacional_2 = (float)populacao_2 / area_2;

/*Calculo do  Super Poder:Para cada carta
somando todos os atributos numéricos população, área, PIB, 
número de pontos turísticos, PIB per capita e o inverso da densidade 
populacional.*/
    //superpoder_1 = (float) populacao_1 + area_1 + pib_1 + pontosturisticos_1 + pibpercapita_1 + (1 / densidadepopulacional_1);
    //superpoder_2 = (float) populacao_2 + area_2 + pib_2 + pontosturisticos_2 + pibpercapita_2 + (1 / densidadepopulacional_2);

// Exibe as cartas para o jogadores
    printf("*** JOGO SUPER TRUNFO! SEJA BEM-VINDO(a)! ***\n\n");
    printf("--- PRIMEIRA CARTA ---\n\n");
    printf("Cidade: %s\n", cidade_1);
    printf("População: %lu\n", populacao_1);
    printf("Área: %.2f Km²\n", area_1);
    printf("PIB : %.2f Bilhões de reais\n", pib_1);
    printf("Pontos turísticos: %d\n", pontosturisticos_1);
    printf("Densidade Populacional: %.2f\n\n", densidadepopulacional_1);

    printf("--- SEGUNDA CARTA ---\n\n");
    printf("Cidade: %s\n", cidade_2);
    printf("População: %lu\n", populacao_2);
    printf("Área: %.2f Km²\n", area_2);
    printf("PIB : %.2f Bilhões de reais\n", pib_2);
    printf("Pontos turísticos: %d\n", pontosturisticos_2);
    printf("Densidade Populacional: %.2f\n", densidadepopulacional_2);
    printf("---------------------------------------------------\n");
// Menu para o jogador escolher o atributo
    printf("-- Menu do Inicial --\n");
    printf("-- Escolha umas das opções abaixo: --\n");
    printf("1. Regras do jogo\n");
    printf("2. Atributo População\n");
    printf("3. Atributo Área Territorial\n");
    printf("4. Atributo PIB\n");
    printf("5. Atributo Pontos turísticos\n");
    printf("6. Atributo Densidade Populacional\n"); //vence a carta com o menor valor
    printf("7. Sair do jogo\n");
    printf("Escolha: ");
    scanf("%d", &opcao);
    printf("-----------------------------------------------------\n");

// Estrutura do menu em switch para escolher QUAL COMPARAÇÃO FAZER.
    switch (opcao){
    case 1:
        printf("--- Explicação das Regras do jogo! ---\n\n");
        printf("Vence a carta com o MAIOR valor no atributo escolhido.\n");
        printf("O atributo Densidade Populacional, a regra inverte: vence a carta com o MENOR valor.\n");
        printf("Se os valores do atributo escolhido forem idênticos nas duas cartas, o resultado da rodada é um Empate!\n");
        break;
    case 2:
        printf("*** Atributo Escolhido *** População\n");
        printf("%s: %lu habitantes\n", cidade_1, populacao_1);
        printf("%s: %lu habitantes\n", cidade_2, populacao_2);
    if (populacao_1 > populacao_2){
        printf("VENCEDOR: Carta 1 %s Venceu!\n", cidade_1);
    } else if (populacao_2 > populacao_1){
        printf("VENCEDOR: Carta 2 %s Venceu!\n", cidade_2);
    } else {
        printf("RESULTADO: Empate!\n");
    }
        break;
    case 3:
        printf("*** Atributo Escolhido *** Área Territorial\n");
        printf("%s: %.1f Km²\n", cidade_1, area_1);
        printf("%s: %.1f Km²\n", cidade_2, area_2);
    if (area_1 > area_2){
        printf("VENCEDOR: Carta 1 %s Venceu!\n", cidade_1);
    } else if (area_2 > area_1){
        printf("VENCEDOR: Carta 2 %s Venceu!\n", cidade_2);
    } else {
        printf("RESULTADO: Empate!\n");
    }
        break;
    case 4:
        printf("*** Atributo Escolhido *** PIB\n");
        printf("%s: %.2f Bilhões de reais\n", cidade_1, pib_1);
        printf("%s: %.2f Bilhões de reais\n", cidade_2, pib_2);
    if (pib_1 > pib_2){
        printf("VENCEDOR: Carta 1 %s Venceu!\n", cidade_1);
    } else if (pib_2 > pib_1){
        printf("VENCEDOR: Carta 2 %s Venceu!\n", cidade_2);
    } else {
        printf("RESULTADO: Empate!\n");
    }
        break;
    case 5:
        printf("*** Atributo Escolhido *** Pontos Turísticos\n");
        printf("%s: %d\n", cidade_1, pontosturisticos_1);
        printf("%s: %d\n", cidade_2, pontosturisticos_2);
    if (pontosturisticos_1 > pontosturisticos_2){
        printf("VENCEDOR: Carta 1 %s Venceu!\n", cidade_1);
    } else if (pontosturisticos_2 > pontosturisticos_1){
        printf("VENCEDOR: Carta 2 %s Venceu!\n", cidade_2);
    } else{
        printf("RESULTADO: Empate!\n");
    }
        break;
    case 6:
        printf("*** Atributo Escolhido *** Densidade Populacional\n"); // menor valor ganha
        printf("%s: %.2f\n", cidade_1, densidadepopulacional_1);
        printf("%s: %.2f\n", cidade_2, densidadepopulacional_2);
    if (densidadepopulacional_1 < densidadepopulacional_2){
        printf("VENCEDOR: Carta 1 %s Venceu!\n", cidade_1);
    } else if (densidadepopulacional_2 < densidadepopulacional_1){
        printf("VENCEDOR: Carta 2 %s Venceu!\n", cidade_2);
    } else{
        printf("RESULTADO: Empate!\n");
    }
        break;
    case 7:
        printf("Sair do jogo!\n");
        break;
    default:
        printf("Opção inválida! Retorne ao menu inicial.\n");       
        break;
    }

    return 0;
}
