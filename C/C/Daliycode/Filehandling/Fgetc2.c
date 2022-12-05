#include<stdio.h>
void main(){
	FILE *fp =fopen("success.txt","r");
	FILE *fp2=fopen("property.txt","w");

	char ch;
	int count;
	while(ch=fgetc(fp)!=EOF){
		fputc(ch,fp2);
		count++;
		if(count==10){
			break;
		}
	}
}
