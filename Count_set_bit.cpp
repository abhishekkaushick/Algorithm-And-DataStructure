#include<stdio.h>
count_set_bit(int x)
{
	int count=0;
	while(x)
	{
	 		
			count+=x&1;
			x>>=1;
		
	}
	printf("%d",count);
}

int main()
{
	int x=13;
	count_set_bit(x);
}
