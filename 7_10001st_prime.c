/*
Question: Find the 10001st prime number?
Answer:
In this Question waht I did is that we can make an array of prime number and if the number is divisible by the prime number before it we can say it is non prime otherwise it is prime
*/
#include<stdio.h>
#include<stdlib.h>
//#include<math.h>
main(){
//printf("hi");
int arr[10002],last_prime=2,count=1,flag=0,number=3,i;
arr[0]=2;
//printf("%d%d",last_prime,arr[0]);
while(count<=10001){
	i=-1;
        //printf("%d	%d",last_prime,arr[0]) ;
	do{
		i++;
        	//printf("hi	");
        	if((number)%(arr[i])==0)// floating point error occurs if we divide by something
        	{
          		flag=1;
          		break;
        	}

	}while(last_prime!=arr[i]);

	if(flag==0){
	//printf("%d",number);  
	last_prime=number;
        arr[count++]=number;
	}
    flag=0; //infinte loop due to foregetting flag=0
    number+=2;
   }

printf("%d",arr[10000]);

}
