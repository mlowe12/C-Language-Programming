#include <stdio.h>


unsigned int reverseBits(unsigned int n)
{
    unsigned int count = sizeof(n) * 8 - 1;
    unsigned int reverse_n = n;
    
    n >>= 1;
    while(n)
    {
        reverse_n <<= 1;
        reverse_n |= n & 1;
        n >>= 1;
        --count;
    }
    reverse_n <<= count;
    
    return reverse_n;
}



int main()
{
    unsigned int reversed_n = reverseBits(11111111111111110000000000001111);
    
    printf("%u", reversed_n);
    return 0; 
    
}