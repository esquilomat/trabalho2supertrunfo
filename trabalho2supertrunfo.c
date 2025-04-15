#include<stdio.h>

int main() {

    char codigo,codigo2;

    char cidade[30],cidade2[30];

    int area,area2,pop,pib,turistico,pop2,pib2,turistico2;

    float densi,densi2,percap,percap2;

 

    printf("Digite os dados da primeira carta\n");
    
    printf("Entre com o codigo da cidade: \n");
    scanf(" %c",&codigo);

    printf("Entre com o nome da cidade: \n");
    scanf(" %s",&cidade);

    printf("Entre com a populacao: \n");
    scanf(" %d",&pop);

    printf("Entre com a area: \n");
    scanf (" %d",&area);

    printf("Entre com o PIB: \n");
    scanf(" %d",&pib);

    printf("Entre com o numero de pontos turisticos: \n");
            scanf(" %d",&turistico);


            printf("Digite os dados da segunda carta\n");
    
            printf("Entre com o codigo da cidade: \n");
            scanf(" %c",&codigo2);
        
            printf("Entre com o nome da cidade: \n");
            scanf(" %s",&cidade2);
        
            printf("Entre com a populacao: \n");
            scanf(" %d",&pop2);
        
            printf("Entre com a area: \n");
            scanf (" %d",&area2);
        
            printf("Entre com o PIB: \n");
            scanf(" %d",&pib2);
        
            printf("Entre com o numero de pontos turisticos: \n");
                    scanf(" %d",&turistico2);
        




        printf("Os dados da primeira carta sao:\n");

        
    printf (" O Codigo e: %c \n",codigo);

    printf(" O nome da cidade e: %s  \n",cidade);

    printf(" A populacao da cidade e: %d  \n",pop);

    printf(" A area da cidade e: %d   metros quadrados \n",area);

    printf(" O PIB e : %d \n",pib);

    printf(" O numero de pontos turisticos sao: %d \n",turistico);

    
    
    
    printf("Os dados da segunda carta sao:\n");

        
    printf (" O Codigo e: %c \n",codigo2);

    printf(" O nome da cidade e: %s  \n",cidade2);

    printf(" A populacao da cidade e: %d  \n",pop2);

    printf(" A area da cidade e: %d   metros quadrados \n",area2);

    printf(" O PIB e : %d \n",pib2);

    printf(" O numero de pontos turisticos sao: %d \n",turistico2);

    printf(" A densidade populacional do primeiro pais e: \n");

    densi =  (float)  pop/area;

    printf("%.2f\n",densi);

    printf(" PIB percapito do primeiro pais e: \n");

    percap =   (float)  pib/pop;

    printf("%.2f\n",percap);

    printf(" A densidade populacional do segundo pais e: \n");

    densi2 =  (float)   pop2/area2;

    printf("%.2f\n",densi2);

    printf(" PIB percapito do segundo pais e: \n");

    percap2 =  (float)   pib2/pop2;

    printf("%.2f\n",percap2);


    if(pop > pop2) {

        printf("A Carta vencedora e a primeira \n");
    }

    printf("A Carta vencedora e a segunda \n");







}