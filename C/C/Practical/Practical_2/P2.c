/* wap to print addition 1-10 with 10-1*/

#include <stdio.h>
void main(){
	int x,y,z=0;
	printf("Enter the Range you want the addition : \n");
	scanf("%d",&x);
	scanf("%d",&y);
	z=y;
	for(int i=x;i<=y;i++){
		printf("%d +%d =%d\n",i,z,i+z);
		z--;
		
	}

}

