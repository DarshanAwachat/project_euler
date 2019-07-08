/*
Question: Find 100!
Answer: Applying multiplication alogrithm and storing each digit value in array
respectively.
*/
#include<stdio.h>
#include<stdlib.h>
main() {
	int num,arr[1000],val,sum=0,carry,i,j;
	printf("Please enter number for which need factorial!\n");
	scanf("%d",&num);
	for(i=0;i<1000;i++)
		arr[i]=-1;
	arr[0]=1;		
	for(j=2;j<=num;j++) {
		i=0;	
		do{
			if(arr[i]==-1)
				val=carry;
			else
				val=(arr[i]*j)+carry;			
			arr[i]=val%10;
			carry=(val/10);	
			//printf("%d %d",carry,arr[i]);			
			i++;
			//printf("hi");
			if(arr[i]==-1 && carry==0)
				break;	
		}while(1);

	}

	for(j=i-1;j>=0;j--)
	{
		printf("%d",arr[j]);		
		sum+=arr[j];
	}
	printf("\n%d\n",sum);
}
