#include<stdio.h>
void main(){
	int x,y;
	printf("Enter table no. and upto where you want: \n");
	scanf("%d\n%d",&x,&y);
	for(int i=y;i>=1;i--){
		printf("%d*%d=%d\n",x,i,x*i);
	}
}


