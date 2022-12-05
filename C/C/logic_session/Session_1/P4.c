/* WAP to  1 2 3 4
           5 6 7 8
	   9 10 11 12   */


#include<stdio.h>
void main(){
	int row,col;
	printf("Enter the no. of row and col :\n");
	scanf("%d\n%d",&row,&col);
	int x=1;

	for(int i=1;i<=row;i++){
		for(int j=1;j<=col;j++){
			printf("%d  ",x);
			x++;

		}
		printf("\n");
	}
}
