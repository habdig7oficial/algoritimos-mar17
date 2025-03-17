#include "stdio.h"

int count_char(char A[], int n, char key){
    int acc = 0;
    for(int i = 0; i < n; i++)
        if(A[i] == key)
            acc++;
    return acc;
        
}

int main(){

    char str[] = "Lorem Ipsum Dolor Sit Amed";

    int size = sizeof(str) / sizeof(str[0]); 

    printf("%d",count_char(str, size, 'E'));

    return 0;
}