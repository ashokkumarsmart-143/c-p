#include<stdio.h.>
int main()
{
int a[100],n,i,m;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
m=a[(i+1)/2];
printf("%d",m);
return 0;
}
