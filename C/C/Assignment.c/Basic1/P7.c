#include<stdio.h>
void main(){
	int x,y;
	printf("Enter no.of which table you want and to where  :\n");
	scanf("%d\n %d",&x,&y);

	for(int i=1;i<=y;i++){
		printf("%d*%d = %d\n",x,i,x*i);
	}
}
	
