/*
A perfect number is a number for which the sum of its proper divisors is exactly equal to the number. For example, the sum of the proper divisors of 28 would be 1 + 2 + 4 + 7 + 14 = 28, which means that 28 is a perfect number.

A number n is called deficient if the sum of its proper divisors is less than n and it is called abundant if this sum exceeds n.

As 12 is the smallest abundant number, 1 + 2 + 3 + 4 + 6 = 16, the smallest number that can be written as the sum of two abundant numbers is 24. By mathematical analysis, it can be shown that all integers greater than 28123 can be written as the sum of two abundant numbers. However, this upper limit cannot be reduced any further by analysis even though it is known that the greatest number that cannot be expressed as the sum of two abundant numbers is less than this limit.

Find the sum of all the positive integers which cannot be written as the sum of two abundant numbers.
Answer: Find all the abundant number first,then made an bool array to mark the number which are sum of the abundant numbers, then added the numbers which are not sum of 2 abundant number.
*/
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
#include<time.h>
int divisor(int num){
	int sum=1;
	for(int i=2;i<=sqrt(num);i++){
		if(i*i==num)
			sum+=i;	
		else if(num%i==0)
			sum+=(i+(num/i));
	}
	return sum;
}
main() {
	clock_t start,end;
	start=clock();
	int abu[7000],num,k=0,j,i;
	//printf("%d",divisor(12));
	bool arr[28123];
	//printf("%d",arr[100]);
	for(i=12;i<=28123;i++) {
		num=divisor(i);				
		if(num>i) {
		abu[k++]=i;
		//printf("%d",k);
		}
	}
	//for(i=0;i<100;i++)
	//	printf("%d\n",abu[i]);
	for(i=0;i<k;i++) {
		for(j=i;j<k;j++) {
			num=abu[i]+abu[j];			
			if(num>28123)
				break;
			arr[num]=true;				
		}
	}	
	num=0;
	for(i=0;i<28123;i++)
		if(arr[i]==false)
			num+=i;
	printf("%d\n",num);
	end=clock();
	printf("time is %f's",(double)(end - start) / CLOCKS_PER_SEC);	
}
