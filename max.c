#include <stdio.h>
#include <stdbool.h>
#include <string.h> 
int get_size(char string)
{
	int i; 
	int count; 
	while(string[i] !='\0')
	{
		++i; 
		count = i; 
	}
	return count; 
}

		
int reverse(int arr[])
{
	int size = get_size(arr); 
	int reversed = arr[size]; 
	for(int i = 0; i < size; ++i)
	{
		reversed[i] = arr[(size-1)-i]; 
	}
	return reversed; 
	
}
int matrix_multiplaction(int a[][],  int b[][], int destination,size)
{
	for(int i = 0; i < size; ++i)
	{
		for(int j = ; j < size; ++j)
		{
			// multiply by format for matrix multiplication 
		}
			
}

	
	
int pal(int arr[])
{
	return 0; 
}
	