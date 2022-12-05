#include<stdio.h>
void main(){
	int x=10;
	char ch='A';
	float f=12.351;

	void *ptr1=&x;
	void *ptr2=&ch;
	void *ptr3=&f;

	printf("\nThe Address in pointers are :\n");
	printf("int ptr : %p\n",ptr1);
	printf("char ptr : %p\n",ptr2);
	printf("float ptr : %p\n",ptr3);
	

	printf("\n\nThe value in pointers are :\n");
	printf("int ptr : %d\n",(*(int *)ptr1));
	printf("char ptr : %c\n",(*(char *)ptr2));
	printf("float ptr : %lf\n",(*(float *)ptr3));
}
