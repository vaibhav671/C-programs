#include<stdio.h>
void main(){
	int size;
	printf("Enter the size of array : ");
	scanf("%d",&size);
	int arr[size];

	printf("Enter the element of array : \n");
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	int search ,found=0;
	printf("Enter the search no. :\n");
	scanf("%d",&search);
	for(int i=0;i<size;i++){
		if(arr[i]==search){
			found=1;
		}else{
			found=0;
		}
	}
	if(found==1){
		printf("FOUND\n");
	}else{
		printf("NOT FOUND\n");
	}
}


