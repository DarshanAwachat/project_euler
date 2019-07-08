/*
Question: By starting at the top of the triangle below and moving to adjacent numbers on the row below, the maximum total from top to bottom is 23.

3
7 4
2 4 6
8 5 9 3

That is, 3 + 7 + 4 + 9 = 23.

Find the maximum total from top to bottom of the triangle below:

75
95 64
17 47 82
18 35 87 10
20 04 82 47 65
19 01 23 75 03 34
88 02 77 73 07 63 67
99 65 04 28 06 16 70 92
41 41 26 56 83 40 80 70 33
41 48 72 33 47 32 37 16 94 29
53 71 44 65 25 43 91 52 97 51 14
70 11 33 28 77 73 17 78 39 68 17 57
91 71 52 38 17 14 91 43 58 50 27 29 48
63 66 04 68 89 53 67 30 73 16 69 87 40 31
04 62 98 27 23 09 70 98 73 93 38 53 60 04 23

NOTE: As there are only 16384 routes, it is possible to solve this problem by trying every route. However, Problem 67, is the same challenge with a triangle containing one-hundred rows; it cannot be solved by brute force, and requires a clever method! ;o)
Answer: Done by dynamic programming
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int comp(int a,int b){
	int max1;
	max1=(a>b)?a:b;
	return max1;
}
main() {
	clock_t start,end;
	double clocks_per_sec;
	start=clock();
	int num,arr[15][15],arr2[16284],i=0,j,k=0,cnt=2;
	char ch;
	FILE *fp;
	fp=fopen("input_18.txt","r");//CREATED A FILE FOR READING INPUT 
	ch=fgetc(fp);
	while(ch!=EOF){
		arr[i][k]=atoi(&ch)*10;//atoi is an inbuilt asci to integer converter
		ch=fgetc(fp);
		//printf("%c ",ch);
		arr[i][k]+=atoi(&ch);
		ch=fgetc(fp);
		k++;		
		if(ch==' ')
			ch=fgetc(fp);
		if(ch=='\n')
		{
			ch=fgetc(fp);
			while(k<15)
				arr[i][k++]=0;//MADE A GRID OF 15*15 THOSE VALUES NOT HERE GIVEN 0 VALUE
			k=0;
			i++;
		}	
		//printf("%d %c\n",arr[i-1],ch);
	}
	fclose(fp);//time taken for reading the data is approx 0.00015		
	/*for(i=0;i<15;i++) {
		for(j=0;j<15;j++)
			printf("%2d ",arr[i][j]);
		printf("\n");
	}*/	
	for(i=13;i>=0;i--){
		for(j=0;j<=i;j++){
					arr[i][j]+=comp(arr[i+1][j],arr[i+1][j+1]);	
		}
	}
	/*
	for(i=0;i<15;i++) {
		for(j=0;j<15;j++)
			printf("%4d ",arr[i][j]);
		printf("\n");
	}*/
	printf("%d\n",arr[0][0]);
	end=clock();
	clocks_per_sec=(double)(end - start)/ CLOCKS_PER_SEC ;
	printf("time %lf's",clocks_per_sec);
}	
