#include<stdio.h>
void main(){
	int size;
	printf("Enter the size of array : ");
	scanf("%d",&size);
        int arr[size];
	printf("Enter the element of array :\n");
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	printf("\n");
	for(int i=0;i<size;i++){
		printf("%d\n",arr[i]);
	}
}
