#include<stdio.h>
void main(){
	// It converts to binary frist then perform "And" ,"Or" oprator
	int x=5;
	int y=6;
	int ans=x&y;
	printf("The value of x is %d\n",x);
	printf("The value of y is %d\n",y);
	printf("The value of x & y bitwise oprator'&' is : %d\n",ans);
	int Ans=x|y;
	printf("The value of x & y bitwise oprator'|' is : %d\n",Ans);
}
