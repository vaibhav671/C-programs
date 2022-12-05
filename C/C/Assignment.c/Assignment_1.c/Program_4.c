#include<stdio.h>
void main(){

	int x;
        int y;
	printf("Enter any 2 no. to compare : \n");
        scanf(" %d%d",&x,&y);
	if(x<y){
	       printf("The max value is : %d\n",x);
               }
	else if(y<x){
	       printf("The max value is : %d\n",y);
	}else{
	       printf("The value is same\n ");
 	}
}
