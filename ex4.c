#include "stdio.h"

int max(int A[], int n){
    int vmax = A[0]; 
    for(int i = 1; i < n; i++)
        if(A[i] > vmax)
            vmax = A[i];
    return vmax;
}

int main(){

    int va[] = {-1, -2, 0, -3};

    int v = max(va, sizeof(va) / sizeof(va[0]));
    
    printf("%d", v);

    return 0;
}