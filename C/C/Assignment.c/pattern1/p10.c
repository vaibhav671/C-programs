#include<stdio.h>
void main(){
	int row;
	printf("Enter the no. of row you need:\n");
	scanf("%d",&row);

	for(int i=1;i<=row;i++){
		int x=4;
		char ch='D';
		for(int j =1;j<=4;j++){
			printf("%c%d ",ch,x);
			x--;
			ch--;
		}
		printf("\n");
	}
}
