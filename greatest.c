#include <stdio.h>

int main()
{
    int n, i, a, d, sum = 0;
    
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    scanf("%d",&a);
    scanf("%d",&d);
    if((1<=n<=100000)&&(1<=a<=100000)&&(1<=d<=100000))
{
    for(i=1; i <= n; ++i)
    {
        sum += i;  
    }

    printf("Sum = %d",sum);
}
