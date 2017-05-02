

int main()
{
	int array[]={1,2,4,7,6,8,3};
	int size=sizeof(array)/sizeof(array[0]);
	int miss=Missing(array,size);
	printf("%d",miss);
	getchar();	
}
