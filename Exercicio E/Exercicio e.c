#include<stdio.h>
float main()
{
    float prestacao, taxa, tempo, valor;

    printf("insira o valor da prestacao: ");
    scanf("%f",&valor);
    printf("insira o valor da taxa: ");
    scanf("%f",&taxa);
    printf("insira o valor do tempo: ");
    scanf("%f",&tempo);


    prestacao=valor+(valor*(taxa/100)*tempo);
    printf("%.5f",prestacao);
}
