#include<stdio.h>
void main(){
	int n;
	printf("Enter the size of arr :\n");
	scanf("%d",&n);

	int arr[n];

	printf("Enter the elements of array :\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int swap=-1000;
	for(int i=0;i<n;i++){
		if(swap<arr[i]){
			swap=arr[i];
		}else if(swap>arr[i]){
			int temp=arr[i];
			arr[i]=swap;
			i--;
			arr[i]=temp;
			i=0;
			swap=arr[i];
		}
	}

	printf("\nThe sorted array of given array are :\n");
	for(int i=0;i<n;i++){
		printf("%d\n",arr[i]);
	}
}



