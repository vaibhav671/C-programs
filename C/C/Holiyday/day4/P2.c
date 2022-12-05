#include<stdio.h>
void swap(int x,int y){
	int temp=x;
	x=y;
	y=temp;
	printf("After sawping values are :\n");
	printf("%d\n%d",x,y);
}

void main(){
	int a,b;
	printf("Enter two no.s :\n");
	scanf("%d\n%d",&a,&b);

	printf("The value befor swaping are:\n%d\n%d\n",a,b);
	swap(a,b);	
}
