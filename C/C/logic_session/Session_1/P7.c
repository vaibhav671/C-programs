/* WAP  to  4 4 4 4
            3 3 3 3
	    2 2 2 2
	    1 1 1 1    */
#include<stdio.h>
void main(){
	int row;
	printf("Enter the Row no.:\n");
	scanf("%d",&row);

	for(int i=row;i>=1;i--){
		for(int j=1;j<=row;j++){
			printf("%d  ",i);
		}
		printf("\n");
	}
}
