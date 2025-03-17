#include "stdio.h"

int calc_escalar(int A[], int B[], int n){
    int acc = 0;
    for(int i = 0; i < n / 2; i++)
        acc += A[i] * B[i];
    return acc;
}



int main(){
    int va[3] = {0, 1, 2};
    int vb[3] = {3, 4, 5};

    int res_size = (sizeof(va) / sizeof(va[0])) * 2;

    int esc = calc_escalar(va, vb, res_size);

    printf("%d\n", esc);

    return 0;
}