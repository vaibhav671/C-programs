#include<stdio.h>
void main(){
	
	int sum=0,x,y;
	printf("Enter the range :\n");
	scanf("%d\n%d",&x,&y);

	for(int i=x;i<=y;i++){
		if(i%2==0){
			sum=i+sum;
			
		}
	}
	printf("The sum of first 10 no. of range is : %d \n",sum);
}
