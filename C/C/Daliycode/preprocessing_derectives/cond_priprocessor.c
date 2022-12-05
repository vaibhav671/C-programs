# undef parameter
#include<stdio.h>
#define access 1

void main(){
	#if access
	printf("Access per__\n");
	#else
	printf("Not_Access\n");
	#endif
	printf("EOF\n");

}
