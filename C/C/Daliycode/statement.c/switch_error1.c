#include <stdio.h>
void main(){
	int x;
	printf("Enter value : \n");
	scanf("%d",&x);
	switch(x){
		case 65:
			printf("value of x is 65 \n");
			break;
		case 'A':
			printf("value of A is \n");
		default :
			printf("Invalid input ");
	}
}
