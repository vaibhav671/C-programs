#include<stdio.h>
void main(){
	int x;
	printf("Enter any +ve or -ve number :\n ");
	scanf("%d",&x);
	if(x<0){
		printf("You have Enter negative no.\n");
	}else if (x>0){
		printf("You have enter positive no.\n");
	}else{
		printf("You have enter 0 value\n");
	}
}
