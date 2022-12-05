#include <stdio.h>
void main(){
	int x,y=0,i=1;
	printf("Enter no. : \n");
	scanf("%d",&x);
	while(i<=x){
		y=y+i;
		printf("%d ",y);
		
		i++;
	}
}
