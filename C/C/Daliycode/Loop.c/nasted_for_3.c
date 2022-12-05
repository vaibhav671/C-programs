#include<stdio.h>
void main(){
	int row;
	scanf("%d",&row);
	for(int i=1;i<=row;i++){
		char ch='A';
		for(int j=row-1;j>=i;j--){
			printf(" ");
		}
		for(int k=1;k<=i;k++){
			printf("%c",ch);
			ch++;
		}
		printf("\n");
	}
}
