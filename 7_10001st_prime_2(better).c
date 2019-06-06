/*
Question: Find the 10001st prime number?
Answer:
The following properties of prime number are used 
-1 is not a prime.
-All primes except 2 are odd.
-All primes greater than 3 can be written in the form  6k+/-1.
-Any number n can have only one primefactor greater than sqrt(n).
The consequence for primality testing of a number n is: 
if we cannot find a numberf less than or equal nthat divides n then n is prime: the only primefactor of n is n itself
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h> // needs to includeed if want to use boolean variables in c
bool isPrime(int num){
int r,f;	
	if(num==1) return false;
        else if (num%2 == 0) return false;
	else if (num<4) return true;
        else if (num%3 == 0) return false;
	else if (num<9) return true;
        else{
		r=floor(sqrt(num));
		f=5;
		while(f<=r){
			if(num%f==0)	return false;
			if(num%(f+2)==0)	return false;
			f=f+6;
		}		
	}
return true;

}
main(){
int limit=10001,count=1,candidate=1;
while(count!=limit){
	candidate+=2;
	if(isPrime(candidate)){
		count++; 
		//printf("%d\n",candidate);
               // if(candidate==29)
               // break;
		}                       
	}
printf("%d",candidate);
}
