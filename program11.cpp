#include<stdio.h>
int main()
{
	int i;
	scanf("%d",&i);
	
	
	int arr[i],j,s;
	for(j=0;j<i;j++)
	{
		scanf("%d",&arr[j]);
	}
	for(j=0;j<i;j++)
	{
		for(s=0;s<i;s++)
		{
			if(arr[j]==arr[s] && j!=s)
			{
				printf("%d",arr[j]);
				break;
			}
			break;
		}
	}
}
