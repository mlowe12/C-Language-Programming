#include <stdio.h>


void is_evenly_divisible(int a, int b)
{
	if(b!=0)
	{
		if(a%b == 0)
		{
			printf("EVENLY DIVISIBLE\n");
		}
		else
		{
			printf("NOT EVENLY DIVISBLE\n"); 
		}

	}

	else
	{
		printf("UNDEFINED\n");
	}

	return;
}
/*MEDIAN_INT FUNCTION*/

void median_int(int a, int b, int c)
{
    int round1 = (a > b) ? a:b;
    int round2 = (round1 > c) ? round1:c;
    int median = (round2 > b) ? b:round2;
    
    printf("median = %d \n", median);
    return;
}


/*MAX_INT FUNCTION*/
int max_int(int a, int b, int c)
{
    int larger = (a > b)? a:b;
    
    int largest = (larger > c) ? larger:c;
    
    return largest;
}
 void print_max(int a,int b, int c)
{
    int max = max_int(a,b,c);
    
    printf("MAX = %d\n", max);
    
    return;
}

void print_triangle(int N)
{
    //code here
    
    return;
}
void print_centered_triangle(int N)
{
    //code here
    
    return;
}
void print_range(a,b)
{
    //code here...prints range of numbers between a and b.
}



int main()
{
	is_evenly_divisible(3,4);
    is_evenly_divisible(4,4);
    is_evenly_divisible(4,0);
    printf("______________________\n");
    print_max(3,2,4);
    print_max(1,60,2);
    print_max(0,0,4);
    median_int(4,5,3);

	return 0; 
}

