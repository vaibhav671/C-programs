/* wap to find sum of numbers that are not divisible by 3 upto a given number input :10,output :sum of nos. are not divisible by 3 is 37*/

#include <stdio.h>
void main (){
	int x;
	int y=0;
	printf ("Enter no. :\n");
	scanf("%d",&x);
	for (int i=1;i<=x;i++){
		if(i%3!=0){
			y=y+i;
		}
	}
	printf("sum of numbers are not divisible by 3 is %d \n",y);
}
