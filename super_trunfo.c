#include <stdio.h>

int main (){

//variáveis para a primeira carta
int NumPontoTurismo1, Populacao1;
float Area1, PIB1;
char UF1;
char Cidade1[20];
char CodCarta1[3];

//variáveis para a segunda carta
int NumPontoTurismo2, Populacao2;
float Area2, PIB2;
char UF2;
char Cidade2[20];
char CodCarta2[3];

//cadastro da primeira carta
printf("VAMOS CADASTRAR A PRIMEIRA CARTA\n");

    printf("Digite o Código da Carta: ");
    scanf("%s", &CodCarta1);

    printf("A qual Estado a carta pertence? ");
    scanf(" %c", &UF1);

    printf("Qual o nome da cidade? ");
    scanf("%s", &Cidade1);

    printf("Quantas pessoas vivem nela? ");
    scanf("%d", &Populacao1);

    printf("Qual sua área? ");
    scanf("%f", &Area1);

    printf("Quantos pontos turísticos ela possui? ");
    scanf("%d", &NumPontoTurismo1); 

    printf("O PIB dela é ");
    scanf("%f", &PIB1);

    printf("\n");
    printf("------------------------------------------------\n");
    printf("\n");
    

//cadastro da segunda carta
        printf("AGORA É A VEZ DA SEGUNDA CARTA\n");

            printf("Digite o Código da Carta: ");
            scanf("%s", &CodCarta2);

            printf("A qual Estado a carta pertence? ");
            scanf(" %c", &UF2);

            printf("Qual o nome da cidade? ");
            scanf("%s", &Cidade2);

            printf("Quantas pessoas vivem nela? ");
            scanf("%d", &Populacao2);

            printf("Qual sua área? ");
            scanf("%f", &Area2);

            printf("Quantos pontos turísticos ela possui? ");
            scanf("%d", &NumPontoTurismo2); 

            printf("O PIB dela é ");
            scanf("%f", &PIB2);
    
    printf("\n");
    printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
    printf("\n");

//Impressão dos dados da primeira carta
printf("CARTA 1\n");
printf("Estado: %c\n", UF1);
printf("Código: %s\n", CodCarta1);
printf("Nome da Cidade: %s\n", Cidade1);
printf("População: %d\n", Populacao1);
printf("Área: %.2fKm²\n", Area1);
printf("PIB: %.2f bilhões de Reais\n", PIB1);
printf("Número de Pontos Turísticos: %d\n", NumPontoTurismo1);

printf("\n");

//Impressão dos doas da segunda carta
printf("CARTA 2\n");
printf("Estado: %c\n", UF2);
printf("Código: %s\n", CodCarta2);
printf("Nome da Cidade: %s\n", Cidade2);
printf("População: %d\n", Populacao2);
printf("Área: %.2fKm²\n", Area2);
printf("PIB: %.2f bilhões de Reais\n", PIB2);
printf("Número de Pontos Turísticos: %d\n", NumPontoTurismo2);

return 0;

}