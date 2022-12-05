#include<stdio.h>
void main(){
	int row;
	scanf("%d",&row);
	for(int i=1;i<=row;i++){
		for(int j=row-1;j>=i;j--){
			printf(" ");
		}
		for(int k=1;k<=i;k++){
			printf("*");
		}
		printf("\n");
	}
}
