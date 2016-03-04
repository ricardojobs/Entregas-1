#include <stdio.h>

void main()
{
    int i, vetor[20] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71};
    
    for(i = 0; i < 20; i++)
        printf("Primo %d = %d\n", i+1, vetor[i]);
}