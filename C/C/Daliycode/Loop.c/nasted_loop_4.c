#include<stdio.h>
void main(){
	int x=1;
	for(int i=1;i<=5;i++){
		for(int j=1;j<=i;j++){
			printf("%d ",x);
			x++;
		}
		printf("\n");
	}
}
