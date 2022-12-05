#include<stdio.h>
void main(){
	int roll=21;
	char div='B';
	float per=80.62;

	void *arr[]={&roll,&div,&per};

	printf("Address of void array is : %p\n",&arr[0]);

	printf("\nThe address in array are :\n");
	printf("arr int: %p\n",arr[0]);
	printf("arr char: %p\n",arr[1]);
	printf("arr int: %p\n",arr[2]);

	printf("\nThe value at array are:\n");
	printf("arr int: %d\n",(*(int *)arr[0]));
	printf("arr char: %c\n",(*(char *)arr[1]));
	printf("arr int: %lf\n",(*(float *)arr[2]));

}
