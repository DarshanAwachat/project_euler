/*
Question:2^15 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.

What is the sum of the digits of the number 2^1000?
Answer: Applied normal multiplication alogrithm by taking an array to store each digit in one black
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
main() {
	clock_t start, end;
	start = clock();
	int arr[10000],sum=0,carry=0,k,i,val,j=0;// arr[n]={-1} doesn't intitalize all values as -1 
	for(i=0;i<10000;i++)//this is necessary
		arr[i]=-1;
	arr[0]=1;	
	while(j<1000)
		{
			k=0;
			carry=i=0;
			do{	
				if(arr[i]!=-1) val=arr[i]*2;
				else val=0; 
				sum=val%10;
				arr[i]=sum+(carry%10);
                //printf("%d %d\n",arr[i],i);
                carry=carry/10;
				carry+=val/10;
				i++;
				//printf("%d %d %d %d\n",arr[i-1],carry,sum,i-1);
				if( carry==0 && arr[i] == -1) 
					break;
			}while(1);
		j++;
	}
	sum=0;
	for(j=i-1;j>=0;j--)
		sum+=arr[j];
	printf("%d\t",sum);
	end = clock();
	printf("time = %fs\n", (double)(end - start) / CLOCKS_PER_SEC);
}
