#include<stdio.h>
void main(){
	int row;
	printf("Enter the no. of row:\n");
	scanf("%d",&row);
	
	for(int i=1;i<=row;i++){
		for(int j=1;j<=i;j++){
			int a=i;
			printf("%d\t",a);
			a++;
		}
		printf("\n");
	}
}

