#include <stdio.h>

int main(void) {
	// your code goes here
	int a[30],i,s=1,n,b[30];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		s*=a[i];
	}
	for(i=0;i<n;i++)
	{
		b[i]=s/a[i];
		printf("%d ",b[i]);
	}
	return 0;
}
