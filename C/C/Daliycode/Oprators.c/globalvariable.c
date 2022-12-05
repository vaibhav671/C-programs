#include<stdio.h>
int a=10;//global variable
void fun(){
	int x=20;//local variable for fun()
	printf("In function :%d\n",x);
}
void main(){
	int y=30;//local variable for main()
	printf("start main function\n");
	fun();
	printf("End of main function\n");
}

