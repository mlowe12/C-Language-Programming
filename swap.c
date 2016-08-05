//
//  swap.c
//  
//
//  Created by Michael Lowe on 6/8/16.
//
//

#include <stdio.h>

void swap(int a , int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    
    printf("During Swap: swap(): a = %d, b = %d \n", a, b);
    
    return;
}



int main()
{
    int a = 100;
    int b = 5;
    printf("Before swap: main(): a = %d, b = &d\n", a, b);
    swap(a,b);
    printf("After swamp: main(): a = %d,  b = %d \n", a, b);
    return 0;
}