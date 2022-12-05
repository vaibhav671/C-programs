/*wap that takes a no. from 0-5 and print its spelling if the no.is greater then 5 print entered no. is greater than
 5*/

#include <stdio.h>
void main(){
	int x;
	printf("Enter from between 0-5 :\n");
	scanf("%d",&x);
	switch(x){
		case 0:
			printf("Zero\n");
			break;
		case 1:
			printf("One\n");
			break;
		case 2:
		        printf("Two\n");
		        break;
		case 3:
			printf("Three\n");
			break;
		case 4:
			printf("Four\n");
			break;
		case 5:
			printf("Five\n");
			break;

		default :
			printf("You have Enter value more than 5\n");
			break;
	}
}


