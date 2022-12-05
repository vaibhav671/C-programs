#include<stdio.h>
void main(){
	int x;
	printf("Enter no. : ");
	scanf("%d",&x);
	if(x<10){
		printf("The value %d is smaller then 10 :\n ",x);
	}
	else if(x>10){
		printf("The value %d is greater then 10 :\n ",x);
	}else{
		printf("The is equal to 10\n");
	}
}


