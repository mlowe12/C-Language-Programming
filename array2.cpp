#include <iostream> 
#include <vector>


std::vector<int> intersect(std::vector<int> & nums1, std::vector<int>  & nums2) 
    {
        
        int x;
        std::vector <int> result; 
        for(int i = 0; i < nums1.size();++i)
        {
        	
            for(int j = 0; nums2.size(); ++j)
            {
                if(nums2[j] == nums1[i])
                {
                    nums1[i] = x;
                    printf("%d", x); 
                    result.push_back(x); 
                    
                }
 
            }
        }
        return result; 
    }
    
    
    
    
    int main()
    {
    	std::vector <int> v1;
    	std::vector <int> v2;
    	std::vector <int> solution; 
  
		v1.push_back(1);
		v1.push_back(1);
		v1.push_back(2);
		v1.push_back(2);
		v1.push_back(5);
		
		v2.push_back(1);
		v2.push_back(0);
		v2.push_back(0);
		v2.push_back(2);
		v2.push_back(5);
		
    	solution = intersect(v1, v2);
    	
    	
    	    	return 0;
    
    }
    