#include<stdio.h>
int main()
{
	int arr[6]={1,2,3,0,10,5},max,min,j;

	
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
