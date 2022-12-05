#include <stdio.h>
void main(){
	int x,b=1,m;
	printf("Enter a digit : \n");
	scanf("%d",&x);
	while(x>0){
		m=x%10;
		b=b*m;
		x=x/10;
	}
	printf("The no. of product are %d\n",b);
}
