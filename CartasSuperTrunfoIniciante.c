#include <stdio.h>

// Desafio Super Trunfo - Murillo :) 


int main(){


// Cidade 01 


    char estado[50];
    char codigo[50];
    char nomecidade[50];
    int populacao;
    float area;
    float pib;
    int turisticos;

// Cidade 02


    char estado2[50];
    char codigo2[50];
    char nomecidade2[50];
    int populacao2;
    float area2;
    int turisticos2;
    float pib2;                    


    // Adicionar as informacoes da cidade 01

    printf("Desafio Super Trunfo! :)\n");
    printf("\n");
    printf("Insira as informacoes da sua primeira carta");
    printf("\n");

    
    printf("Digite o nome do estado: \n");
    scanf(" %[^\n]", estado);


    printf("Digite o codigo da carta: \n");
    scanf(" %[^\n]", codigo);


    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", nomecidade);


    printf("Digite a quantidade de habitantes: \n");
    scanf("%d", &populacao);


    printf("Digite o tamanho da area: \n");
    scanf("%f", &area);


    printf("Digite o PIB: \n");
    scanf("%f", &pib);


    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &turisticos);

    // Respostas cidade 01 

    printf("Estado: %s\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Cidade: %s\n", nomecidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Pontos Turisticos: %d\n", turisticos);
    printf("\n");
    printf("Carta 01 cadastrada!\n");
    printf("\n");

    
    // Adicionar as informacoes da cidade 02

    
    printf("\n");
    printf("Insira as informacoes da sua segunda carta");
    printf("\n");

    
    printf("Digite o nome do segundo estado: \n");
    scanf(" %[^\n]", estado2);


    printf("Digite o codigo da segunda carta: \n");
    scanf(" %[^\n]", codigo2);


    printf("Digite o nome da segunda cidade: \n");
    scanf(" %[^\n]", nomecidade2);


    printf("Digite a quantidade de habitantes: \n");
    scanf("%d", &populacao2);


    printf("Digite o tamanho da segunda area: \n");
    scanf("%f", &area2);


    printf("Digite o PIB: \n");
    scanf("%f", &pib2);


    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &turisticos2);

    // Respostas cidade 02 

    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", nomecidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Pontos Turisticos: %d\n", turisticos2);
    printf("\n");
    printf("Carta 02 cadastrada!\n");
    printf("\n");

    // Observação pro professor: tentei usar o %s igual é mostrado no videoaula "Hora de codar" mas obtive erros na hora de compilar, as respostas eram puladas e não perguntadas, então optei pelo uso de " %[^\n]"



    return 0;
}
