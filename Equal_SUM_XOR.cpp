//XOR with sum
#include<stdio.h>
Equal_SUM_XOR(int x)
{
	int count=0;
	for(int i=0;i<x;i++)
	{
		if((x+i)==(x^i))
		{
			count++;
		//	printf("%d\n",i);
		}
	}
	printf("%d",count);
}
int main()
{
	int x=12;
	Equal_SUM_XOR(x);
	
}
