#include<stdio.h>
void main(){
	int row;
	printf("The no. row : ");
	scanf("%d",&row);

	for(int i=1;i<=row;i++){
	
		int x=row;
		char ch='a';
	
		for(int j=1;j<=row;j++){
			if(j%2==0){
				printf("%c ",ch);
				ch++;
			}else{
				printf("%d ",x);
				x--;
			}
		}
		printf("\n");
	}
}

