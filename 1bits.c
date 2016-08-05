#include <stdio.h>

// using ansi standard C...

int hammingWeight(unsigned int n)
{
    int count = 0;
    while(n) // while true or while bitwise set
    {
        n = n&(n-1); //logical and with previous bianry number.
        ++count;
        
    }
    
    
    
    return count;
    
}


int main()
{
    int count = hammingWeight(0000000001110000110); // test case. 
    
    printf("%d\n", count);
    
}
