#include<stdio.h>
int main()
{
		int i;
	scanf("%d",&i);
	
	
	int arr[i],t,j,c=0,a;
	for(j=0;j<i;j++)
	{
		scanf("%d",&arr[j]);
	}
	printf("enter element whost occurence is to be known");
	scanf("%d",&a);
	for(t=0;t<i;t++)
	{
		if(t==a){
		
		for(j=0;j<i;j++)
		{
			if(arr[t]==arr[j])
			{
				c=c+1;
			}
		}
	}
	
	
	}
	printf("%d",c);
}
