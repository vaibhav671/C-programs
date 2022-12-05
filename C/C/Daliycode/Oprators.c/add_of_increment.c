#include <stdio.h>
int x=10;
void fun(){
	int y=20;
	int ans;
	ans =++x + ++y;
	printf("The Addition of two increment is :\n%d\n",ans);
}
int main(){
	printf("In main Function\n");
	fun();
	printf("%d\n",x);
	printf("End of main function");
}

