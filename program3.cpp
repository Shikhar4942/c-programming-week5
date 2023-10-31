#include<stdio.h>
int main()
{
	int i;
	scanf("%d",&i);
	
	
	int arr[i],t,j,s;
	for(j=0;j<i;j++)
	{
		scanf("%d",&arr[j]);
	}
	
	
	
	for(s=0;s<10;s++)
	{
		for(j=0;j<i;j++)
		{
			
		
		if(arr[j]>arr[j+1] && j+1 != i)
		{
			t=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=t;
		}
	}
}
for(j=0;j<i;j++)
{
  printf("%d",arr[j]);
}
}
