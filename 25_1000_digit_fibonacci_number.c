/*
Question:What is the index of the first term in the Fibonacci sequence to contain 1000 digits?
Answer: 1.Normal addition algorithm
	2. by making the equation using the reference relation of fibonacci
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()	{
	int arr1[1001],arr2[1001],temp[1001],i,j,carry,k;
	long long unsigned int cnt=2,cnt2;//excluding the first 2 terms
	double phi;
		for(i=0;i<1002;i++){
			arr1[i]=-1;
			arr2[i]=-1;
			temp[i]=-1;
		}
		arr1[0]=1;
		arr2[0]=1;
	//printf("%d %d",arr1[0],arr2[0]);
	for(;;){
		i=0;
		carry=0;		
		do{
			if(arr1[i]==-1) arr1[i]=0;
			if(arr2[i]==-1) arr2[i]=0;
			temp[i]=arr1[i];
			arr1[i]=(arr1[i]+arr2[i]+carry)%10;
			carry=(temp[i]+arr2[i]+carry)/10;
			arr2[i]=temp[i];
			//printf("%d  %d %d %d\n",arr1[i],arr2[i],i,carry);			
			i++;
			if(carry==0 && arr1[i]==-1) break;
		}while(1);
		cnt++;
		if(i==1000)
			break;
		
		///for(k=i-1;k>=0;k--)
		//	printf("%d",arr1[k]);
		//printf("\n");		
	}
	phi=((sqrt(5)+1)/2);
	//printf("%f",phi);
	cnt2=ceil(((log(5)/2)+log(10)*999)/(log(phi)));	
	printf("%lld %lld",cnt,cnt2);
}
