#include "stdio.h"
#include "stdbool.h"

bool sub_seq(int A[], int n, int B[], int m){

    int j = 0;
    for(int i = 0; (i < n); i++)
        if(A[i] == B[j])
            j++;

    printf("j: %d\n", j);
    
    if(j == m)
        return true;
    else 
        return false;
}

int main(){
    
    int va[] = {1,2,3,4,5,6};

    int vb[] = {2,4,5};

    int size_n = sizeof(va) / sizeof(va[0]);
    int size_m = sizeof(vb) / sizeof(vb[0]);


    bool res = sub_seq(va, size_n, vb, size_m);

    printf("%s", res? "true": "false");

    return 0;
}