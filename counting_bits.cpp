#include <iostream>
#include <vector>



int set_bits(unsigned int n)
{
    int counter = 0;
    while(n)
    {
        n = n&(n-1);
        ++counter;
    }
    
    return counter;
}
std::vector<int> counting_bits(int n)
{
    std::vector<int> result;
    int count;
    for(int i = 0; i <= n; ++i)
    {
        count = set_bits(i);
        result.push_back(count);
        
    }
    
    return result;
    
}

int main()
{
    std::vector<int> result = counting_bits(5);
    
    for(int i = 0; i < sizeof(result); ++i)
    {
        std::cout << result[i] << std::endl;
    }
    
    
    return 0;
}

