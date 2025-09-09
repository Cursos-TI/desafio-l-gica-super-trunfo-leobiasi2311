#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
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

    
       char estado1[50];
       char codigo1[50];
       char nome1[50];
       unsigned long int Populacao1;
       float area1;
       float pib1;
       int pontos1;
       char estado2[50];
       char codigo2[50];
       char nome2[50];
       unsigned long int Populacao2;
       float area2;
       float pib2;
       int pontos2;
       float densidade1, densidade2;
       float capita1, capita2;
       float superpoder1, superpoder2;
       int comparacao;

        printf ("Digite os dados da Carta 1: \n");

        printf ("Digite o Estado 1: \n");
        scanf("%s", estado1);

        printf("Digite o Código da carta 1: \n");
        scanf("%s", codigo1);

        printf("Digite o Nome da Cidade 1: \n");
        scanf("%s", nome1);

        printf("Digite a População da Cidade 1: \n");
        scanf("%lu", &Populacao1);

        printf("Digite a Area da Cidade 1 (em km²): \n");
        scanf("%f", &area1);

        printf("Digite o PIB da Cidade 1: \n");
        scanf("%f", &pib1);

        printf("Digite o número de Pontos turisticos da cidade 1: \n");
        scanf("%d", &pontos1);
        
        printf ("\nDigite os dados da Carta 2: \n");

        printf ("Digite o Estado 2: \n");
        scanf("%s", estado2);

        printf("Digite o Código da carta 2: \n");
        scanf("%s", codigo2);

        printf("Digite o Nome da Cidade 2: \n");
        scanf("%s", nome2);

        printf("Digite a População da Cidade 2: \n");
        scanf("%lu", &Populacao2);

        printf("Digite a Area da Cidade 2 (em km²): \n");
        scanf("%f", &area2);

        printf("Digite o PIB da Cidade 2: \n");
        scanf("%f", &pib2);

        printf("Digite o número de Pontos turisticos da cidade 2: \n");
        scanf("%d", &pontos2);




        densidade1 = Populacao1 / area1;
        densidade2 = Populacao2 /  area2;

        capita1 = (float) pib1 / Populacao1;
        capita2 = (float) pib2 / Populacao2;

        printf("\nCarta 1: \nEstado: %s\nCódigo da carta: %s\n", estado1, codigo1);
        printf("Nome da Cidade: %s\nPopulação: %lu\n", nome1, Populacao1);
        printf("Área: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\n", area1, pib1, pontos1);
        printf("Densidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais\n", densidade1, capita1);
       
        printf("\nCarta 2: \nEstado: %s\nCódigo da carta: %s\n", estado2, codigo2);
        printf("Nome da Cidade: %s\nPopulação: %lu\n", nome2, Populacao2);
        printf("Área: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\n", area2, pib2, pontos2);
        printf("Densidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais\n", densidade2, capita2);

        //calculo superpoder
        superpoder1 = Populacao1 + area1 + pib1 + pontos1 + capita1 + (1 / densidade1);
        superpoder2 = Populacao2 + area2 + pib2 + pontos2 + capita2 + (1 / densidade2);

        //comparações em if-else
        printf("\nComparação de Cartas:\n");
        printf("Escolha qual o atributo deseja comparar:\n");
        printf("1. Nome do país\n");
        printf("2. População\n");
        printf("3. Área\n");
        printf("4. PIB\n");
        printf("5. Número de pontos turísticos\n");
        printf("6. Densidade demográfica\n");
        scanf("%d", &comparacao);
        switch (comparacao)
        {
        case 1:
        if(nome1 > nome2){
            printf("Nome: Carta 1 venceu!\n");
        } else if (nome1 < nome2)
        {
            printf("Nome: Carta 2 venceu!\n");
        } else{ printf("Empate!\n");     
        }
        break;
        case 2:
        if (Populacao1 > Populacao2){
            printf("População: Carta 1 venceu!\n");
        } else if (Populacao1 < Populacao2){
            printf("População: Carta 2 venceu!\n");
        } else{
            printf("Empate\n");
        }
        break;
        case 3:
        if (area1 > area2){
            printf("Área: Carta 1 venceu!\n");
        } else if (area1 < area2){
            printf("Área: Carta 2 venceu!\n");
        } else{
            printf("Empate!\n");
        }
        break;
        case 4:
        if (pib1 > pib2){
            printf("PIB: Carta 1 venceu!\n");
        } else if (pib1 < pib2){
            printf("PIB: Carta 2 venceu!\n");
        } else{
            printf("Empate!\n");
        }
        break;
        case 5:
        if (pontos1 > pontos2){
            printf("Pontos Turísticos: Carta 1 venceu!\n");
        } else if (pontos1 < pontos2){
            printf("Pontos Turísticos: Carta 2 venceu!\n");
        } else {
            printf("Empate!\n");
        }
        break;
        case 6:
        if (densidade2 > densidade1){
            printf("Densidade demográfica: Carta 1 venceu!\n");
        } else if (densidade2 < densidade1){
            printf("Densidade demográfica: Carta 2 venceu!\n");
        } else {
            printf("Empate!\n");
        }
        break;
        case 7:
        if (superpoder1 > superpoder2){
            printf("Super poder: Carta 1 venceu!\n");
        } else if (superpoder1 < superpoder2){
            printf("Super poder: Carta 2 venceu!\n");
        } else{
            printf("Empate!\n");
        }
        break;
        default:
        printf("Opção inválida!\n");
            break;
        }
        return 0;
    }
    