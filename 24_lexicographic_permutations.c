/*Question:
A permutation is an ordered arrangement of objects. For example, 3124 is one possible permutation of the digits 1, 2, 3 and 4. If all of the permutations are listed numerically or alphabetically, we call it lexicographic order. The lexicographic permutations of 0, 1 and 2 are:

012   021   102   120   201   210

What is the millionth lexicographic permutation of the digits 0, 1, 2, 3, 4, 5, 6, 7, 8 and 9?
Answer: first i used permutation maths formula to get which position to be swapped then I swapped the positions and got the answer;
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>
#include<time.h>
int fact(int num)
{
	if(num==0)
	return 1;
	return num*fact(num-1);
}
main() {
	clock_t start,end;
	start=clock();
	int num,i=1,j,factorial,k,temp;
	int arr[10]={0,1,2,3,4,5,6,7,8,9};	
	bool marked[10];	
	printf("Please enter the number to find in lexicograohic manner\n");
	scanf("%d",&num);
	/*printf("%d\n",fact(6));
	for(k=0;k<10;k++)
		marked[k]=false;*/
	for(i=0;i<10;i++){
		factorial=fact(9-i);
		printf("%d\n",factorial);
		for(j=0;j<10;j++) {		
			if(num<=(j+1)*factorial){
				num=num-(j)*factorial;								
				j=i+j;
				temp=arr[i];
		                arr[i]=arr[j];
		                arr[j]=temp;					
				break;
				/*//printf("%d %d",marked[j],j);				
				while(marked[j])
				{
					for(k=0;k<10;k++)
						if(marked[k]==false){							
							j=k;
							flag=1;
							break;
						}
				}
				printf("%d %d",j,i);
				if(flag==1&&j==i)
					for(k=0;k<10;k++)
						if(marked[k]==false){							
							j=k;
							break;
						}
				//for(k=0;k<10;k++)
				//	printf("%d",marked[k]);
				//printf("\n");				
				marked[j]=true;
				
				arr[i]=j;
				printf("hi");
				break;*/
				
			}
				k=i+j;
				temp=arr[i];
		                arr[i]=arr[k];
		                arr[k]=temp;
		printf("hi");
				
		}
	
	}
	for(i=0;i<10;i++)
	printf("%d",arr[i]);
	end=clock();
	printf("\ntime is %lf's",(double)(end-start) / CLOCKS_PER_SEC);
}
