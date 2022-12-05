#include<stdio.h>
void main(){
	
	int m=1,x,y;
	printf("Enter the range :\n");
	scanf("%d\n%d",&x,&y);

	for(int i=x;i<=y;i++){
		if(i%2==0){
			m=i*m;
			
		}
	}
	printf("The product of range is : %d \n",m);
}
