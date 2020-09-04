#include<stdio.h>

int main(void)
{
	int a[100],search,i,n;
	printf("\n Enter the size of array: ");
	scanf("%d",&n);
	printf("\n Enter %d number: ",n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	printf("\n Enter the number you want to search: ");
	scanf("%d",&search);
	for(i=0;i<n;i++)
	{
		if(a[i]==search)
		{
			printf("\n %d is present at location: %d",search,i+1);
			break;
		}
	}
	if(i==n)
	
	printf("\n %d is not present in array",search);
	return 0;
}
