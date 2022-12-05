#include <stdio.h>
void main(){
	int x,y;
	printf("Enter starting range :\n");
	scanf("%d",&x);
	printf("Enter the ending range :\n");
	scanf("%d",&y);
	printf("The evens no. between the range :\n ");
	for(int i=y;i>=x;i--){
		if(i%2==0){

			printf("%d\n",i);
		}
	}
	printf("The odd no. between the range :\n");
	for(int i=x;i<=y;i++){
		if(i%2==1){
			printf("%d\n",i);
		}
	}
}
