#include<stdio.h>
void main(){
	int row,col,pln,sum=0;
	printf("Enter the no. of row,col,and plane of 3d array :\n");
	scanf("%d\n%d\n%d",&pln,&row,&col);

	int arr[pln][row][col];

	printf("Enter the elements of arr :\n");

	for(int i=0;i<pln;i++){
		for(int j=0;j<row;j++){
			for(int k=0;k<col;k++){
				scanf("%d",&arr[i][j][k]);
			}
		}
	}

	printf("The array you enter is :\n");

	for(int i=0;i<pln;i++){
		for(int j=0;j<row;j++){
			for(int k=0;k<col;k++){
				printf("%d  ",arr[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}

	for(int i=0;i<pln;i++){
		for(int j=0;j<row;j++){
			for(int k=0;k<col;k++){
				if(j==k){
					sum = sum + arr[i][j][k];
				}
			}
		}
	}

	printf("The sum of left diagonal elements is : %d",sum);

}
