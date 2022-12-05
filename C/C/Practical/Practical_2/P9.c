#include<stdio.h>
void main(){
	int x,m;
	printf("Enter the no. : ");
	scanf("%d",&x);
	printf("The reverse of given no. is : \n");
	while(x>0){
		m=x%10;
		x=x/10;
		printf("%d",m);
	}
}

