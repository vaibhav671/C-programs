#include <stdio.h>
void main(){
	printf("start main\n");
	int x;
	int y;
	scanf("%d%d",&x,&y); 
	printf("x= %d\n",x);
	printf("y=%d\n",y);
	if(x ){
		printf("x is in frist if block\n");
	}
	if(y){
		printf("y is in second if block\n");
	}
	printf("End main");
}
