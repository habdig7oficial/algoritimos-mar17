#include "stdio.h"

int reverse(int A[], int n){
    int aux;
    for(int i = 0; i < n / 2; i++){
        printf("A[%d] = %d; A[%d] = %d;\n", i, A[i], n - (i + 1), A[n - (i + 1)]);
        aux = A[i];
        A[i] = A[n - (i + 1)];
        A[n - (i + 1)] = aux;
    }
        
}

int main(){

    int va[] = {-1, -2, 0, -3, 6};

    int size = sizeof(va) / sizeof(va[0]); 

    reverse(va, size);

    printf("-------\n");
    
    for(int i = 0; i < size; i++)
        printf("%d\n", va[i]);

    return 0;
}