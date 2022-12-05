#include<stdio.h>

struct demo{
	int x:2;
	int y:2;
};
void main(){
	printf("%ld\n",sizeof(struct demo));
}
