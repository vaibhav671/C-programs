#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct phone{
	char brand[20];
	int ram;
	float price;
};
void main(){

	struct phone *ph=(struct phone*)malloc(sizeof(struct phone));
	strcpy(ph->brand,"vivo");
	ph->ram=8;
	ph->price=15.50;

	printf("%s\n%d\n%f\n",ph->brand,ph->ram,ph->price);
}

