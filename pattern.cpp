#include<stdio.h>
int main()
{
	int row=1,col=1;
	for (row=1;row<=5;row++)
	{
		for(col=1;col<=row;col++)
		{
		printf("%d",col);
		}
	printf("\n");
	}
}
