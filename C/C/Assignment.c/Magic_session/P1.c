#include<stdio.h>
void main(){
	int x;
	printf("Enter the divisor : ");
	scanf("%d",&x);
	for(int i=1;i<=x;i++){
		if(30%i==0){
			printf("%d\n",i);
		}
	}
}


