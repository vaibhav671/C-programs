#include<stdio.h>
void main(){
	int sum=0, size;
	printf("Enter the size of array : ");
	scanf("%d",&size);
	int arr[size];
        
	printf("Enter the no. of elements :\n");
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<size;i++){
		sum=sum+arr[i];
	}
	printf("The sum of elements in the array is %d ",sum);
}


