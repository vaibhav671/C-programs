#include<stdio.h>
void main(){
	int row;
	printf("Enter the no. of row you need:\n");
	scanf("%d",&row);

	for(int i=1;i<=row;i++){
		int x=3;
		char ch='c';
		for(int j =1;j<=3;j++){
			if(i%2==0){
				printf("%c ",ch);
				
			}else{
				printf("%d ",x);
			}
			x--;
			ch--;
		}
		
		printf("\n");
	}
}
