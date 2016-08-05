//
//  shape_pass.c
//  
//
//  Created by Michael Lowe on 6/15/16.
//
//

#include <stdio.h>

int get_count(char s[])
{
    int i = 0;
    int count;
    
    while(s[i] != '\0') // null terminating alternative?
    {
        i = i + 1;
        count = i;
    }
    
    // printf("%d\n",count); //debug
    
    return count;
    
}

// algorithm time complexity: O(n).



void dec_tri(char s[])
{
    int count = 1 + get_count(s); // maybe add one.
    int i = count - 1;
    
    while(i) // i is set to true
    {
        while(count)
        {
            printf("%c", s[count]);
            count = count - 1;
        }
        
        printf("\n");
        
        i = i -1;
    }
    
    
}

//algorithm time complexity O(n^2).



/* THIS DEFINITELY WORKS */






int main()
{
    char string[] = "JONES BBQ AND FOOT MASSAGEEEEEEEE";
    dec_tri(string);
    
    return 0;
}
