/* 
Question : find the Pythagorean triplet whose sum is 1000
Answer:
Here, what I did is use construction of pythagorean triplets its if m,n are
are two numbers such that n<m,then a=m^2-n^2,b=2mn,c=m^2+n^2 and if gcd(1) then they are also unique triplets
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main(){
int a,b,c;
int m,n,flag=0;
for(m=2;m<=30;m++)
{
   for(n=1;n<m;n++)
     {
        a=(m*m)-(n*n);
        b=2*m*n;
        c=(m*m)+(n*n);
        if((a+b+c)==1000)
        {
           flag=1;
           //printf("hi");
           break;
        }
     }
if(flag==1)
break;

}
printf("%d,%d,%d\n%d",a,b,c,a*b*c);

}
