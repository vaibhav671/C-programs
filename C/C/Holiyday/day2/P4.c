#include<stdio.h>
int x=10;
int *ptr=0;// Null pointer
void fun(){
	int y=10;
	ptr=&y;
	printf("\nAfter giving null pointer some value: %d\n",*ptr);
}

void main(){
	printf("Address of Null ptr is: %p\n",ptr);
	int x=10;
	char ch='A';
	float f=20.23;
	
	void *vptr1=&x;//   void
	void *vptr2=&ch;//  pointers
	void *vptr3=&f;//   

	printf("\nvalue at void ptr1 is : %d\n",(*(int *)vptr1));
	printf("value at void ptr2 is : %c\n",(*(char *)vptr2));
	printf("value at void ptr3 is : %lf\n",(*(float *)vptr3));

	fun();
	printf("\nDangling ptr is : %d\n",*ptr);// Dangling pointer
	int *ptr2;//Wild pointer

}
