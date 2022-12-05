#include <stdio.h>
void main(){
	int arr1[3]={10,20,30};
	int arr2[3]={40,50,60};

	int (*ptr1)[3]=&arr1;
	int (*ptr2)[3]=&arr2;

	int *arr[2];// array of pointer to an array
	arr[0]=*ptr1;
	arr[1]=*ptr2;

	printf("The address in array of pointer to an array are:\n");
	printf("%p\n",arr[0]);
	printf("%p\n",arr[1]);

	printf("\nThe value in that array are :\n");
	printf("%d\n",*(arr[0]));
	printf("%d\n",*(arr[1]));
}
