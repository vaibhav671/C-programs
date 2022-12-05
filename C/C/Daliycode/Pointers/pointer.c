#include<stdio.h>
void main(){
	int x=10;
	int *ptr=&x;

	printf("Address of x:%p\n",&x);
	printf("value of x is:%d\n",x);
	printf("Address of pointer is:%p\n ",&ptr);
	printf("value of pointer is :%p\n",ptr);
	printf("value at pointer is :%d\n",*ptr);
}
