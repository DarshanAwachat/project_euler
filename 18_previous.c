#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<malloc.h>
/*struct node {
	int value;
	struct node *left,*right;
};
typedef struct node node;
node* new_node(int num) {
	node *temp=(node *)malloc(sizeof(node));
	temp->right=NULL;
	temp->left=NULL;
	temp->value=num;
	return temp;
} 
void insert(int num,node * tree) {
	node *new;
	new=new_node(num);
	if()
		insert(num,tree->left);
	else if(tree->right!=NULL)
		insert(num,tree->right);
	else {
		if(tree->left==NULL)
			tree->left=new;	
		else
			tree->right=new;
	}
//	printf("%d\n",tree->value);
}
*/
main() {
	clock_t start,end;
	double clocks_per_sec;
	start=clock();
	int num,arr[15][15],arr2[16284],i=0,j,k=0,cnt=2,starting=1,ending=2;
	char ch;
	FILE *fp;
	fp=fopen("input_18.txt","r");
	ch=fgetc(fp);
	while(ch!=EOF){
		arr[i][k]=atoi(&ch)*10;
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
				arr[i][k++]=0;
			k=0;
			i++;
		}	
		//printf("%d %c\n",arr[i-1],ch);
	}
	fclose(fp);//time taken for reading the data is approx 0.001 to 0.0005
	for(i=0;i<15;i++) {
		for(j=0;j<15;j++)
			printf("%2d ",arr[i][j]);
		printf("\n");
	}	
	/*arr[48]=33;
	arr[49]=47;
	arr[50]=32;
	arr[51]=37;
	arr[52]=16;
	arr[53]=94;
	arr[54]=29;
	arr[55]=53;
	arr[56]=71;
	arr[57]=44;	
		
	for(j=1;j<i;j++)
	{
		if(ending==j)
		{
			starting=ending+1;
			ending=j+cnt+1;
			cnt++;
			arr2[k++]=arr[j];
		}
		else if(starting==j)
			arr2[k++]=arr[j];
		else {
			arr2[k++]=arr[j];
			arr2[k++]=arr[j];
		}	
	}//0.01588's
	int stack[20],front=-1;
/*	for(i=0;i<16384;i=(i*2)+1)
	{
			
	}		
	for(i=0;i<k;i++) {
		printf("%d\n",arr2[i]);
	}	
*/	end=clock();
	clocks_per_sec=(double)(end - start)/ CLOCKS_PER_SEC ;
	printf("time %lf's",clocks_per_sec);
}	
