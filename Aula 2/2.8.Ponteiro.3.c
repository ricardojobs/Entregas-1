#include <stdio.h>


void func(int *a){
    int i;
    int tmp;

    
    for(i=0;i<5;i++){
     
        tmp = *(a+i);
     
        printf("%d ", tmp );
    
    }
    
}


int main ( )
{
    int teste[] = {9,8,7,6,5,4,3,2,1,0};
    func(teste);
    
}
