#include<stdio.h>
void main(){
	int x=8;
	int y=11;
	printf("The value of x is %d\n",x);
	printf("The value of y is %d\n",y);
	int ans=++x||++y; //If first value is true i.e 1 then it doesn't perform 2 value in OR "||"
	printf("The value of x after increment is %d\n",x);
	printf("The value of y after increment is %d\n",y);
	printf("Or between both X increment and y increment :%d\n",ans);
	int Ans=x++ && ++y; //If first value is false i.e 0 then it doesn't perform 2 value in And "&"
	printf("The value of x is %d\n",x);
	printf("The value of y is %d\n",y);
	printf("And between both X post increment and y pre increment :%d\n",ans);
}
