#include<stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (a - b > 0) {
        printf("Sub is positive\n");
    }
    else if (a - b == 0) {
        printf("Sub is zero\n");
    }
    else {
        printf("Sub is negative\n");
    }
    return 0;
}