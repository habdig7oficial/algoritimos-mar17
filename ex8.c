#include "stdio.h"

double media_turma(double notas[], int n){
    double sum = 0;
    for(int i = 0; i < n; i++)
        sum += notas[i];
    return sum / n;

}

int contar_acima_media(double notas[], int n, double media){
    int acc = 0;
    for(int i = 0; i < n; i++)
        if(notas[i] > media)
            acc++;

    return acc;
}

int main(){

    double notas[] = {10, 9, 8, 7, 6, 5};

    int size = sizeof(notas) / sizeof(notas[0]); 

    double med = media_turma(notas, size);


    printf("Média: %f\nAlunos Acima da Média: %d\n", med, contar_acima_media(notas, size, med));

    return 0;
}