#include<stdio.h>
void main(){
	int x=1,y=1, row;
	printf("Enter the no. of row you need:\n");
	scanf("%d",&row);
	
	for(int i=1;i<=row;i++){
		
		for(int j =1;j<=3;j++){
			printf("%d ",y);
			x++;
			y=x*x-1;
			
		}
		printf("\n");
	}
}

