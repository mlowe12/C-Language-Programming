#include <iostream>
#include <string>
#include <vector>
#include <algorithm>



int edit_distance(std::string s1, std::string s2)
{
    int x = s1.length();
    int y = s2.length();
    
    int distance[x+1][y+1];
    
    for(int i = 0; i <= x; ++i)
    {
        for(int j = 0; j <= y; ++j)
        {
            if( i == 0)
            {
                distance[i][j] = j;
            }
            else if(j == 0)
            {
                ditance[i][j] = i;
            }
            
            else if(s1[i-1] == s2[j-1])
            {
                distance[i][j] = distance [i-1][j-1];
            }
            
            else
            {
                distance = 1 + std::min(distance[i][j-1], distance[i-1][j]), distance[i-1][j-1]);
            }
            
            
        }
    }
    
    return distance[x][y];
}





