#include<stdio.h>
void main(){
	int row;
	printf("Enter the no. of row you need:\n");
	scanf("%d",&row);
	int x=1;

	for(int i=1;i<=row;i++){
		for(int j =1;j<=3;j++){
			printf("%d ",x);
			x=x+2;
		}
		printf("\n");
	}
}
