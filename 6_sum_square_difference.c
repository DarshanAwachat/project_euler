/* 
Question: Find the difference of sum of squares and square of sum
Answer:
In this Question, I simply Used the formula for 
sum of squares of 1st n natural numbers
and sum of 1st n natural numbers
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main(){
int num,sum_of_square,square_of_sum;
printf("Please enter the number\n");
scanf("%d",&num);
sum_of_square=((num)*(num+1)*((2*num)+1))/6;
square_of_sum=pow(((num)*(num+1))/2,2);
printf("%d",square_of_sum-sum_of_square);
}
