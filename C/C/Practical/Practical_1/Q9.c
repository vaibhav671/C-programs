#include <stdio.h>
void main(){
	int x,y,z,num=0;
	printf("Enter the range : \n");
	scanf("%d",&x);
	scanf(" %d",&y);
	printf("Enter the no. you divisor :\n");
	scanf("%d",&z);
	printf("The count of no. divisor are :\n");
	for(int i=x;i<=y;i++){
		if(z%i==0){
			num=num+1;
			printf("divisor is : %d \n",i); 
		}
	}
	printf("The total count is : %d",num);
}
