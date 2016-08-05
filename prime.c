#include <stdio.h>

bool is_prime(int n)
{
	int c = 0; 
	for(int i = 1; i <= n; ++i)
	{
		if(n % i == 0)
		{
			++c;
		}
	}
		if(c == 2)
		{
			return true; 
		}
		else
		{
			return false;
		}
	}
	
void print_primes(int n)
{
	 
	for(int i = 0; i < n; ++i)
	{

		if(is_Prime(i) = true)
		{
			printf("%d", i); 
		}
	}
}
 int main()
{

	print_primes(10); 
	
	return 0; 
}
		
	
	
