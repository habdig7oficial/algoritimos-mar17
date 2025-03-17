#include "stdio.h"
#include "stdbool.h"

bool palindromo(char str[], int n){
    char aux;
    for(int i = 0; i < n / 2; i++)
        if(str[i] != str[n - (i + 2)])
            return false;
    return true;
        
}

int main(){

    // 
    char str[] = "parterretrap";

    int size = sizeof(str) / sizeof(str[0]); 

    palindromo(str, size);

    printf("-------\n");
    
    for(int i = 0; i < size; i++)
        printf("str[%d] = %c; str[%d] = %c;\n", i, str[i], size - (i + 2), str[size - (i + 2)]);

    return 0;
}