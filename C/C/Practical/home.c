#include<stdio.h>
void main(){
	char ch,ch1;
	printf("Enter the lower Range :\n");
	scanf("%c",&ch);
	printf("Enter the higher Range :\n");
	scanf(" %c",&ch1);

	for(char ch2 =ch;ch2<=ch1;ch2++){
		if(ch2=='a'|| ch2=='A'||ch2=='i'||ch2=='I'||ch2=='e'||ch2=='E'||ch2=='o'||ch2=='O'||ch2=='u'||ch2=='U'){
			printf("%c is a vowel\n",ch2);
		}
		else if(ch2!='a'|| ch2!='A'||ch2!='i'||ch2!='I'||ch2!='e'||ch2!='E'||ch2!='o'||ch2!='O'||ch2!='u'||ch2!='U'){
			printf("%c is a consonant\n ",ch2);
		}else{
			printf(" Invalid input\n");
		}
	}
}

