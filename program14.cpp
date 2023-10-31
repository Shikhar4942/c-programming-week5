#include<stdio.h>
int main()
{
	int t,i;
	scanf("%d",&i);
	
	
	int arr[i],j,s,a;
	for(j=0;j<i;j++)
	{
		scanf("%d",&arr[j]);
	}
	
	printf("enter sum value");
	scanf("%d",&a);
	for(j=0;j<i;j++)
	{
		for(s=0;s<i && s!=j;s++)
		{
		for(t=0;t<i && t!=s && t!=j; t++)
		{
		
		if(a-arr[j]-arr[s]==arr[t] && j!=s && j!=t)
		{
			printf("%d %2d %2d",arr[j],arr[s],arr[t]);
			
		}
	}
	}
}
}
