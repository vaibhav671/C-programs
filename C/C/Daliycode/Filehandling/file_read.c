#include<stdio.h>
void main(){
	FILE *fp=fopen("FILE.txt","r");
	printf("%p\n",fp);
	FILE *fp1=fopen("vaibhav.txt","r");
	printf("%p\n",fp1);
}

