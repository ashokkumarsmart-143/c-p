#include<stdio.h>
int main()
{
int n,r=0,rem,org;
scanf("%d",&n);
org=n;
printf("%d",n);
rem=n%10;
r=r*10+rem;
n/=10;
if(org==rem)
printf("palindrome");
else
printf("not palindrome");
return 0;
}

