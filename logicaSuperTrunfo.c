#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    char nome_estado1[30], nome_da_cidade1[30], nome_estado2[30], nome_da_cidade2[30];
    unsigned int populacao1, pontos_turisticos1, populacao2, pontos_turisticos2;
    float pib1, area1, densidade_populacional1, pib_per_capita1, superpoder1, pib2, area2, densidade_populacional2, pib_per_capita2, superpoder2;

    printf("Digite os valores da carta 1\n");

    printf("Digite o nome do Estado:\n");
    fgets(nome_estado1,30,stdin);

    printf("Digite o nome da cidade:\n");
    fgets(nome_da_cidade1,30,stdin);

    printf("Digite o valor da população na cidade de %s:\n", nome_da_cidade1);
    scanf("%u", &populacao1);

    printf("Digite o numero de pontos turiscos na cidade de %s:\n", nome_da_cidade1);
    scanf("%u", &pontos_turisticos1);

    printf("Digite o valor de PIB de %s:\n",nome_da_cidade1);
    scanf("%f", &pib1);

    printf("Digite o valor da área em km² de %s:\n", nome_da_cidade1);
    scanf("%f", &area1);

    densidade_populacional1 = populacao1/area1;

    pib_per_capita1 = pib1/populacao1;

    printf("///////////////////////////////////////////////\n");

    printf("Digite os valores da carta 2\n");

    printf("Digite o nome do Estado:\n");
    fgets(nome_estado2,30,stdin);

    printf("Digite o nome da cidade:\n");
    fgets(nome_da_cidade2,30,stdin);

    printf("Digite o valor da população em %s: \n", nome_da_cidade2);
    scanf("%u", &populacao2);

    printf("Digite o número de pontos turísticos na cidade de %s: \n",nome_da_cidade2);
    scanf("%u", &pontos_turisticos2);

    printf("Digite o valor de PIB de %s:\n", nome_da_cidade2);
    scanf("%f", &pib2);

    printf("Digite o valor da área em km² de %s:\n", nome_da_cidade2);
    scanf("%f", &area2);

    densidade_populacional2 = populacao2/area2;

    pib_per_capita2 = pib2/populacao2;

    printf("/////////////////////////////////////////////\n");
    int opcao1, opcao2;
    printf("Digite a opção que você gostaria que fosse comparada:\n");
    printf("1 = população\n");
    printf("2 = Pontos Turísticos\n");
    printf("3 = PIB\n");
    printf("4 = Área\n");
    printf("5 = Densidade Populacional\n");
    printf("6 = PIB per capita\n");
    printf("Escolha até duas opções: \n");
    printf("Opção 1: \n");
    scanf("%d", &opcao1);

    switch (opcao1) {
        case 1:

            if (populacao1 != populacao2){
                printf("A cidade de %s possue maior População.\n", (populacao1 > populacao2)?nome_da_cidade1:nome_da_cidade2);
            }else{
                printf("As cidades tem o mesmo número de População.\n");
            }
            printf("                                    \n");
            break;

        case 2:

            if (pontos_turisticos1 != pontos_turisticos2){
                printf("A cidade de %s possue mais Pontos Turísticos.\n",(pontos_turisticos1 > pontos_turisticos2)?nome_da_cidade1:nome_da_cidade2);
            }else{
                printf("As cidades tem o mesmo número de Pontos Turísticos.\n");
            }
            printf("                                    \n");

            break;

        case 3:

            if (pib1 != pib2){
                printf("A cidade de %s possue maior PIB.\n",(pib1 > pib2)?nome_da_cidade1:nome_da_cidade2);
            }else{
                printf("As cidades tem o mesmo número de PIB.\n");
            }

            printf("                                    \n");

            break;

        case 4:

            if (area1 != area2){
                printf("A cidade de %s possue maior Área.\n",(area1 > area2)?nome_da_cidade1:nome_da_cidade2);
            }else{
                printf("As cidades tem o mesmo número de Área.\n");
            }

            printf("                                    \n");

            break;

        case 5:

            if (densidade_populacional1 != densidade_populacional2){
                printf("A cidade de %s vence por ter a densidade populacional menor.\n",(densidade_populacional1 < densidade_populacional2)?nome_da_cidade1:nome_da_cidade2);
            }else{
                printf("As cidades possuem o mesmo valor de densidade populacional.\n");
            }

            printf("                                    \n");

            break;

        case 6:

            if (pib_per_capita1 != pib_per_capita2){
                printf("A cidade de %s possue maior PIB per capita.\n",(pib_per_capita1 > pib_per_capita2)?nome_da_cidade1:nome_da_cidade2);
            }else{
                printf("AS cidades tem o mesmo número de PIB per capita.\n");
            }

            printf("                                    \n");

            break;

        default:
            printf("Opção Inválida. Tente Novamente.\n");
            printf("                                    \n");
    }

    printf("Opção 2: \n");
    scanf("%d", &opcao2);

    switch (opcao2) {
        case 1:

            if (populacao1 != populacao2){
                printf("A cidade de %s possue maior População.\n", (populacao1 > populacao2)?nome_da_cidade1:nome_da_cidade2);
            }else{
                printf("As cidades tem o mesmo número de População.\n");
            }
            printf("                                    \n");
            break;

        case 2:

            if (pontos_turisticos1 != pontos_turisticos2){
                printf("A cidade de %s possue mais Pontos Turísticos.\n",(pontos_turisticos1 > pontos_turisticos2)?nome_da_cidade1:nome_da_cidade2);
            }else{
                printf("As cidades tem o mesmo número de Pontos Turísticos.\n");
            }
            printf("                                    \n");

            break;

        case 3:

            if (pib1 != pib2){
                printf("A cidade de %s possue maior PIB.\n",(pib1 > pib2)?nome_da_cidade1:nome_da_cidade2);
            }else{
                printf("As cidades tem o mesmo número de PIB.\n");
            }

            printf("                                    \n");

            break;

        case 4:

            if (area1 != area2){
                printf("A cidade de %s possue maior Área.\n",(area1 > area2)?nome_da_cidade1:nome_da_cidade2);
            }else{
                printf("As cidades tem o mesmo número de Área.\n");
            }

            printf("                                    \n");

            break;

        case 5:

            if (densidade_populacional1 != densidade_populacional2){
                printf("A cidade de %s vence por ter a densidade populacional menor.\n",(densidade_populacional1 < densidade_populacional2)?nome_da_cidade1:nome_da_cidade2);
            }else{
                printf("As cidades possuem o mesmo valor de densidade populacional.\n");
            }

            printf("                                    \n");

            break;

        case 6:

            if (pib_per_capita1 != pib_per_capita2){
                printf("A cidade de %s possue maior PIB per capita.\n",(pib_per_capita1 > pib_per_capita2)?nome_da_cidade1:nome_da_cidade2);
            }else{
                printf("AS cidades tem o mesmo número de PIB per capita.\n");
            }

            printf("                                    \n");

            break;

        default:
            printf("Opção Inválida. Tente Novamente.\n");
            printf("                                    \n");
    }


    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio


    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    //
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
