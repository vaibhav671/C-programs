#include<stdio.h>
void main(){
	int row,x=4;
	printf("Enter the no. of row you need:\n");
	scanf("%d",&row);
	

	for(int i=1;i<=row;i++){
		for(int j =1;j<=4;j++){
			printf("%d ",x--);
			
		}
		x=x+5;
		printf("\n");
	}
}
