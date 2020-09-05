/*
Sentinel Search
*/
#include<stdio.h>
#define MAX

int i;

void display (int Number[MAX],int n)
{
	printf("\n The Numbers are: \n");
	for(i=0;i<n;i++)
	{
		printf("\t %d ",Number[i]);
		
	}
}
int sentinelSearch(int*Number,int l,int key)
{
	int i;
	Number[l]=key;
	for(i=0;Number[i]!=key;i++)
	{
		;
	}
	if(i!=l)
	return i;
	
	else
	return -1;
}

int main()
{
	int Number[MAX]={10,20,30,40,50,78,9,-999};  // Enter elements of array 
	int key,l,loc;
	int n=7;     // 	Enter the number of elements in a array
	l=n;
	
	printf("\n Enter Number which you want to search: ");
	scanf("%d",&key);
	display(Number,n);
	loc=sentinelSearch(Number,l,key);
	printf("\n Number is present at location %d",loc);
	
	return 0;
}
