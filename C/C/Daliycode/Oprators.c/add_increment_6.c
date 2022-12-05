#include<stdio.h>
void main(){
	int x=7;
	printf("enter no. :");
	//scanf("%d",&x);
	int ans;
	ans =++x + x++ + ++x + x++ + x++;
	printf("\nThe value of x after 4 time increment :%d ",x);
	printf("\nThe value of ans : %d ",ans);
}
