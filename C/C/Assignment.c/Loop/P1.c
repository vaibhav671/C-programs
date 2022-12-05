#include <stdio.h>
void main(){
	int x,div;
	printf("Enter no. :\n");
	scanf("%d",&x);
	printf("Enter the divisor : \n");
	scanf("%d",&div);
	if(x%div==0){
		printf("The %d is divisor of %d\n",x,div);
	}else if(x%div>0){
		printf("The no. %d is not a divisor of %d\n",x,div);
	}else{
		printf("Invaild input\n");
	}
}

