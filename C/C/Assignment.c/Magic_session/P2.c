#include<stdio.h>
void main(){
	int x;
	int count=1;
	printf("Enter the max no. digit : ");
	scanf("%d",&x);
	for(int i=1;i<=100;i++){
		x=x/10;
		if(x>0){
			count=count+1;
		}
	}
	printf("The no. of digits are : %d",count);
}

