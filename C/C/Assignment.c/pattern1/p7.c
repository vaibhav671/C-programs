#include<stdio.h>
void main(){
	int row,x=1;
	printf("Enter the no. of row you need:\n");
	scanf("%d",&row);
	

	for(int i=1;i<=row;i++){
		for(int j =1;j<=4;j++){
			if(j%2==1){
				printf("%d    ",x*x);
			}else{
				printf("%d    ",x);
			}
			x++;
		}
		printf("\n");
	}
}
