#include "stdio.h"

int buscar(int A[], int n, int key){
        for(int i = 0; i < n; i++)
            if(A[i] == key)
                return i;
        return -1;
        
}

int main(){

    int va[] = {-1, -2, 0, -3, 6};

    int size = sizeof(va) / sizeof(va[0]); 

    printf("%d",buscar(va, size, 1));

    return 0;
}