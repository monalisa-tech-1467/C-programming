/*
Binary Search
*/
#include<stdio.h>

int main(void)
{
	int k,lower,upper,mid,n,search,arr[50];
	printf("\n Enter size of array: ");
	scanf("%d",&n);
	printf("\n Enter %d elements: ",n);
	for(k=0;k<n;k++)
	{
		scanf("%d",&arr[k]);
	}
	printf("\n Enter element you want to search: ");
	scanf("%d",&search);
	lower=0;
	upper=n-1;
	mid=(lower+upper)/2;
	while(lower<=upper){
		if(arr[mid]<search)
		lower=mid+1;
		
		else if(arr[mid]==search)
		{
			printf("\n %d found at location: %d", search,mid+1);
			break;
			
		}
		else
		upper=mid-1;
		mid=(lower+upper)/2;
	}
	if(lower>upper)
	printf("\n %d Not found in the list",search);
	return 0;
}
