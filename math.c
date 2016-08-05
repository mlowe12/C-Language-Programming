//
//  math.c
//  
//
//  Created by Michael Lowe on 6/16/16.
//
//

#include <stdio.h>

void get_range(int a, int b)
{
    if(a != b)
    {
        if(a > b)
        {
            for(int i = b; i <= a; ++i)
            {
                printf("%d ", i);
            }
            
        }
        else
        {
            for(int i = a; i <= b; ++i)
            {
                printf("%d ", i);
            }
        }
        
         printf("\n");
    }
    
   
    
    else
    {
        return;
    }
}

int max(int a, int b)
{
    int max = (a > b) ? a:b;
    return max;
}
int min(int a, int b)
{
    int min = (a < b) ? a:b;
    return min;
}

void median(int a, int b, int c)
{
    int median = max(min(a,b), min(max(a,b), c));
    printf("median: %d\n", median);
}



void get_range2(int a, int b)
{
    if( a!=b )
    {
        if(b > a) // increase
        {
            for(int i = a; i <= b; ++i)
            {
                printf("%d ", i);
            }
        }
        else  //( b < a) decrease
        {
            for(int i = a; i >= b; --i)
            {
                printf("%d ", i);
            }
        }
            printf("\n");
    }
    
    else
    {
        return;
    }
}

void range_divisible_by(int a, int b, int n)
{
    if(a!=b)
    {
        if(b > a)
        {
            for(int i = a; i <= b; ++i)
            {
                //algorithm here
                
                if(i%n == 0)
                {
                    printf("%d ", i);
                }
                else
                {
                    continue;
                }
            }

            
        }
        else
        {
            for(int i = a; i >= b; --i)
            {
                //algorithm here
                if(i%n == 0)
                {
                    printf("%d ", i);
                }
                else
                {
                    continue;
                }
    
            }
      
        }
        
        printf("\n");
    }
    else
    {
        return;
    }
}


int get_length(char s[])
{
    int i = 0;
    int count;
    while(s[i] =='\0')
    {
        i = i +1;
        count = i;
    }
    
    return count;
}
void print_backwards(char s[])
{
    int count = get_length(s);
    for(int i = count; i > 0; --i)
    {
        printf("%c", s[i]);
    }
    
    return;
    
}



int main()
{
    get_range(0,5);
    get_range(5,0);
    get_range2(0,5);
    get_range2(5,0);
    range_divisible_by(0,10,2);
    median(10, 100, 50);
    char string[] = "HELLO";
    print_backwards(string);
    
    return 0;
}