#include<stdio.h>
void main(){
	FILE *fp=fopen("budrupe.txt","r");
	int x;
	fscanf(stdin,"%d","&x");
	fprintf("%d\n",x);
}
