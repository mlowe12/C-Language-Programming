//
//  2dsearch.c
//  
//
//  Created by Michael Lowe on 7/22/16.
//
//

#include "2dsearch.h"
#include <iostream>
#include <stdlib.h>


bool searchMatrix(int** matrix, int matrixRowSize, int matrixColSize, int target)
{
    for(int i = 0; i < matrixRowSize; ++i)
    {
        for(int j = 0; j < matrixColSize; ++j)
        {
            if(matrix[i][j] == target)
            {
                return true;
            }
            else
                continue;
        }
    }
    
    return false;
    
}