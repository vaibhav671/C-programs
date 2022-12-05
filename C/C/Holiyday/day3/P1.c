#include<stdio.h>
void main(){
	int x;
	printf("Enter the size of array:\n");
	scanf("%d",&x);
	int arr[x];

	printf("Enter the elements of array  :\n");
	
	for(int i=0 ;i<x ;i++){
		scanf("%d",&arr[i]);
	}


	printf("The value of array using pointer are: \n");
	
	for(int i=0;i<x;i++){
		printf("%d\n",*(arr+i));

	}
}

