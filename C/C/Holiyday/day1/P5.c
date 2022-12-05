#include<stdio.h>
void main(){
	int x;
	printf("Enter the size of array :\n");
	scanf("%d",&x);

	int arr[x];

	printf("Enter the elements of array:\n");
	for(int i=0;i<x;i++){
		scanf("%d",&arr[i]);
	}

	int max1=-10000,max2=-10000;
	for(int i=0;i<x;i++){
		if(max1<arr[i]){
			max2=max1;
			max1=arr[i];
		}else if(max2<arr[i] && max1>arr[i]){
			max2=arr[i];
		}
	}

	printf("The 2nd largest value of array is : %d",max2);
}


		
