#include<stdio.h>
void main(){
	int row;
	printf("Enter the no. of row : ");
	scanf("%d",&row);
	for(int i=1;i<=row;i++){
		for(int j=1;j<=row;j++){
			if(i==j){
				printf("* ");
			}else{
				printf("  ");
			}
		}printf("\n");
	}
}
