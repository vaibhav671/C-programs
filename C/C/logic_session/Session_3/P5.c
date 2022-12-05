#include <stdio.h>
void main(){

	int row;
	char ch='a';

	printf("Enter the no. of rows :\n");
	scanf("%d",&row);
	for(int i=1;i<=row;i++){
		for(int j=1;j<=i;j++){
			printf("%c\t",ch);
			ch++;

		}
		printf("\n");

	}
}
