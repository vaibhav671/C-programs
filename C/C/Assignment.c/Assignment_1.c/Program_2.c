#include <stdio.h>
void main(){
	int x=9;
	int ans = ++x + x++ + ++x ;	
	printf("value of ans :%d\n",ans);
	printf("The value of x is : %d\n",x);
	int ans1= ++x + ++x + ++x + ++x;
	printf("The value of ans is : %d\n",ans1);
	printf("The value of x is : %d\n",x);
	int ans2 =x++ + x++ + ++x + x++ + ++x;
	printf("The value of ans2 is : %d\n",ans2);
	printf("The value of x is : %d\n",x);
	int ans3 =x++ + x++ + x++ + x++;
	printf("The value of ans3 is : %d\n",ans3);
	printf("The value of x is : %d\n",x);
}
