#include <stdio.h>
void main (){
	int x,y,num=0;
	printf("Enter the rang between 2 Three digit no. :\n");
	scanf("%d",&x);
	scanf(" %d",&y);
	printf("The first 10 numbers between the range are :\n");
	for(int i=x;i<=y;i++){
		num=num+1;
		if(num<=10){
			printf("%d\n",i);
		}
	}
}
