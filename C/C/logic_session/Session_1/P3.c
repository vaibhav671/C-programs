	/* WAP to * * *
	          * * *
		  * * *       */
#include<stdio.h>
void main(){
	int row,col;
	printf("Enter the no. of row and col :\n");
	scanf("%d\n%d",&row,&col);

	for(int i=1;i<=row;i++){
		for(int j=1;j<=col;j++){
			printf("*  ");
		}
		printf("\n");
	}
}
