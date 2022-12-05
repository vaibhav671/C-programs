#include<stdio.h>
void main(){
	int arr[]={10,20,30,40,50};
	int (*ptr)[5]=&arr;// pointer to an array

	printf("The value of pointer to an array are:\n");

	for(int i=0; i<5; i++){
		printf("%d\n",*(*ptr+i));
	}

}
