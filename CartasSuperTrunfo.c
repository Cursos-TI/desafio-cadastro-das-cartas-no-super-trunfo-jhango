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
    int populacao, populacao2, pontosturisticos, pontosturisticos2, opcao, opcao2, resultado1, resultado2; // Variavel opcao serve para selecionar opcao de duelo
    float area, area2, pib, pib2, densidadep, densidadep2, pibpc, pibpc2, inversodensidade, inversodensidade2, poder, poder2; // densidadep = densidade populacional.  pibpc = pib per capita
    
    
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

    // Calculo do pip per capita e densidade populacional
    pibpc = pib / populacao;
    densidadep = populacao / area;
    inversodensidade = 1 / densidadep;
    poder = populacao + pontosturisticos + area + pib + inversodensidade + pibpc;
    
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

    // Calculo do pip per capita e densidade populacional
    pibpc2 = pib2 / populacao2;
    densidadep2 = populacao2 / area2;
    inversodensidade2 = 1 / densidadep2;
    poder2 = populacao2 + pontosturisticos2 + area2 + pib2 + inversodensidade2 + pibpc2;

    
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
    printf("DENSIDADE POPULACIONAL: %.2f\n", densidadep);
    printf("PIB PER CAPTA: %.2f\n", pibpc);

    //Carta 2
    printf("CARTA 2:\n");
    printf("ESTADO: %c\n", estado2);
    printf("CODIGO: %s\n", codigo2);
    printf("CIDADE: %s\n", nome2);
    printf("POPULAÇÃO: %d\n", populacao2);
    printf("PIB: %.2f\n", pib2);
    printf("ÁREA: %.2f km²\n", area2);
    printf("PONTOS TURÍSTICO: %d\n", pontosturisticos2);
    printf("DENSIDADE POPULACIONAL: %.2f\n", densidadep2);
    printf("PIB PER CAPTA: %.2f\n", pibpc2);
    
    /*Duelo das cartas
    printf("DUELO DAS CARTAS: resultado 1 indica verdadeiro, resultado 2 indica falso.\n");
    printf("População da Carta 1 é maior? %d\n", populacao > populacao2);
    printf("PIB da Carta 1 é maior? %d\n", pib > pib2);
    printf("Área da Carta 1 é maior? %d\n", area > area2);
    printf("Pontos turísticos da Carta 1 é maior? %d\n", pontosturisticos > pontosturisticos2);
    printf("Densidade populacional da Carta 1 é menor? %d\n", densidadep < densidadep2);
    printf("PIB PER CAPTA da Carta 1 é maior? %d\n", pibpc > pibpc2);
    printf("Super Poder da Carta 1 é maior? %d\n", poder > poder2);
    */
    
    //Duelo das cartas aprimorado com escolha de atributo a ser comparado

    printf("=== DUELO DAS CARTAS ===\n");
    printf("Escolha o atributo das cartas a ser comparado! \n");
    printf("Digite 1 para comparar POPULAÇÃO \n");
    printf("Digite 2 para comparar PIB \n");
    printf("Digite 3 para comparar ÁREA \n");
    printf("Digite 4 para comparar PONTOS TURÍSTICOS \n");
    printf("Digite 5 para comparar DENSIDADE POPULACIONAL \n");
    printf("Digite 6 para comparar PIB PER CAPTA \n");
    printf("Digite 7 para comparar SUPER PODER \n");
    scanf("%d", &opcao);

    // Comparação original com IF será substituida por operador ternario que na minha opinião não é o indicado.
    /*
    switch (opcao)
    {
    case 1:
        printf("=== Categoria POPULAÇÃO: ===\n");
        printf("%s: %d habitantes\n", nome, populacao);
        printf("%s: %d habitantes\n", nome2, populacao2);
        if (populacao > populacao2) {
            printf("VENCEDOR: %s com %d \n", nome, populacao);
        } else if (populacao < populacao2) {
            printf("VENCEDOR: %s com %d \n", nome2, populacao2);
        } else {
            printf("EMPATE");
        }
    break;
    case 2:
        printf("=== Categoria PIB: ===\n");
        printf("%s: %.2f \n", nome, pib);
        printf("%s: %.2f \n", nome2, pib2);
        if (pib > pib2) {
            printf("VENCEDOR: %s com %.2f \n", nome, pib);
        } else if (pib < pib2) {
            printf("VENCEDOR: %s com %.2f \n", nome2, pib2);
        } else {
            printf("EMPATE");
        }
    break;
    case 3:
        printf("=== Categoria ÁREA: ===\n");
        printf("%s: %.2f Kilometros quadrados\n", nome, area);
        printf("%s: %.2f Kilometros quadrados\n", nome2, area2);
        if (area > area2) {
            printf("VENCEDOR: %s com %.2f \n", nome, area);
        } else if (area < area2) {
            printf("VENCEDOR: %s com %.2f \n", nome2, area2);
        } else {
            printf("EMPATE");
        }
    break;
    case 4:
        printf("=== Categoria PONTOS TURÍSTICOS: ===\n");
        printf("%s: %d Pontos turísticos\n", nome, pontosturisticos);
        printf("%s: %d pontos turísticos\n", nome2, pontosturisticos2);
        if (pontosturisticos > pontosturisticos2) {
            printf("VENCEDOR: %s com %d \n", nome, pontosturisticos);
        } else if (pontosturisticos < pontosturisticos2) {
            printf("VENCEDOR: %s com %d \n", nome2, pontosturisticos2);
        } else {
            printf("EMPATE");
        }
    break;
    case 5:
        printf("=== Categoria DENSIDADE POPULACIONAL: ===\n");
        printf("%s: %.2f habitantes por metro quadrado\n", nome, densidadep);
        printf("%s: %.2f habitantes por metro quadrado\n", nome2, densidadep2);
        if (densidadep < densidadep2) {
            printf("VENCEDOR: %s com %.2f \n", nome, densidadep);
        } else if (densidadep > densidadep2) {
            printf("VENCEDOR: %s com %.2f \n", nome2, densidadep2);
        } else {
            printf("EMPATE");
        }           
    break;
    case 6:
        printf("=== Categoria PIB PER CAPTA: ===\n");
        printf("%s: %.2f pib per capta\n", nome, pibpc);
        printf("%s: %.2f pib per capta\n", nome2, pibpc2);
        if (pibpc > pibpc2) {
            printf("VENCEDOR: %s com %.2f \n", nome, pibpc);
        } else if (pibpc < pibpc2) {
            printf("VENCEDOR: %s com %.2f \n", nome2, pibpc2);
        } else {
            printf("EMPATE");
        }
    break;
    case 7:
        printf("=== Categoria SUPER PODER: ===\n");
        printf("%s: %.2f super poder\n", nome, poder);
        printf("%s: %.2f super poder\n", nome2, poder2);
        if (poder > poder2) {
            printf("VENCEDOR: %s com %.2f \n", nome, poder);
        } else if (poder < poder2) {
            printf("VENCEDOR: %s com %.2f \n", nome2, poder2);
        } else {
            printf("EMPATE");
        }
    break;
    default:
        printf("OPÇÃO INVÁLIDA");
    }
    */

    //Nova versão de comparação de atributos utilizando operador ternário (exigência do desafio Mestre)
    //Duelo do primeiro atributo
    switch (opcao)
    {
    case 1:
        printf("=== Categoria POPULAÇÃO: ===\n");
        printf("%s: %d habitantes\n", nome, populacao);
        printf("%s: %d habitantes\n", nome2, populacao2);
        resultado1 = populacao > populacao2 ? 1 : 0;
    break;
    case 2:
        printf("=== Categoria PIB: ===\n");
        printf("%s: %.2f \n", nome, pib);
        printf("%s: %.2f \n", nome2, pib2);
        resultado1 = pib > pib2 ? 1 : 0;
    break;
    case 3:
        printf("=== Categoria ÁREA: ===\n");
        printf("%s: %.2f Kilometros quadrados\n", nome, area);
        printf("%s: %.2f Kilometros quadrados\n", nome2, area2);
        resultado1 = area > area2 ? 1 : 0;
    break;
    case 4:
        printf("=== Categoria PONTOS TURÍSTICOS: ===\n");
        printf("%s: %d Pontos turísticos\n", nome, pontosturisticos);
        printf("%s: %d pontos turísticos\n", nome2, pontosturisticos2);
        resultado1 = pontosturisticos > pontosturisticos2 ? 1 : 0;
    break;
    case 5:
        printf("=== Categoria DENSIDADE POPULACIONAL: ===\n");
        printf("%s: %.2f habitantes por metro quadrado\n", nome, densidadep);
        printf("%s: %.2f habitantes por metro quadrado\n", nome2, densidadep2);
        resultado1 = densidadep < densidadep2 ? 1 : 0;
    break;
    case 6:
        printf("=== Categoria PIB PER CAPTA: ===\n");
        printf("%s: %.2f pib per capta\n", nome, pibpc);
        printf("%s: %.2f pib per capta\n", nome2, pibpc2);
        resultado1 = pibpc > pibpc2 ? 1 : 0;
    break;
    case 7:
        printf("=== Categoria SUPER PODER: ===\n");
        printf("%s: %.2f super poder\n", nome, poder);
        printf("%s: %.2f super poder\n", nome2, poder2);
        resultado1 = poder > poder2 ? 1 : 0;
    break;
    default:
        printf("OPÇÃO INVÁLIDA");
    }

    //Duelo do segundo atributo
    printf("=== DUELO DAS CARTAS ===\n");
    printf("Escolha o segundo atributo das cartas a ser comparado! \n");
    printf("Digite 1 para comparar POPULAÇÃO \n");
    printf("Digite 2 para comparar PIB \n");
    printf("Digite 3 para comparar ÁREA \n");
    printf("Digite 4 para comparar PONTOS TURÍSTICOS \n");
    printf("Digite 5 para comparar DENSIDADE POPULACIONAL \n");
    printf("Digite 6 para comparar PIB PER CAPTA \n");
    printf("Digite 7 para comparar SUPER PODER \n");
    scanf("%d", &opcao2);

    if (opcao == opcao2) {
        printf("Opção de atributo repetida! Recomece o jogo!");
    } else{
        switch (opcao2)
        {
        case 1:
            printf("=== Categoria POPULAÇÃO: ===\n");
            printf("%s: %d habitantes\n", nome, populacao);
            printf("%s: %d habitantes\n", nome2, populacao2);
            resultado2 = populacao > populacao2 ? 1 : 0;
        break;
        case 2:
            printf("=== Categoria PIB: ===\n");
            printf("%s: %.2f \n", nome, pib);
            printf("%s: %.2f \n", nome2, pib2);
            resultado2 = pib > pib2 ? 1 : 0;
        break;
        case 3:
            printf("=== Categoria ÁREA: ===\n");
            printf("%s: %.2f Kilometros quadrados\n", nome, area);
            printf("%s: %.2f Kilometros quadrados\n", nome2, area2);
            resultado2 = area > area2 ? 1 : 0;
        break;
        case 4:
            printf("=== Categoria PONTOS TURÍSTICOS: ===\n");
            printf("%s: %d Pontos turísticos\n", nome, pontosturisticos);
            printf("%s: %d pontos turísticos\n", nome2, pontosturisticos2);
            resultado2 = pontosturisticos > pontosturisticos2 ? 1 : 0;
        break;
        case 5:
            printf("=== Categoria DENSIDADE POPULACIONAL: ===\n");
            printf("%s: %.2f habitantes por metro quadrado\n", nome, densidadep);
            printf("%s: %.2f habitantes por metro quadrado\n", nome2, densidadep2);
            resultado2 = densidadep < densidadep2 ? 1 : 0;
        break;
        case 6:
            printf("=== Categoria PIB PER CAPTA: ===\n");
            printf("%s: %.2f pib per capta\n", nome, pibpc);
            printf("%s: %.2f pib per capta\n", nome2, pibpc2);
            resultado2 = pibpc > pibpc2 ? 1 : 0;
        break;
        case 7:
            printf("=== Categoria SUPER PODER: ===\n");
            printf("%s: %.2f super poder\n", nome, poder);
            printf("%s: %.2f super poder\n", nome2, poder2);
            resultado2 = poder > poder2 ? 1 : 0;
        break;
        default:
            printf("OPÇÃO INVÁLIDA");
        }
    }

    // Comparação dos resultados
    if (resultado1 && resultado2){
        printf("Parabéns, você venceu os dois duelos de atributo e venceu o jogo!\n");
    } else if (resultado1 != resultado2){
        printf("Cada carta venceu em um duelo e houve um empate!\n");
    } else {
        printf("Infelizmente você perdeu em ambos os duelos e foi derrotado!\n");
    }

    //Despedida do jogo
    printf("@@@@ Obrigado por jogar SUPER TRUNFO em C @@@@");

    return 0;
    
}
