#include<stdio.h>
int main(){

	char word;
	printf("Enter any charactars \n");
lable:	scanf("%c",&word);
	printf("You have enter following Word :%c\n",word);
	
	if (word>='A' && word<='Z'){
		printf("You have Enter UPPERCASE value  \n ");
	}
	else if (word>='a' && word<='z'){
		printf("You have Enter LOWERCASE value \n");
	}
        else{
		printf("You have Enter INVALID Charcter value \n ");

		goto lable;
	}
}
