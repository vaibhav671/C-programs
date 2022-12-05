#include<stdio.h>
void main(){
	int x=3;
	int y=5;
	
	printf("The value of x is :%d\n",x);
	printf("The value of y is :%d\n",y);

	int ans= x--^++y;
	printf("The value of x after x--^++y is :%d\n",x);
	printf("The value of y after x--^++y is :%d\n",y);

	printf("The value of XOR Bitwise oprator after x--^++y is :%d\n",ans);
}
