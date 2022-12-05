#include<stdio.h>
void main(){
	int x=10,y=20,z=30;

	int *parr[]={&x,&y,&z};// array of pointers
	printf("The value at array are: \n");
	for(int i=0;i<3;i++){
		printf("%d\n",*(*(parr+i)));
	}
}	
