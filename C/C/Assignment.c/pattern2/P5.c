#include<stdio.h>
void main(){
	int  row;
	printf("Enter the no. of row you need:\n");
	scanf(" %d",&row);
	char ch = 'd';
	char chr = 'D';
	for(int i=1;i<=row;i++){
		for(int j=1;j<=4;j++){
			if(i%2==1){
				printf(" %c ",chr);
			}else{
				printf(" %c ",ch);
			}
			ch--;
			chr--;
		}
		ch=ch+5;
		
		printf(" \n");
		chr=chr +5;
	}
}
