#include<stdio.h>
#include<stdlib.h>

int* gen_array(int rows, int cols)
{
	int* a = (int*)malloc(sizeof(int) * rows * cols); 
	if(a == 0)
	{
		return a; 
	}
		
	for(int i = 0; i < rows; ++i)
	{
		for(int j = 0; j < cols; ++j)
		{
			 *(a+((i*cols) + j)) = (i +1)*(j*1); 
		}
	}
	return a; 
}

void print_table()
{
	
	
	
	
	return; 
}


			
