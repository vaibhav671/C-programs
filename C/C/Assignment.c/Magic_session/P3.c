#include<stdio.h>
void main(){
	int x,y;
	printf("Enter start value and end value : \n");
	scanf("%d\n%d",&x,&y);
	printf("The composit no.s between the range are : \n");
	for(int i=x;i<=y;i++){
		if(i%2==0 || i%3==0){
			if(i!=2 && i!=3){
				printf("%d  ",i);
			}
		}
	}
}
