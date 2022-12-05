// WAP Square of odd no.s
#include<stdio.h>
void main(){
	int x,y;
	printf("Enter the Start and End value :\n");
	scanf("%d\n%d",&x,&y);

	for(int i=x;i<=y;i++){
		printf("%d ",x*x);
		x++;
	}
}
