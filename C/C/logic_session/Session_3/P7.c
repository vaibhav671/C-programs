#include <stdio.h>
void main(){
	int row;
	
	printf("Enter the no.of row:\n");
	scanf("%d",&row);

	char ch=64+row;
	for(int i=1;i<=row;i++){
		for(int j=1;j<=i;j++){
			printf("%c\t",ch);

		}
		printf("\n");
		ch--;
	}

}
