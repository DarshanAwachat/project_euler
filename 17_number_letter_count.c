/*
If the numbers 1 to 5 are written out in words: one, two, three, four, five, then there are 3 + 3 + 5 + 4 + 4 = 19 letters used in total.
If all the numbers from 1 to 1000 (one thousand) inclusive were written out in words, how many letters would be used?
NOTE: Do not count spaces or hyphens. For example, 342 (three hundred and forty-two) contains 23 letters and 115 (one hundred and fifteen) contains 20 letters. The use of "and" when writing out numbers is in compliance with British usage.
Answer : Normal brute force answer
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
int switching(int number){
	switch(number) {
	case 1: return 3;
	case 2: return 3;
	case 3: return 5;
	case 4: return 4;
	case 5: return 4;
	case 6: return 3;
	case 7: return 5;
	case 8: return 5;
	case 9: return 4;
	case 10: return 3;
	case 11: return 6;
	case 12: return 6;
	case 13: return 8;
	case 14: return 8;
	case 15: return 7;
	case 16: return 7;
	case 17: return 9;
	case 18: return 8;
	case 19: return 8;
	case 20: return 6;
	case 30: return 6;
	case 40: return 5;
	case 50: return 5;
	case 60: return 5;
	case 70: return 7;
	case 80: return 6;
	case 90: return 6;
	default : return 0;
	}
}
int value(int number) {
	int temp=number,sum=0,flag=0;
	while(temp>0)
	{
		if(temp%100<=20 || temp%10==0)
			sum+=switching(temp%100);
		else {
			sum+=switching(temp%10);// for 1's digit addition
			sum+=switching(((temp/10)%10)*10);	//for 10's multiple
		}
		temp=temp/100;
		if(flag==1) {
			if(number%100==0) sum+=7;//(hundred multiple so no and)
			else sum+= 10;//(not a multiple of hundred so and)
		}
		flag=1;
	}
	return sum;
}
main() {
	clock_t start,end;
	start=clock();

	int sum=0,i;
	//printf("%d\n",value(45));
	for(i=1;i<1000;i++)
	sum+=value(i);
	sum+=11;//for one thousand
	printf("%d\n",sum);
	end=clock();
	printf("time = %fs\n", (double)(end - start) / CLOCKS_PER_SEC);
}
