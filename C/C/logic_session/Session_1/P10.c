/* WAP  to     1 3 5
               7 9 11
	       13 15 17 */
#include<stdio.h>
void main(){
	int row;
	printf("Enter the Row no.:\n");
	scanf("%d",&row);

	int x=1,count=0;
	for(int i=1;i<=row;i++){
		for(int j=1;j<=row;j++){
			printf("%d  ",x);
			x=x+2;
		}
		printf("\n");
	}
}
