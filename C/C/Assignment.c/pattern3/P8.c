#include<stdio.h>
void main(){
	int row;
	printf("Enter the row no. : ");
	scanf("%d",&row);
	int x=row*row;
	char ch='A';
	ch=ch+x-1;
	for(int i=1;i<=row;i++){
		for(int j=1;j<=row;j++){
			if(i%2==1){
				printf("%d ",x);
			}else{
				printf("%c ",ch);
			}
			x--;
			ch--;
		}
		printf("\n");
	}
}
