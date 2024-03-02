#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float I1,I2;
    float W1 = 10, W2 = 20;
    float W3 = 20, W4 = 10;
    float W5 = 20, W6 = 20;

    float T1=25, T2=5, T3=30;
    float O1=0, O2=0, O3=0;

    float soma1=0, soma2=0, soma3=0;
    float e = 2.71828;

    printf("I1: ");
    scanf("%f", &I1);

    printf("I2: ");
    scanf("%f", &I2);

    /*printf("Base: ");
    scanf("%f", &e);*/

    soma1 = (I1 * W1) + (I2 * W2);
    /*if(soma1 > T1){
        O1=0;
    }else{
        O1=1;
    }*/

    O1 = 1 / (1 + pow(e, +10*(soma1-T1)));

    soma2 = (I1 * W3) + (I2 * W4);
    /*if(soma2 > T2){
        O2=1;
    }else{
        O2=0;
    }*/

    O2 = 1 / (1 + pow(e, -10*(soma2-T2)));

    soma3 = (O1 * W5) + (O2 * W5);
    /*if(soma3 > T1){
        O3=1;
    }else{
        O3=0;
    }*/

    O3 = 1 / (1 + pow(e, -10*(soma3-T3)));

    printf("\nValor de I1 -> %.2f e I2 -> %.2f\n", I1, I2);

    printf("\nValor de O1 -> %.2f", O1);
    printf("\nValor de O2 -> %.2f", O2);
    printf("\nValor de O3 -> %.2f\n", O3);

    return 0;
}
