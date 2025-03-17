#include "stdio.h"

int *buscar(int A[], int n, int key){
        for(int i = 0; i < n; i++)
            if(A[i] == key)
                return &A[i];
        return NULL;
        
}

int main(){

    int va[] = {-1, -2, 0, -3, 6};

    int size = sizeof(va) / sizeof(va[0]); 

    int *v = buscar(va, size, -1);

    printf("%d\n", v == NULL? -2 : *v);

    printf("%p", v);

    return 0;
}