#include<stdio.h>
void main(){
	int x,fact=1;
	printf("Enter the no. whose factorial you want :\n");
	scanf("%d",&x);
	for (int i=1;i<=x;i++){
		fact=fact*i;
	}
	printf("The factorial of %d is %d\n",x,fact);
}
