#include "stdio.h"

void soma_vetores(int A[], int B[], int C[], int n){
    for(int i = 0; i < n / 2; i++){
        C[i] = A[i] + B[i];
        printf("A: %d; B: %d; C: %d\n", A[i], B[i], C[i]);
    }
}



int main(){
    
    int va[3] = {0, 1, 2};
    int vb[3] = {3, 4, 5};

    int res_size = (sizeof(va) / sizeof(va[0])) * 2;
    int vc[res_size];
    printf("%d\n", res_size);

    soma_vetores(va, vb, vc, res_size);

    printf("--------");
    for(int i = 0; i < res_size / 2; i++)
        printf("\n%d", vc[i]);

    printf("\n");

    return 0;
}