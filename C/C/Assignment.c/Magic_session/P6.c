#include<stdio.h>
void main(){
	int row;
	
	printf("Enter no. of row : ");
	scanf("%d",&row);
	char ch=64+row,ch1=96+row;

	for(int i=1;i<=row;i++){
		for(int j=1;j<=row;j++){
			if(i%2==0){
				
				if(j%2==1){
					printf("%c ",ch1);
				}else{
					printf("%c ",ch);
				}
				ch--;
				ch1--;
			}else{
				if(j%2==1){
					printf("%c ",ch);
				}else{
					printf("%c ",ch1);
				}
				ch++;
				ch1++;
			}

		}
		ch= 64+row+i;
		ch1=96+row+i;
		printf("\n");
	}
}
