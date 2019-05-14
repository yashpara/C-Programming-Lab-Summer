#include <stdio.h> 
  
 
int averageOdd(int n) 
{ 
    if (n % 2 == 0) { 
        printf("Invalid Input"); 
        return -1; 
    } 
  
    int sum = 0, count = 0; 
    while (n >= 1) { 
  
        // count odd numbers 
        count++; 
  
        // store the sum of odd numbers 
        sum += n; 
  
        n = n - 2; 
    } 
    return sum / count; 
} 
  
// driver function 
int main() 
{ 
    int n = 15; 
    printf("%d", averageOdd(n)); 
    return 0; 
} 
