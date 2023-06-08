#include<stdio.h>
main()
{
	int a[] = {1,2,3,4,5};
	int i;
	int *p1;
	
	p1=a;
	for(i=0;i<=4;i++)
	{
		printf("%u =%d\n",p1+i,*(p1+i));
	}
	printf("rev array =\n");
	for(i=4;i>=0;i--)
	{
		printf("%u =%d\n",p1+i,*(p1+i));
	}
}
