/*
Question : Find the first number with 500 divisors
Answers :
total brute force algorithm just finding the number of divisors 
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
unsigned long factor_sum(unsigned long num ) {
 unsigned long count=0;
 for(int i=1;i<=floor(sqrt(num));i++)
 {
       if((i*i)==num)
       	count++;
       else if(num%i==0)
 	count+=2;

 	//	printf("%ld %ld\n",count,num);
 }
return count;
}
main() {
	unsigned long  num,limit,i,sum=0;
	printf("Please enter the number(it should be even)\n");
	scanf("%ld",&num);
	i=num;
	while(factor_sum(sum) < num)//sum<limit)
	{
		sum=(i*(i+1))/2;
		//if(factor_sum(sum) == num) 
		//		break;
		//printf("%ld %ld\n",i,sum);
		i++;
	}

 printf("%ld",sum);
}
