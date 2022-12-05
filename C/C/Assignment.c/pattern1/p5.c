#include<stdio.h>
void main(){
	int row;
	printf("Enter the no. of row you need:\n");
	scanf("%d",&row);
	char x='A';

	for(int i=1;i<=row;i++){
		for(int j =1;j<=4;j++){
			printf("%c ",x);
			x++;
		}
		x=x-3;
		printf("\n");
	}
}
