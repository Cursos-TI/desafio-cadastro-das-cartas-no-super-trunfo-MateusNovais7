#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    
    //Primeira Carta
    char estado1;
    char codigo1 [4];
    char nomeCidade1[50]
        int populacao1;
            float area1;
            float pib1;
        int pontosturisticos1;

    //Segunda Carta
    
    char estado2;
    char codigo2;
    char nomeCidade2[50]
        int populacao2;
            float area2;
            float pib2;
        int pontosturisticos2;
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    //Dados Carta1

    printf("Digite os dados da primeira carta:\n");
    printf("Estado:\n");
        scanf(%c, estado1);
    printf("Código da Carta:\n");
        scanf(%s, codigo1);
    printf("Nome da Cidade:\n");
        scanf("%[^\n]s", nomeCidade1); //Vou ler os espaços na string
    printf("População:\n");
        scanf("%d", populacao1);
    printf("Área (KM²):\n");
        scanf("%f", &area1 );
    printf("PIB (Bílhões):\n");
        scanf("%f", &pib1);
    printf("Pontos Turisticos:")
        scanf("%d", &pontosturisticos1);

    //Dados carta 2
    
    printf("Digite os dados da primeira carta:\n");
    printf("Estado:\n");
        scanf(%c, estado2);
    printf("Código da Carta:\n");
        scanf(%s, codigo2);
    printf("Nome da Cidade:\n");
        scanf("%[^\n]s", nomeCidade2); //Vou ler os espaços na string
    printf("População:\n");
        scanf("%d", populacao2);
    printf("Área (KM²):\n");
        scanf("%f", &area2 );
    printf("PIB (Bílhões):\n");
        scanf("%f", &pib2);
    printf("Pontos Turisticos:")
        scanf("%d", &pontosturisticos2);

    // Dados carta 1

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    //Dados carta 2

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);


    return 0;
}
