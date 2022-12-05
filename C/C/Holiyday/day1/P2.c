#include<stdio.h>
void main(){
	int row;
	int col;
	printf("Enter the row and col of 2d  array :");
	scanf("%d",&row);
	scanf("%d",&col);
	int arr1[row][col];
	int arr2[row][col];
	
	printf("Enter the elements of arr:\n");
	for(int a=0; a<row ; a++){
		
		for(int b=0 ; b<col ; b++){

			scanf("%d", &arr1[a][b]);
		}
	}
	printf("The value at 2nd array are:\n");
	for(int i=0;i<row;i++){

		for(int j=0;j<col;j++){

			arr2[i][j]=arr1[i][j];
			
		}
	
	}
	for(int i=0; i<row ; i++){

		for(int j=0; j<col ; j++){
			printf("%d  ",arr2[i][j]);
		}
		printf("\n");
	}
}

