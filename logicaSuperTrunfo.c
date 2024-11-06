#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.


int main() {
    printf("Países.\n Cidade\n");

    // Variáveis das cartas da primeira cidade
    char codigo1[5];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    // Cadastro da primeira cidade
    printf("Cadastro da cidade 1:\n");
    printf("Digite o código da cidade: ");
    scanf("%s", codigo1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade (em milhões): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Exibir os dados da primeira cidade
    printf("\nDados da cidade %s:\n", codigo1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f milhões\n", pib1);
    printf("Pontos turísticos: %d\n\n", pontos_turisticos1);

    // Variáveis das cartas da segunda cidade
    char codigo2[5];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    // Cadastro da segunda cidade
    printf("Cadastro da cidade 2:\n");
    printf("Digite o código da cidade: ");
    scanf("%s", codigo2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade (em milhões): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Exibir os dados da segunda cidade
    printf("\nDados da cidade %s:\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f milhões\n", pib2);
    printf("Pontos turísticos: %d\n\n", pontos_turisticos2);

    // Escolha do critério de comparação
    int criterio;
    printf("Escolha o critério para comparação:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Densidade Populacional\n5 - Pontos Turísticos\n");
    printf("Digite o número do critério: ");
    scanf("%d", &criterio);

    // Lógica de comparação
    if (criterio == 1) { // População
        if (populacao1 > populacao2)
            printf("A cidade %s vence com maior população.\n", codigo1);
        else if (populacao1 < populacao2)
            printf("A cidade %s vence com maior população.\n", codigo2);
        else
            printf("Empate na população.\n");

    } else if (criterio == 2) { // Área
        if (area1 > area2)
            printf("A cidade %s vence com maior área.\n", codigo1);
        else if (area1 < area2)
            printf("A cidade %s vence com maior área.\n", codigo2);
        else
            printf("Empate na área.\n");

    } else if (criterio == 3) { // PIB
        if (pib1 > pib2)
            printf("A cidade %s vence com maior PIB.\n", codigo1);
        else if (pib1 < pib2)
            printf("A cidade %s vence com maior PIB.\n", codigo2);
        else
            printf("Empate no PIB.\n");

    } else if (criterio == 4) { // Densidade populacional (menor vence)
        float densidade1 = populacao1 / area1;
        float densidade2 = populacao2 / area2;

        if (densidade1 < densidade2)
            printf("A cidade %s vence com menor densidade populacional.\n", codigo1);
        else if (densidade1 > densidade2)
            printf("A cidade %s vence com menor densidade populacional.\n", codigo2);
        else
            printf("Empate na densidade populacional.\n");

    } else if (criterio == 5) { // Pontos turísticos
        if (pontos_turisticos1 > pontos_turisticos2)
            printf("A cidade %s vence com mais pontos turísticos.\n", codigo1);
        else if (pontos_turisticos1 < pontos_turisticos2)
            printf("A cidade %s vence com mais pontos turísticos.\n", codigo2);
        else
            printf("Empate nos pontos turísticos.\n");
    } else {
        printf("Critério inválido.\n");
    }

    return 0;
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

