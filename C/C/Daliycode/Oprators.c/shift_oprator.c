#include<stdio.h>
void main (){
	int x =15;
	int y=78;
	printf("The value of x is :%d\n",x);
	printf("The value of y is :%d\n",y);
	int ans ;
	ans =x<<3;
	printf("The vale of x shifting by 3 on left is :%d\n",ans);
	ans =y>>2;
	printf("The vale of y shifting by 2 on right is :%d\n",ans);
	ans =x--<<3;
	printf("The vale of x-- shifting by 3 on left is :%d\n",ans);
	ans =++y>>4;
	printf("The vale of ++y shifting by 4 on right is :%d\n",ans);
}
