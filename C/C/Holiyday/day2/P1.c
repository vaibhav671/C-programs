#include<stdio.h>
void main(){
	int x=20;
	
	int *ptr=&x;
	int *ptr1=ptr;
	int **ptr2=&ptr;
	int ***ptr3=&ptr2;

	printf("The value of x is : %d\n",x);
	printf("The value of *ptr is : %d\n",*ptr);
	printf("The value of *ptr1 is : %d\n",*ptr1);
	printf("The value of **ptr2 is : %d\n",**ptr2);
	printf("The value of ***ptr3 is : %d\n",***ptr3);


	printf("\nThe Address of x is : %p\n",&x);
	printf("The Address in ptr is : %p\n",ptr);
	printf("The Address in ptr1 is : %p\n",ptr1);
	printf("The Address in ptr2 is : %p\n",ptr2);
	printf("The Address in ptr3 is : %p\n",ptr3);
}


