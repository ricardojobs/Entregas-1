#include <stdio.h>

void swap(int *p1, int *p2)
{
    int aux;
    
    aux = *p1;
    *p1=*p2;
    *p2=aux;
}

int main ( )
{
    int x=10;
    int y=20;
    
    printf("X: %d, y: %d\n", x, y);
    swap(&x,&y);
    printf("X: %d, y: %d\n", x, y);
    
    return 0;
}
