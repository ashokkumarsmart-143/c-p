#include<stdio.h>
int main()
{
int maximum(int a[],int n);
int max,i,n;
int a[50];
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
max=maximum(a,n);
printf("%d",max);
}
int maximum(int a[],int n)
{
int i,m=0;
for(i=0;i<n;i++)
{
if(a[i]>m)
m=a[i];
}
return 0;
}
