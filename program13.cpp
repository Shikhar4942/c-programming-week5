#include<stdio.h>
int main()
{
	int i;
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
		
		if(a-arr[j]==arr[s] && j!=s)
		{
			printf("%d %2d",arr[j],arr[s]);
		}
	}
}
}
