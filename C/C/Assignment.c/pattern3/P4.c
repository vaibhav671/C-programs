#include<stdio.h>
void main(){
	char ch='a',ch1='A';
	int row;

	printf("Enter no. of row : ");
	scanf("%d",&row);

	for(int i=1;i<=row;i++){
		for(int j=1;j<=row;j++){
			if(j%2==1){
				printf("%c ",ch);

			}else{
				printf("%c ",ch1);
			}
			ch++;
			ch1++;
		}
		ch=ch-(row-1);
		ch1=ch1-(row-1);
		printf("\n");
	}
}
