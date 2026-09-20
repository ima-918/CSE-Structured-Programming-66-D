#include<stdio.h>
int main() 
{
int a, b;
scanf("%d %d", &a, &b);

// 1.Check if the sum is even or odd
int sum = a + b;
if(sum % 2 == 0)
printf("Sum is even\n");
else 
printf("Sum is odd");
// 2.Check if the subtraction result is positive, zero, or negative
if(a - b > 0)
printf("Sub is positive\n");
else if(a - b == 0)
printf("Sub is zero\n");
else
printf("Sub is negative\n");
 // 3. Compare the two numbers
 if(a < b)
 printf("First is less than second\n");
 else if (a == b)
 printf("First is equal to second\n");
 else 
 printf("First is gearter than second\n");
 return 0;
}