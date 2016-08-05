//
//
//  
//
//  Created by Michael Lowe on 6/2/16.
//  All rights reserved
//

#include <stdio.h>
#include <stdlib.h>
/*GLOBAL DECLARATIONS*/


/* BITWISE AND COUNTING */
int set_bit_count(unsigned int x)
{
    int count = 0;
    while(x)
    {
        x = x&(x-1); // logical AND between X and X-1 until x = 0 to kill loop
        ++count;
    }
    return count;
}

/* CLEAR BIT COUNT */
int clear_bit_count(unsigned int x)
{
    int count = 0;
    x = ~x; //invert x to account for zeros
    while(x)
    {
        x = x&(x-1);
        ++count;
    }
    
    return count;
}

/* INVERSION FUNCTION */
unsigned int invert(unsigned int x, int p, int n)
{
    //create a bit mask
    unsigned int bitmask = ~0;
    // shift mask by n to the right
    bitmask = bitmask << n;
    //invert mask
    bitmask = ~bitmask;
    bitmask =  bitmask << (p+1-n);
    
    int new_x = (bitmask ^ x); // XOR
    
    return new_x;
    
}

/* GET NUMBER OF BITS IN AN INT FOR SPECIFIC PLATFOR */
int get_bits()
{
    int count = 16;
    int test = 0x1 << 16;
    
    while(test)
    {
        test = test << 1;
        ++count;
        
    }
    
    return count;
}

/*GET NUMBER OF LOW BITS REQUESTED*/
unsigned int get_low_bits(unsigned int x, int n)
{
    unsigned int mask = ~(~0 << n);
    unsigned int low_bits = (x & mask);
    
    return low_bits;
    
}


unsigned int rotate_right(unsigned int x, int n)
{
    unsigned int mask;
    unsigned int low_bits;
    unsigned int new_high_bits;
    unsigned int new_low_bits;
    unsigned int result;
    
    /* create bit mask */
    mask = ~(~0 << n);
    /* extract the low bits */
    low_bits = x & mask;
    /* move the high bits to the low position */
    new_high_bits = low_bits << (get_bits()-n);
    /* LOGICAL OR */
    result = new_high_bits | new_low_bits;
    
    return result;
    
}

/* TEST FOR RUNNING INVERSION */
void run_test(unsigned int x, int p, int n)
{
    unsigned int result = invert(x,p,n);
    
    printf("the inversion of %d is %d \n", x, result);
    
    return;
}


/* TEST FUNCTION FOR RUNNING COUNT */
void test_count(unsigned int x)
{
    int set_bits = set_bit_count(x);
    printf("the number of set bits in %d is %d \n\n", x, set_bits);
    
    return;
}


/* TEST FOR RUNNING CLEAR BIT COUNT */
void clear_test(unsigned int x)
{
    int clear_bits = clear_bit_count(x);
    printf("The number of clear bits in %d is %d \n\n", x, clear_bits);
    
    return;
}


/* TEST FOR RIGHT ROTATION */
void test_rotation(unsigned int x, int n)
{
    unsigned int post = rotate_right(x,n);
    
    printf("Pre-rotation: %d\n", x);
    printf("Post-roatation: %d\n\n", post);
    
    return;
}

/*FUNCTION TO RUN LOW BIT REQUEST*/
void run_low_bits(unsigned int x, int n)
{
    unsigned int result = get_low_bits(x,n);
    printf("X: %d \n", x);
    printf("low bits of X: %d \n\n", result);
    return;
    
}

void swap(int a, int b)
{
    printf("pre-swap assignments: \n a = %d \t b = %d \n",a,b);
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("post-swap assignments: \n a = %d \t b = %d \n",a,b);
    return;
}




int main()
{
    int i = 40;
    int j = 55;
    
    system("clear");
    printf("begin run \n\n\n");
    printf("\n###INVERSION TEST###\n\n");
    run_test(0x00000001,4,3);
    run_test(0x01010101,5,4);
    run_test(0x00001000,4,3);
    printf("\n\n###SET BITS TEST###\n\n");
    test_count(0x00000001);
    test_count(0x10011001);
    test_count(0x8FF);
    printf("###CLEAR BITS TEST###\n\n");
    clear_test(0x1);
    clear_test(0x0);
    clear_test(0x85F);
    printf("####LOW BIT TEST#### \n\n");
    run_low_bits(0x00000001,2);
    run_low_bits(0xAC15,8);
    run_low_bits(0x0,1);
    printf("##########LOCAL SWAP TEST BELOW##########\n");
    swap(300000, 200000);
    printf("##########MAIN SWAP TEST BELOW##########\n");
    swap(i,j);
    printf("#########GLOBAL SWAP TEST BELOW##########\n");
    swap(i,j);
    printf("complete run \n\n\n");
    
    
    
    
    return 0;
    
}
