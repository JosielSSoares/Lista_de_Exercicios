#include<stdio.h>
#include<stdlib.h>

int main ()
{
	int count=1;
	while(count<=100)
	{
		if(count%2 == 1)
		printf("%d ",count);
		
		count++;
	}
}
