// WAP to check whether the given i/p is char,int or special character 

#include <stdio.h>
void main(){
	char x;
	printf("Enter the input :\n");
	scanf("%c",&x);

	if(x>=48 && x<=57){
		printf("It is a Digit\n");
	}else if(x>=48 && x<=57){
		printf("It is a upper case Alphabet\n");
	}else if(x>=97 && x<=122){
		printf("It is a lower case Alphabet\n");
	}else{
		printf("It is a Special charecter\n");
	}
}
