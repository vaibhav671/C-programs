#include<stdio.h>
void main(){
	char ch;
	printf("Enter any character : ");
	scanf("%c",&ch);
	if(ch>='A' && ch<='Z' ){
		printf("You have enter UPERCASE letter\n");
	}
	else if(ch>='a' && ch<='z' ){
		printf("You have enter LOWERCASE letter\n");
	}else{
		printf("you have entre INVALID input\n ");
	}
}
