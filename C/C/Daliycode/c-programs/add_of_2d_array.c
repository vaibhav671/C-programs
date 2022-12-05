#include<stdio.h>
void main(){
	int row,col,sum;
	printf("Enter the no. row and col in 2d array :\n");
	scanf("%d\n%d",&row,&col);

	int arr[row][col];
	printf("Enter the elements int array :\n");

	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			sum=sum+arr[i][j];
		}
	}

	printf("The addition of Array is : %d",sum);
}
