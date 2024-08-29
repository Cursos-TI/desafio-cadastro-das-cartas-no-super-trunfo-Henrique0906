#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char codigo_estado1[1], codigo_carta[3], nome_cidade1[20];
    int populacao, pontos_turisticos;
    float area, pib;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Entre A e H, digite o código do Estado: ");
    scanf("%s", &codigo_estado1);

    printf("Digite o código da carta(ex:X01): ");
    scanf("%s", &codigo_carta);

    printf("Digite o nome da cidade: ");
    scanf("%s", &nome_cidade1);

    printf("Digite a população: ");
    scanf("%d", &populacao);

    printf("Digite a area: ");
    scanf("%f", &area);

    printf("Digite a PIB: ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\nEstado: %s\n", codigo_estado1);
    printf("Código da carta: %s\n", codigo_carta);
    printf("Nome da cidade: %s\n", nome_cidade1);
    printf("População: %d\n", populacao);
    printf("Área: %fkm²\n", area);
    printf("pib: R$%f\n", pib);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos);

    return 0;
}
