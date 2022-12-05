#include<stdio.h>
void main(){
	int x;
	printf("Enter the length of array : ");
	scanf("%d",&x);
	int arr[x];

	for(int i=0;i<x;i++){
		scanf("\n%d",&arr[i]);
	}
	printf("The value of array is :\n");
	for(int i=0;i<x;i++){
		printf("%d\n",arr[i]);
	}

}
