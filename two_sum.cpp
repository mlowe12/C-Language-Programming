#include <iostream> 
#include <vector>
#include <algorithm>

std::vector <int> twoSum(std::vector <int>& nums, int target)
{
	std::vector<int> pair; 
	int sum; 
	for(int i = 0; i < nums.size() - 1; ++i) 
	{
		for(int j = i+1; j < nums.size(); ++j)
		{
		
			if(nums[i] + nums[j] == target)
			{
				//store in vector
				pair.push_back(i); 
				pair.push_back(j); 
				return pair; 
			}
		}
				
	}

	return pair; 
}


                                 
int main()                                   
{
	std::vector <int>  sum; 
	std::vector <int> test; 
	
	test.push_back(2); 
	test.push_back(6); 
	test.push_back(4); 
	test.push_back(0); 
	
	int target = 10; 
	
	sum = twoSum(test, target); 
	
	 
	for(int i = 0; i < 2; ++i)
	{
		std::cout << sum[i]; 
	}
	printf("\n");
	printf("\n"); 
	return 0; 
}

	
