//
//  triangle.c
//  
//
//  Created by Michael Lowe on 6/17/16.
//
//

#include <stdio.h>

void print_triangle(int n)
{
    int count = 1;
    while(count <= n)
    {
        for(int i = 0; i < count; ++i)
        {
            printf("*");
        }
        
        printf("\n");
        
        ++count;
    }
    
    return;
}

void print_upside_down(int n)
{
    int count = n;
    while(count != 0)
    {
        for(int i = 0; i < count; ++i)
        {
            printf("*");
        }
        printf("\n");
        
        --count;
    }
    
    return;
}

int main()
{
    print_triangle(5);
    print_upside_down(5);
    return 0;
}

