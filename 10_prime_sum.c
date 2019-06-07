#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int isPrime(unsigned long long num){
unsigned long long r,f;
        if(num == 1) return 0;
	else if(num<4) return 1;
	else if(num % 2==0) return 0;
        else if(num % 3==0) return 0;
        else if(num < 10) return 1;
        else{
             f=sqrt(num);
	     r=5;
		while(r<=f){
			if(num%r==0) return 0;
			if(num%(r+2)==0) return 0;
			r=r+6;		
		}
	}	
return 1;
}
main(){
unsigned long long sum=17,i;
//printf("%d	%d",isPrime(25),isPrime(191));
for(i=11; i<2000000;i=i+6){
	//printf("%d\n",i);
	if(isPrime(i)) sum+=i;
	if(i+2<2000000){	
	if(isPrime(i+2)) sum+=(i+2);	
	}
	
}
printf("%lld\n",sum);
}
