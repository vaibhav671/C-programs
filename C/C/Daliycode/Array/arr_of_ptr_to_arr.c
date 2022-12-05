#include <stdio.h>
void main() {
	int arr[]={1,2,3};
	int arr1[]={4,5,6};
	                 
	int(*ptr)[3]=&arr;
	int(*ptr1)[3]=&arr1;
	                            
	double*arr2[2];
	*arr2[0]=(*ptr)[3];
	*arr2[1]=(*ptr1)[3];
	printf("%p\n",arr2[0]);
	printf("%p\n",arr2[1]);
}
