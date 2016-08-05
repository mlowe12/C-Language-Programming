#include <iostream> 

class Solution 
{
		public:
		    bool isPowerOfTFour(int num)
		    {
		        if(num == 0)
		            return false; 
		        while(num%2 == 0)
		            num/= 2;
		            
		        return num == 1; 
		    }
};