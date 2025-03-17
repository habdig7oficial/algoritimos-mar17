#include "stdio.h"
#include "stdbool.h"

bool vetores_iguais(int A[], int B[], int n){
    for(int i = 0; i < n; i++)
        if(A[i] != B[i])
            return false;
    return true;
}

int main(){
    int va[4] = {0, 1, 2};
    int vb[3] = {0, 1, 2};

    bool res = vetores_iguais(va, vb, sizeof(va) / sizeof(va[0]));
    printf("%d", res);
    return 0;
}