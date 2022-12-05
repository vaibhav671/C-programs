#include<stdio.h>
void main(){
	char ch;
	printf("Enter any character :\n ");
	scanf("%c",&ch);
	if(ch=='A'|| ch=='a'||ch=='I'||ch=='i'||ch=='O'||ch=='o'||ch=='E'||ch=='e'||ch=='u'||ch=='U'){
		printf("%c is a vowel  \n",ch);
	}else{
		printf("%c is consonant  \n",ch);
	}
}

