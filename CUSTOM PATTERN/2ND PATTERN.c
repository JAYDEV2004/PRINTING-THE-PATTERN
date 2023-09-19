/*
1
12
123
1234
12345
1234
123
12
1
*/
#include<stdio.h>
int main()
{
	int i,j,k;
	
	for(i=1;i<=4;i++)
	{
	
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	for(i=5;i>=1;i--)
	{
	
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		
		printf("\n");
	}
	
	return 0;
}