#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado, estado2, codigo[04], codigo2[04], nome[20], nome2[20];
    int populacao, populacao2, pontosturisticos, pontosturisticos2;
    float area, area2, pib, pib2;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Carta 1
    printf("Digite o Estado da carta: com letra de A a H: \n");
    scanf(" %c", &estado);
    
    printf("Digite o código da carta com letra de A a H seguida de número 01 a 04. Ex: A01 \n");
    scanf("%s", &codigo);
    getchar(); // Captura o Enter deixado pelo scanf anterior
    
    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]s", &nome); // Lê a linha inteira, incluindo espaços

    printf("Digite a população da carta: \n");
    scanf("%d", &populacao);

    printf("Digite o PIB da carta: \n");
    scanf("%f", &pib);

    printf("Digite a área da carta: \n");
    scanf("%f", &area);

    printf("Digite a quantidade de pontos turísticos da carta: \n");
    scanf("%d", &pontosturisticos);

    // Carta 2
    printf("Digite o Estado da carta: com letra de A a H: \n");
    scanf(" %c", &estado2);
    
    printf("Digite o código da carta com letra de A a H seguida de número 01 a 04. Ex: A01 \n");
    scanf("%s", &codigo2);
    getchar(); // Captura o Enter deixado pelo scanf anterior
    
    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]s", &nome2); // Lê a linha inteira, incluindo espaços

    printf("Digite a população da carta: \n");
    scanf("%d", &populacao2);

    printf("Digite o PIB da carta: \n");
    scanf("%f", &pib2);

    printf("Digite a área da carta: \n");
    scanf("%f", &area2);

    printf("Digite a quantidade de pontos turísticos da carta: \n");
    scanf("%d", &pontosturisticos2);

    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    //Carta 1
    printf("CARTA 1:\n");
    printf("ESTADO: %c\n", estado);
    printf("CODIGO: %s\n", codigo);
    printf("CIDADE: %s\n", nome);
    printf("POPULAÇÃO: %d\n", populacao);
    printf("PIB: %.2f\n", pib);
    printf("ÁREA: %.2f km²\n", area);
    printf("PONTOS TURÍSTICO: %d\n", pontosturisticos);

     //Carta 2
     printf("CARTA 2:\n");
     printf("ESTADO: %c\n", estado2);
     printf("CODIGO: %s\n", codigo2);
     printf("CIDADE: %s\n", nome2);
     printf("POPULAÇÃO: %d\n", populacao2);
     printf("PIB: %.2f\n", pib2);
     printf("ÁREA: %.2f km²\n", area2);
     printf("PONTOS TURÍSTICO: %d\n", pontosturisticos2);
 
    
    return 0;
}
