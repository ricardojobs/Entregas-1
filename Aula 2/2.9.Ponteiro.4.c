#include <stdio.h>

void print_array(int *a)
{
    int i;
    for (i=0;i<20; i++)
        printf("test_array[%d] = %d\n",i,*(a+i));
}


int main ( )
{
    int test_array[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};    
    print_array(test_array);
    
    return 0;
}
