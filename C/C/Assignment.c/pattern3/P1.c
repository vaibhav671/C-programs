#include<stdio.h>
void main(){
	int row,x=0;
	printf("Enter the row :\n");
	scanf("%d",&row);

	for(int i=1;i<=row;i++){
		int x=1;
		for(int j=1;j<=row;j++){
			printf("%d ",x);
			x=x+i;
		}
		printf("\n");
	}
}
