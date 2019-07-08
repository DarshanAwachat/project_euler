/*
Question : Starting in the top left corner of a 2×2 grid, and only being able to move to the right and down, there are exactly 6 routes to the bottom right corner.


How many such routes are there through a 20×20 grid?
Answer : first I tried to apply DFS algo though it worked for upto 10 values, afterwards it was giving just wrong answer after that I saw that the at any given value the no. of routes are the sum of routes of downard and rightward elemnts routes so I just made an array and gave the nth row value 1 because we can only go right by that path and after that I added the i+1 row path to the i th elemnt with the no. of rights it had(like 4*4 in 2,0 has 4 paths i.e (3,0),(3,1),(3,2),(3,3) and 2,1 has 3 paths i.e (3,1),(3,2),(3,3)) 

*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main() {
	long int num;
	printf("Please enter the grid number\n");
	scanf("%ld",&num);
	/*long long int queue[1000000],front=0,rear=1,final,cnt=0,cr;
	cr=1000000;
	final=(num+1)*(num+1);
	queue[front]=1;		
	while(1) {
		if(queue[front%cr]%(num+1)!=0)
				queue[(rear++)%cr]=queue[front%cr]+1;
		if(queue[front%cr]<=num*(num+1))
				queue[(rear++)%cr]=queue[front%cr]+num+1;
		front++;
		if(queue[front%cr]==final) {	
			cnt++;
			//printf("%d\n",cnt);
		}
		if(front==rear)	break;
		
	}
	printf("%lld",cnt);
	queue method not working 
	*/
	/*
	long long int stack1[1000000],stack2[1000000],front1=-1,front2=-1,cnt=0,final,i=0;
	final=(num+1)*(num+1);
	stack1[++front1]=1;
	while(i<23){
			while(front1!=-1)
				{
					if(stack1[front1]%(num+1)!=0)
						stack2[++front2]=stack1[front1]+1;
					if(stack1[front1]<=num*(num+1))
						stack2[++front2]=stack1[front1]+num+1;
					front1--;
					//printf("hi %lld",stack2[front2]);
				}
			while(front2!=-1)
				{
					stack1[++front1]=stack2[front2--];
					if(stack1[front1]==final) cnt++;
					//printf("%lld\t",stack1[front1]);	
				}
			//	printf("\n");
			if(front1==-1) break;
			i++;
	}
	printf("%lld",cnt);
	stack method works uptill 9 only after that segmentation dump
	*/
	long int cnt,arr[num+1][num+1],i,j,k;
	for(i=num;i>=0;i--)
	{
		for(j=0;j<=num;j++)
			{
				//printf("%ld %ld\n",i,j);
				if(i == num)
					arr[i][j]=1;
				else{
						arr[i][j]=0;
						for(k=j;k<=num;k++)
							arr[i][j]+=arr[i+1][k];
				}		
			}
	}
	/*for(i=0;i<=num;i++)
		for(j=0;j<=num;j++)
			printf("%ld\n",arr[i][j]);*/
	printf("%ld",arr[0][0]);	
}
