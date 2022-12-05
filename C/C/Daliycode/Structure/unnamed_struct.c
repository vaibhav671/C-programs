#include <stdio.h>

struct {
	int x;
	int y;
}obj={11,12};

void main(){
	printf("%d\n",obj.x);
	printf("%d\n",obj.y);
}
