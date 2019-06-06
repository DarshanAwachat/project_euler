/*
Question: find L.C.M for first 20 natural numbers
Answer:
Here, I find all the prime number below 20, then I fint the power to which it should be multiplied and multiply them and get result

*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
int smallMult(int n){
   int i,mult=1,j,temp,prime[20],count=2;
   prime[0]=2,prime[1]=3;
   for(i=5;i<n;i++)
   {
       for(j=2;j<=i;j++)
       {
          if(i%j==0)
          break;
       }
      if(j==i)
      prime[count++]=i;
   }
  // for(i=0;i<count;i++)
  // printf("%d\n",prime[i]);
   int a[count];
   for(i=0;i<count;i++)
   {
     if(prime[i]<sqrt(n))
     a[i]=floor(log(n)/log(prime[i]));
     else
     a[i]=1;
   }
   i=0;
   while(i<count)
   {
 //     printf("%d\t",a[i]);
      mult*=pow(prime[i],a[i]);
 //     printf("%d\t",mult);
      i++;
   }
   return mult;
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
