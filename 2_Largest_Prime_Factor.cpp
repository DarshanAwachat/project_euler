#include<stdio.h>
#include<stdlib.h>
long long int prime(long long int num,long long int value)
{
	long long int d;
    while(value<num)
    {
    	value++;
    	if(num%value==0)
    	{
    		while(num%value==0)
    		{
    		    num=num/value;
    		    //printf("%d",num);
			}
    		d=prime(num,value);
			value=d;
			break;
		}
		
	}
	printf("%lld\n",value);
	return value;
}
main()
{
	long long int num;
//	printf("Please enter the number");
//	scanf("%lld",&num);
	printf("%lld",prime(600851475143,1));
	
}
