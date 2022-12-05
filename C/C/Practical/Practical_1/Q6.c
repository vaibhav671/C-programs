/* wap to get 10 no. from user  do sum and ave*/
#include <stdio.h>
void main(){
	int x,num=0,num1=0;
	printf("Enter no. to be sum\n ");
	for(int i=1;i<=10;i++){
		scanf("%d",&x);
		num=num+1;
		num1=num1+x;
	}
	printf("The sum is %d\n",num1);
	printf("The ave is %d\n",num1/num);
}


