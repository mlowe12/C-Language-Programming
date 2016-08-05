#include <stdio.h>


void moveZeros(int* nums, int numsSize)
{
	int temp; 
	int count; 
	for(int i = 0; i < numsSize; ++i)
	{
		if(nums[i] == 0)
		{
			while(nums[i] <= nums[i+1] && nums[i] == 0)
			{
				//swap if zero
				temp = nums[i];
				nums[i] = nums[i+i];
				nums[i+1] = temp;
				
			}
		}
		
		else
		{
			continue;
		}
	}
	return;
}