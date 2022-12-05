// WAP to no. divison  3 & 7 betn rang from reverse
#include <stdio.h>  
void main(){
	int x,y;
	printf("Enter the Starting and Ending value :\n");
	scanf("%d%d",&x,&y);

	for(int i=y;i>x;i--){
		if(i%3==0 && i%7==0){
			printf("%d ",i);
		}
	}
}
