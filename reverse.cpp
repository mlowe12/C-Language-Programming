
#include <string>
#include <iostream>
#include <vector> 
	
std::vector<char> reverse(std::string s) //what..?
{
	std::vector <char> result; 
	for(int i = s.length(); i > 0; --i)
	{
		std::cout << s.at(i); 
		result.push_back(s.at(i)); 
		std::cout << s.at(i); 
		
			
		
	}
	
	return result; 
		
}

int get_size(std::string s)
{
    int i = 0;
    int count;
    
    while(s.at(i) != '\0')
    {
        i = i+1;
        count = i;
    }
    
    return count;
}
std::vector <char> reverse2(std::string s)
{
    std::vector <char> target;
    for(int i = get_size(s); i > 0; --i)
    {
        std::cout << s.at(i);
        
    }
    return target;
}
int main()
{
	std::string mystring = "hello";
	std::vector <char> solution = reverse(mystring); 
	
	for(int i = 0; i < mystring.length(); ++i)
	{
		std::cout << solution.at(i); 
	}
	std::cout <<"" << std::endl; 
	
	return 0; 
}

	
	

