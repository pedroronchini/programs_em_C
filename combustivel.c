/* Calcula a quantidade de litros de combust´ıvel gastos em uma viagem*/
#include <stdio.h>
void main()
{
    float kilometragem_por_litro, tempo_gasto, velocidade_media, distancia, quantidade_de_litros;
    printf("Digite a kilometragem por litro: ");
    scanf("%f", &kilometragem_por_litro);
    printf("Digite a o tempo gasto na viagem: ");
    scanf("%f", &tempo_gasto);
    printf("Digite a velocidade media: ");
    scanf("%f", &velocidade_media);
    distancia = tempo_gasto * velocidade_media;
    quantidade_de_litros = distancia / kilometragem_por_litro;
    printf("A distancia percorida foi de: %.2f km \n", distancia);
    printf("O consumo foi de: %.2f litros", quantidade_de_litros);

}
