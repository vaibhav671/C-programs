/* WAP  to  A A A
            B B B
	    C C C    */
#include<stdio.h>
void main(){
	int row;
	printf("Enter the Row no.:\n");
	scanf("%d",&row);

	for(int i=row;i>=1;i--){
		char ch='A';
		for(int j=1;j<=row;j++){
			printf("%c  ",ch);
			ch++;
		}
		printf("\n");
	}
}

