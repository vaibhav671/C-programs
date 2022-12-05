#include<stdio.h>
void main(){
	int row;
	printf("Enter the no. of row : ");
	scanf("%d",&row);
	for(int i=1;i<=row;i++){
		int a=1;
		for(int j=row-1;j>=i;j--){
			printf("  ");
		}
		for(int j=1;j<=i;j++){
			printf("%d ",a);
			a++;

		}
		printf("\n");
	}
}
