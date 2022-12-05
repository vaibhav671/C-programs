#include <stdio.h>
void main(){
	int x,y,num=0;
	printf("Enter any to no. : \n");
	scanf("%d",&x);
	scanf("%d",&y);
	printf("The numbers are : \n");
	for(int i=x;i<=y;i++){
		num=num+1;
		if(num<=100){
			
			printf("%d\n",i);
		}
	}
}
