#include<stdio.h>
void main()
{
	int a[50],search=0,n,i,count=0;
	printf("enter the limit of array: ");
	scanf("%d",&n);
	printf("enter the elements of array: ");
  	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("enter the search element: ");
	scanf("%d",&search);
	for(i=0;i<n;i++)
	{
		if(search==a[i])
		{
			count=1;
			break;
		}
	}
	if(count==1)
	{
	printf("search element found at %d",i+1);
	}
	else
	{
		printf("search element not found ");
	}
}
		
	

