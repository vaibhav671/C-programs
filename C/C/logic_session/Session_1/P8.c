/* WAP  to  9 8 7
            6 5 4
	    3 2 1    */
#include<stdio.h>
void main(){
	int row;
	printf("Enter the Row no.:\n");
	scanf("%d",&row);
	
        int x=row*row;
	for(int i=row;i>=1;i--){
		for(int j=1;j<=row;j++){
			printf("%d  ",x);
			x--;
		}
		printf("\n");
	}
}
