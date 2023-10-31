#include<stdio.h>
int main()
{
		int i;
	scanf("%d",&i);
	
	
	int arr[i],t,j;
	for(j=0;j<i;j++)
	{
		scanf("%d",&arr[j]);
	}
	
	for(j=0;j<i;j=j+2)
	{
		if(j+1 != i)
		{
		
			t=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=t;
		}
	}
	for(j=0;j<i;j++)
	{
		printf("%d",arr[j]);
	}
}
