#include<stdio.h>
void main(){
	int x,y;
	printf("Enter the range :\n");
	scanf("%d\n%d",&x,&y);
	for(int i=x;i<=y;i++){
		for(int j=1;j<=100;j++){
			if(i==j*j){
				printf("The square root of %d is %d\n",i,j);
			}
		}
	}
}
