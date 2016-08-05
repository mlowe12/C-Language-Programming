class Solution {
public:
    int getSum(int a, int b)
    {
        // use bit operations
        if (b == 0)
        {
            return a; 
            
        }
        
        else
        {
           return getSum( (a ^ b), (a & b) << 1);
            
        }
    }
        
    
    
};