#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if(a < b) 
        printf("First is less than second\n");
    
    else if(a == b) 
        printf("First is equal to second\n");
    
    else 
        printf("First is greater than second\n");
    
    return 0;

}