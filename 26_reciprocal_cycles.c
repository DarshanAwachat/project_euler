/*
Question:A unit fraction contains 1 in the numerator. The decimal representation of the unit fractions with denominators 2 to 10 are given:

1/2	= 	0.5
1/3	= 	0.(3)
1/4	= 	0.25
1/5	= 	0.2
1/6	= 	0.1(6)
1/7	= 	0.(142857)
1/8	= 	0.125
1/9	= 	0.(1)
1/10	= 	0.1
Where 0.1(6) means 0.166666..., and has a 1-digit recurring cycle. It can be seen that 1/7 has a 6-digit recurring cycle.

Find the value of d < 1000 for which 1/d contains the longest recurring cycle in its decimal fraction part.
Answer: Do division until the same remainder occurs, this means we will have the cycle again
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<stdbool.h>
int divide(int i) {
int num=10,cnt=1,start;
	if(i==2 || i==5)
		return 0;
	else {
		//printf("%d %d %d",num,i,num%);
		while(i%2==0)
			i/=2;// removing first factors of 2
		while(i%5==0)
			i/=5;// removing factors of 5		
		start=num%i;//this is the starting moduli 
		num=num%i;
		//printf("%d",start);		
		while(1){
			num*=10;
			num=num%i;
			if(num==start)// when starting moduli comes again cycle begins
				break;
			

			cnt++;
			//printf("%d",num);
		}

	}
		return cnt;

}
main() {
	clock_t start,end;
	start=clock();
	int i,j,arr[1000],max;
	for(i=0;i<1000;i++){
		arr[i]=0;		
	}
	arr[0]=arr[1]=0;	
	for(i=2;i<1000;i++)
		arr[i]=divide(i);
	max=0;
	for(i=0;i<1000;i++)
		if(arr[max]<arr[i])
			max=i;
	printf("%d %d",arr[max],max);
	end=clock();
	printf("\ntime is %lf's",(double)(end - start)/ CLOCKS_PER_SEC );
}
