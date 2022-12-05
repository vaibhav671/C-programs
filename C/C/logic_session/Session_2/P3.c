#include <stdio.h>
void main(){
	int row,x=1;
	printf("Enter the no. rows :\n");
	scanf("%d",&row);
	
	printf("\n");
	for(int i=1;i<=row;i++){
		for(int j=1;j<=row;j++){
			printf("%d  ",x);
			int count=0;
			count=count +3;
			x=x+count;
		}
		printf("\n");
	}
}
			

