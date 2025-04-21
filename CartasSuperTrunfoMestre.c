#include <stdio.h>

// Desafio Super Trunfo - Murillo :) 


int main(){


// Cidade 01 


    char estado[50];
    char codigo[50];
    char nomecidade[50];
    unsigned long int populacao;
    float area;
    float pib;
    int turisticos;
    float densidade;
    float pibpcap;             // Abreviei pib per capita para nao ficar tao grande nas variaveis!
    
    


// Cidade 02


    char estado2[50];
    char codigo2[50];
    char nomecidade2[50];
    unsigned long int populacao2;
    float area2;
    int turisticos2;
    float pib2;
    float densidade2;
    float pibpcap2;             // Abreviei pib per capita para nao ficar tao grande nas variaveis!
     


    // Explicacao para o usuario + adicionar as informacoes da cidade 01

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
    scanf("%lu", &populacao);


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
    printf("Populacao: %lu\n", populacao);
    printf("Area: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Pontos Turisticos: %d\n", turisticos);
    printf("Densidade Populacional: %.3f hab/km²\n", densidade);
    printf("PIB per capita: %.3f reais\n", pibpcap);
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
    scanf("%lu", &populacao2);


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
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Pontos Turisticos: %d\n", turisticos2);
    printf("Densidade Populacional: %.3f hab/km²\n", densidade2);
    printf("PIB per capita: %.3f reais\n", pibpcap2);
    printf("\n");
    printf("Carta 02 cadastrada!\n");
    printf("\n");


    // Super poder, comparacao
    // Utilizei "C(nome da variavel)" para indicar comparação e ficar mais abreviado
    
   
    int vencedor;
    int inverso;
    float superpoder;
    float superpoder2;
    int cpopulacao = populacao > populacao2;
    int carea = area > area2;
    int cpib = pib > pib2;
    int cturisticos = turisticos > turisticos2;
    int cdensidade = densidade < densidade2;
    int cpibpcap = pibpcap > pibpcap2;
    


    superpoder = populacao + area + pib + turisticos + pibpcap;
    superpoder2 = populacao2 + area2 + pib2 + turisticos2 + pibpcap2;

    vencedor = superpoder > superpoder2;
    inverso = densidade < densidade2;

    // Exibindo resultados das comparacoes

    printf("Maior populacao: Carta %d\n", cpopulacao);
    printf("\n");
    printf("Maior area: Carta %d\n", carea);
    printf("\n");
    printf("Maior PIB: Carta %d\n", cpib);
    printf("\n");
    printf("Mais pontos turisticos: Carta %d\n", cturisticos);
    printf("\n");
    printf("Melhor densidade populacional: Carta %d\n", inverso);
    printf("\n");
    printf("Maior pib per capita: Carta %d\n", cpibpcap);
    printf("\n");
    printf("Super Poder: Carta %d\n", vencedor);
    printf("\n");
    
    





    // Observação pro professor: tentei usar o %s igual é mostrado no videoaula "Hora de codar" mas obtive erros na hora de compilar, as respostas eram puladas e não perguntadas, então optei pelo uso de " %[^\n]"
    // Como foi pedido, na aba de super poder foi referido a cidade 1 como 1 e a cidade 2 como 0




    return 0;
}