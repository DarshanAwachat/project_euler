#include<stdio.h>
#include<stdlib.h>
int sum(int num)
{
	int value=1,previous=1,sum=0;
    while(value<num)
    {
    	value=value+previous;
    	previous=value-previous;
    	if(value%2==0)
    	sum+=value;
	}
	return sum;
}
main()
{
	int num;
	printf("Please enter the number");
	scanf("%d",&num);
	printf("%d",sum(num));
}
