#include<stdio.h>
void main(){
	int row,a=0,b=1,c=0;
	printf("Enter the no. of row : ");
	scanf("%d",&row);
	
	for(int i=1;i<=row;i++){
		for(int j=1;j<=i;j++){
			printf("%d ",c);
			a=b;
			b=c;
			c=a+b;

		}
		printf("\n");
	}
}
