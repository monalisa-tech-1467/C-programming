#include<stdio.h>
#include<conio.h>


int main(void)
{
	int n;
	printf("\n Enter a number between 1 to 5:");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			printf("\n One");
			break;
		case 2:
			printf("\n Two");
			break;
		case 3:
			printf("\n Three");
			break;
		case 4:
			printf("\n Four");
			break;
		case 5:
			printf("\n Five");
			break;
		default:
		    printf("\n Invalid number");
		
			
	}
	return 0;
	
}
