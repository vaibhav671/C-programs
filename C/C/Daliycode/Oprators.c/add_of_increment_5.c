#include<stdio.h>
void main(){
	int x =8;
	printf("The value of x is :%d\n",x);
	int ans = x++ + ++x + ++x;// it works as (++x + ++x)+ ++x
	
	printf("After incrementing 3 times The value of x is:%d\n",x);


	printf("After adding 1 post incrementing & 2 pre increment:%d\n",ans);
}
