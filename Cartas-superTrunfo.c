#include <stdio.h>

int main() {
    char estado1, estado2, codigo_carta1[4], codigo_carta2[4], nome_cidade1[20], nome_cidade2[20];
    int populacao1, populacao2, numeros_pontosTuristicos1, numeros_pontosTuristicos2;
    float area_cidade1, area_cidade2, pib_cidade1, pib_cidade2;

        printf("Olá, esse programa foi desenvolvido com a finalidade de cadastrar cartas do jogo Super Trunfo.\nPor Limitações do programa só é possivel cadastrar duas cartas por vez.\n");
        printf("Digite as informações de sua primeira carta abaixo.\n");
        printf("\n");
        printf("\n");
        //
        //
        //Seção de entrada dos dados.
        //
        //
        //Seção de cadastramento da carta 1.
        printf("Digite a primeira letra do estado que a carta possui:");
        scanf(" %c", &estado1);
        printf("Digite o codigo da carta:");
        scanf("%s", &codigo_carta1);
        printf("Digite nome da cidade da carta(sem adicionar espaço):");
        scanf("%s", &nome_cidade1);
        printf("Digite o numero da população da cidade(sem virgulas ou pontos):");
        scanf("%d", &populacao1);
        printf("Digite o numero de pontos turisticos da cidade:");
        scanf("%d", &numeros_pontosTuristicos1);
        printf("Digite a área em km² da cidade(exemplo: x.xxx):");
        scanf("%f", &area_cidade1);
        printf("Digite o PIB(Produto Interno Bruto) da cidade(exemplo: x.xxx):");
        scanf("%f", &pib_cidade1);
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("Muito bem! Você cadastrou sua primera carta com sucesso.\n");
        printf("\n");
        printf("\n");
        printf("Agora digite as informações da sua segunda carta abaixo.\n");
        printf("\n");
        printf("\n");
        //
        //
        //Seção de cadastramento da carta 2.
        printf("Digite a primeira letra do estado que a carta possui:");
        scanf(" %c", &estado2);
        printf("Digite o codigo da carta:");
        scanf("%s", &codigo_carta2);
        printf("Digite o nome da cidade(sem adicionar espaço):");
        scanf("%s", &nome_cidade2);
        printf("Digite o numero total da população(sem virgulas ou pontos):");
        scanf("%d", &populacao2);
        printf("Digite o numero total de pontos turisticos da cidade:");
        scanf("%d", &numeros_pontosTuristicos2);
        printf("Digite a área em km² total da cidade(usar ponto, exemplo: x.xxx):");
        scanf("%f", &area_cidade2);
        printf("Digite o PIB(Produto Interno Bruto) total da cidade(exemplo: x.xxx):");
        scanf("%f", &pib_cidade2);
        printf("\n");
        printf("\n"); 
        printf("Muito bem! Você cadastrou sua segunda carta com sucesso.\n");
        //
        //
        //Seção de Impressão na tela do usuario.
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("CARTA 1.\n");
        printf("Primeira letra estado da primeira carta: %c.\n", estado1);
        printf("Codigo da primeira carta: %s.\n", codigo_carta1);
        printf("Cidade da primeira carta: %s.\n", nome_cidade1);
        printf("Numero da populção da cidade: %d.\n", populacao1);
        printf("Numero de pontos turisticos da cidade: %d.\n", numeros_pontosTuristicos1);
        printf("Area da cidade em km²: %.3fkm².\n", area_cidade1);
        printf("PIB(Produto Interno Bruto) da cidade: %.3f Bilhões de reais.\n", pib_cidade1);
        printf("\n");  
        printf("CARTA 2.\n");
        printf("Primeira letra do estado da segunda carta: %c.\n", estado2);
        printf("Codigo da segunda carta: %s.\n", codigo_carta2);
        printf("Cidade da segunda carta: %s.\n", nome_cidade2);
        printf("Numero da populção da cidade: %d.\n", populacao2);
        printf("Numero de pontos turisticos da cidade: %d.\n", numeros_pontosTuristicos2);
        printf("Area da cidade em km²: %.3fkm².\n", area_cidade1);
        printf("PIB(Produto Interno Bruto) da cidade: %.3f Bilhões de reais.\n", pib_cidade2);
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        return 0;
}
