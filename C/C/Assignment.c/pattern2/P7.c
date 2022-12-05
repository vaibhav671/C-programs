#include<stdio.h>
void main(){
	int x=1, row;
	printf("Enter the no. of row you need:\n");
	scanf("%d",&row);
	
	for(int i=1;i<=row;i++){
		
		for(int j =1;j<=4;j++){
			if(i%2==0){
				printf(" %d ",x*x);
			}else{
				printf(" %d ",x);
			}
			x++;
		}
		
		printf("\n");
	}
}
