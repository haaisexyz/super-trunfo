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
    float densidade;
    float pibpcap;             // Abreviei pib per capita para nao ficar tao grande nas variaveis!

// Cidade 02


    char estado2[50];
    char codigo2[50];
    char nomecidade2[50];
    int populacao2;
    float area2;
    int turisticos2;
    float pib2;
    float densidade2;
    float pibpcap2;             // Abreviei pib per capita para nao ficar tao grande nas variaveis!  


    // Adicionar as informacoes da cidade 01

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


    // Calculo da densidade populacional(1)
        densidade = populacao / area; // Cidade 01
         
    // Calculo do pib per capita (1)
        pibpcap = pib / populacao; // Cidade 01 
         


    // Respostas cidade 01 

    printf("Estado: %s\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Cidade: %s\n", nomecidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Pontos Turisticos: %d\n", turisticos);
    printf("Densidade Populacional: %.3f hab/km²\n", densidade);
    printf("PIB per capita: %.3f reais\n", pibpcap);
    printf("Carta 01 cadastrada!\n");

    
    // Adicionar as informacoes da cidade 02

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

     // Calculo da densidade populacional (2)
    densidade2 = populacao2 / area2; // Cidade 02

    // Calculo do pib per capita (2)
    pibpcap2 = pib2 / populacao2; // Cidade 02



    // Respostas cidade 02 

    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", nomecidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Pontos Turisticos: %d\n", turisticos2);
    printf("Densidade Populacional: %.3f hab/km²\n", densidade2);
    printf("PIB per capita: %.3f reais\n", pibpcap2);
    printf("Carta 02 cadastrada!\n");
    

    // Observação pro professor: tentei usar o %s igual é mostrado no videoaula "Hora de codar" mas obtive erros na hora de compilar, as respostas eram puladas e não perguntadas, então optei pelo uso de " %[^\n]"





    return 0;
}