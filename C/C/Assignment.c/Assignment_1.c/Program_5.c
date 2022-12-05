#include<stdio.h>
void main(){
	int x;
	printf("Enter the no. that is to be check :");
	scanf("%d",&x);
	if(x/5 || x/11){
		printf("It is divisible by 5 & 11\n");
	}else{
		printf("It is not divisible by 5 && 11\n ");
	}
}
