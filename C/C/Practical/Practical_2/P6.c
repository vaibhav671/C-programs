#include <stdio.h>
void main(){
	int x,count=0;
	printf("Enter a digit : \n");
	scanf("%d",&x);
	while(x>0){
		count=count+1;
		x=x/10;
	}
	printf("The no. of digits are %d\n",count);
}
		
