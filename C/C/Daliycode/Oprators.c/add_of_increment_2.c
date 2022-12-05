#include <stdio.h>
void main(){
	int x=5;
	int ans;
	printf("%d\n",x);
	ans=x++ + x++;
	printf("value of x after 2 times post increment :%d\n",x);
	printf("The vale of addition of both post increment value :%d\n",ans);
}
