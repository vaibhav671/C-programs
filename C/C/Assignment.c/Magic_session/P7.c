#include<stdio.h>
void main(){
	int row;
	printf("Enter the no. row : ");
	scanf("%d",&row);

	for(int i=1;i<=row;i++){
		char ch=64+row;
	
		for(int j=row;j>=i;j--){
			printf("%c ",ch);
                        ch--;
		}
		printf("\n");

	}
}
