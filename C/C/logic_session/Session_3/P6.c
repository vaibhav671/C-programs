#include<stdio.h>
void main(){
	int row;
	printf("Enter the no. of rows :\n");
	scanf("%d",&row);
	int a =row;
	for(int i=1;i<=row;i++){
		for(int j=1;j<=i;j++){
			printf("%d\t",a);
		}
		a--;
		printf("\n");
	}
}
