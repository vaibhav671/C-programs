#include<stdio.h>
void main(){
	int size;
	printf("Enter the size of array : ");
	scanf("%d",&size);
	printf("Enter the elements of array :\n");

	int arr[size],arr1[size];
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	printf("The elements of array 1 are :\n ");
	for(int i=0;i<size;i++){
		printf("%d\n",arr[i]);
	}

	for(int i=0;i<size;i++){
		arr1[i]=arr[i];
		printf("%d\n",arr1[i]);
	}
}
