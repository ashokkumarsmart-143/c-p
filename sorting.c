#include <stdio.h>

int main(void) {
	int a[10],i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	if(a[i]<a[i+1])
	{
	printf("%d",a[i]);
	i++;
	}
	else
	{
	printf("%d",a[i+i]);
	i++;
	}
	return 0;
}

