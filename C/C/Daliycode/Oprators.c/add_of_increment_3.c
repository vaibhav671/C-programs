#include<stdio.h>
void main(){
		int x =8;
		printf("The value of x is :%d\n",x);
	        int ans =x++ + ++x;
		printf("After incrementing 2 times The value of x is:%d\n",x);
		printf("After adding post incrementing & pre increment:%d\n",ans);
}
