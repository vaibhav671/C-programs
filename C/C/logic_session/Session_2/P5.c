#include <stdio.h>
void main(){
	int row;
	printf("Enter the no. of row:\n");
	scanf("%d",&row);

	char ch1='a',ch2='A';
	
	for(int i=1;i<=row;i++){
		for(int j=1;j<=row;j++){
			if(j%2==0){
				printf("%c  ",ch2);
			}else{
				printf("%c  ",ch1);
			}
			ch1++;
			ch2++;
		}
		printf("\n");
	}
}

