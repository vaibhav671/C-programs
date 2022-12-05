#include<stdio.h>
void main(){
	int x=10;
	char ch='A';
	double d=20.021;

	void *arr[]={&x,&ch,&d};  // void pointer cn store any datatype but to derefernce it shoud be type cast
	
	printf("Adresss are :\n");
	printf("%p\n",arr[0]);
	printf("%p\n",arr[1]);
	printf("%p\n",arr[2]);
	
	printf("Value of array are ;\n");
	printf("%d\n",*((int *)arr[0]));
	printf("%c\n",*((char *)arr[1]));
	printf("%f\n",*((double *)arr[2]));
}

