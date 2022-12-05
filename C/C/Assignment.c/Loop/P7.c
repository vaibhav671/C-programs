#include<stdio.h>
void main(){
	int x,y,a,lcm;
	printf("Enter two nos. whose LCM you want :\n");
	scanf(" %d\n%d",&x,&y);
	for(int i=1;i<=x && i<=y;i++){
		
		if(x%i==0 && y%i==0){
			a=i;
		}
	}
	lcm=(x*y)/a ;
        printf("The LCM between %d and %d is %d \n",x,y,lcm);	
}
