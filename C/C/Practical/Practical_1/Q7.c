#include <stdio.h>
void main(){
	int x,y,z;
	printf("Enter three sides of Triangle :\n");
	scanf("%d",&x);
	scanf("%d",&y);
	scanf("%d",&z);
	if(x*x + y*y==z*z){
		printf("The given Triangle is triplate ");
	}else{
		printf("It is not triplate");
	}
}
