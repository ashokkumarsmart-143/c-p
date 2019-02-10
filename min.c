#include<stdio.h>
int main()
{
int min(int a[],int n);
int min,i,n;
int a[50];
scanf("%d",&n);
if(1<=n<=100000)
{
for(i=0;i<n;i++)
scanf("%d",&a[i]);
min=min(a,n);
printf("%d",min);
}
int min(int a[],int n)
{
int i,m=0;
for(i=0;i<n;i++)
{
if(a[i]<m)
m=a[i];
}
}
return 0;
}
