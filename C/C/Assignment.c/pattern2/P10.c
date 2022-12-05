#include<stdio.h>
void main(){
	int row;
	printf("Enter the no. of row you need:\n");
	scanf("%d",&row);
	
	for(int i=1;i<=row;i++){
		
		char ch='A';
		int x=1;
		for(int j =1;j<=4;j++){

			if(i%2==0){
				printf(" %c%d ",ch,x);
				ch++;
				x++;
			}else{
				printf(" %c%d ",ch+3,x+3);
				x--;
				ch--;
			}

		}
		
		printf("\n");
	}
}
