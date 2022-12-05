/* wap to print that takes angels of a tringles from th user and print wether that trianle
  vailed or not i/p = 30,60,70 */


#include<stdio.h>
void main(){
	int x,y,z;
	printf("Three angles of tringle :\n");
	scanf("%d",&x);
	scanf("%d",&y);
	scanf("%d",&z);
	if(x+y+z==180){
		printf("The tringle is valide\n");
	}else{
		printf("The triangle is invalid");
	}
} 
