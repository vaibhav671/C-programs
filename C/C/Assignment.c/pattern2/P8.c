#include<stdio.h>
void main(){
	int x=18, row;
	printf("Enter the no. of row you need:\n");
	scanf("%d",&row);
	
	for(int i=1;i<=row;i++){
		
		for(int j =1;j<=3;j++){
			printf("%d ",x);
			x=x-2;
		}
		printf("\n");
	}
}
