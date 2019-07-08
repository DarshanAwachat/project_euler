/*
Question:Let d(n) be defined as the sum of proper divisors of n (numbers less than n which divide evenly into n).
If d(a) = b and d(b) = a, where a ≠ b, then a and b are an amicable pair and each of a and b are called amicable numbers.

For example, the proper divisors of 220 are 1, 2, 4, 5, 10, 11, 20, 22, 44, 55 and 110; therefore d(220) = 284. The proper divisors of 284 are 1, 2, 4, 71 and 142; so d(284) = 220.

Evaluate the sum of all the amicable numbers under 10000.
Answer: I made an bool array so that i can cancel a pair after getting one, second if the check of amicable is less than the number then they are already included so neglecting that pairs.also if sum of proper divisors= to the number ar also not amicable.
*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>
int amicable(int num) {
	int sum=1;
	for(int i=2;i<sqrt(num);i++) {
		if(num%i==0)
			sum+=(i+(num/i));	
	}
return sum;
}
main() {
	clock_t start,end;
	start=clock();	
	int num=10000,i,sum=0,check,term2;
	//printf("Please enter number upto which  you want amicable numbers\n");
	//scanf("%d",&num);
	bool list[num];
	for(i=0;i<num;i++)
		list[i]=false;
	for(i=6;i<num;i++) {
		if(list[i]==false) {		
			check=amicable(i);
			if(check>i){
				term2=amicable(check);
				if(term2==i && check!=i ){
					list[check]=true;
					sum+=(check+i);			
				}
			}
			list[i]=true;
		}
	}
	printf("%d\n",sum);
	end=clock();
	printf("time is %lf's \n",(double)(end-start)/ CLOCKS_PER_SEC);
}
