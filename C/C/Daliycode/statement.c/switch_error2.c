#include<stdio.h>
void main (){
	int input;
	int x=2;
	int y=3;
	printf("give no. :n");
	scanf("%d",&input);
	switch(input){
		case 5:
			printf("5");
			break;
		case 2+3:
			printf("2+3");
			break;
                case 3+2:
			 printf("3+2");
			 break;
		default :
			 printf("In Default");

		}
}
