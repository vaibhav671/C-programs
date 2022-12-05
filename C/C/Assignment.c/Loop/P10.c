#include<stdio.h>
void main (){
	int x,y;
	printf("Enter the range :\n");
	scanf("%d\n%d",&x,&y);
	printf("The inverse of the range are :\n");
	for (float i=x;i<=y;i++){
		printf("%f\n",1/i);
	}
}
