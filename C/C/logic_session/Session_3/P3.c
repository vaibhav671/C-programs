#include<stdio.h>
void main(){
	int row,x=1;
	printf("Enter the no.of row :\n");
	scanf("%d",&row);

	for(int i=1;i<=row;i++){
		for(int j=1;j<=i;j++){
			printf("%d\t",x);
		}
		x++;
		printf("\n");
	}


}
