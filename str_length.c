#include <stdio.h>


int get_size(char s[])
{
	int i = 0; 
	int count; 
	while( s[i] != '\0')
	{
		i = i+1;  
		count  = i; 
	}
	
	return count;
}


int main()
{
	int result = get_size("TEST");
	
	printf("SIZE: %d\n", result); 
	
	return 0; 
}
		
