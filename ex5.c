#include "stdio.h"

void vec_mul(int A[], int n, int escalar){
    for(int i = 0; i < n; i++)
        A[i] *= escalar;
}

int main(){

    int va[] = {-1, 0, 1, 2, 3, 4, 5};

    int va_size = sizeof(va) / sizeof(va[0]);

    vec_mul(va, va_size, 10);
    
    for(int i = 0; i < va_size; i++)
        printf("A[%d] = %d;\n", i, va[i]);

    return 0;
}