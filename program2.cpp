#include<stdio.h>
int main()
{
	int i;
	scanf("%d",&i);
	
	
	int arr[i],max,min,j;
	for(j=0;j<i;j++)
	{
		scanf("%d",&arr[j]);
	}

	
	max=arr[0];
	min=arr[0];
	for(j=0;j<6;j++)
	{
		if(max<arr[j])
		{
			max=arr[j];
			
		}
		if(min>arr[j])
		{
			min=arr[j];
		}
	}
	printf("max and min of given array is %d %2d",max,min);
	return 0;
}
