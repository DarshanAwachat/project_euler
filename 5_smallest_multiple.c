/*
Question:

2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

Answer : Here, I take consecutive numbers multplication and divide it by gcd to get the lcm
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int smallMult(int n){
   int i,mult=1,j,temp;
   for(i=2;i<n;i++)
   {
       if(mult%i!=0)
       {
         temp=gcd(mult,i);
         mult=(mult*i)/temp;
         printf("%d\n",mult);
       }
   }
   return mult;
}
int gcd(int a,int b){
     int temp;
     if(b>a)
     {
       a=a+b;
       b=a-b;
     }
     while(a%b!=0)
     {
         temp=b;
         b=a%b;
         a=temp;
     }
    return b;
}
main()
{
  clock_t start, end;
  double cpu_time_used;
  start = clock();
  int n,answer;
 // printf("Please enter the any number\n");
 // scanf("%d",&n);
  answer=smallMult(20);
  printf("%d\n",answer);
  end = clock();
  cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
  printf("The clock time used is %lf",cpu_time_used);
}
