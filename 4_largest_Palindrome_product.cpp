#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int reverse(int num)
{
    int temp=0;
    while(num>0)
    {
    	temp=(temp*10)+num%10;
    	num=num/10;
	}
	return temp;
}
main()
{
	clock_t start, end;
    double cpu_time_used;
	int palindrome=0,i,j;
	for(i=100;i<999;i++)
	{
		for(j=999;j>=i;j--)
		{
			if(i*j==reverse(i*j))
			{
				if(i*j>palindrome)
				{
				palindrome=i*j;
			    }
				break;
			}
		}
		
	}
	printf("%d",palindrome);
	end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("%d is the largest three-digit palindrome. \n CPU Time: %lf. \n", palindrome, cpu_time_used);
}

