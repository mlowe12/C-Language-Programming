//
//  median.c
//  
//
//  Created by Michael Lowe on 6/17/16.
//
//

#include <stdio.h>
//median = max(min(a,b), min(max(a,b),c));


/*
 int main() {
 int row, space, rows, star=0;
 printf("Enter the number of rows in pyramid\n");
 scanf("%d",&rows);
 
 for(row = 1;row <= rows; row++) {
 
for(space = 1; space <= rows-row; space++) {
    printf("  ");
}

while(star != (2*row - 1)) {
    printf("* ");
    star++;;
}
star=0;
printf("\n");
}
getch();
return 0;
}

*/

void pyramid(int n) // not working
{
    int curr;
    int space;
    int obj = 0;
    
    for(curr = 0; curr < n; ++curr)
    {
        for(space = 0; space < n - curr; ++space)
        {
            while(obj != (2*n -1))
            {
                printf("*");
                ++ obj;
                
            }
            
            printf("\n");
            
            
            
        }
    }
    
    return;
}

int get_max(int a, int b)
{
    int max = (a > b) ? a:b;
    
    return max;
}
int  get_min(int a, int b)
{
    int min = (a < b) ? a:b;
    
    return min;
}

void get_median(int a, int b,int c)
{
    int median = get_max(get_min(a,b), get_min(get_max(a,b),c));
    
    printf("Median: %d\n", median);
    
    return;
}


int main()
{
    get_median(4,10,6);
    pyramid(5);
    
    return 0;
    
}

/*
class MedianFinder {
public:
    
    // Adds a number into the data structure.
    void addNum(int num) {
        std::vector <int> store;
        std::cin >> num;
        store.push_back(num);
        
    }
    
    // Returns the median of current data stream
    double findMedian() {
        int median;
        int size;
        int num = addNum(num);
        std::cout << "enter number of entries desired" << std::endl;
        std::cin >> size;
        
        while(size)
        {
            addNum(num);
            
        }
        if(store.size()%2 == 0)
        {
            for(int i = 0; i < store.size(); ++i)
            {
                median = get_median(store[i-1], store[i], store[i+1]);
            }
            
        }
        
    }
};

// Your MedianFinder object will be instantiated and called as such:
// MedianFinder mf;
// mf.addNum(1);
// mf.findMedian();
 
 
 */

