/* WAP to  1 2 3 4
           a b c d
	   5 6 7 8
	   e f g h    */

#include<stdio.h>
void main(){
	int x=1,row;
	printf("Enter the no. of row : ");
	scanf("%d",&row);
	char ch='a';

	for(int i=1;i<=row;i++){
		for(int j=1;j<=row;j++){
			if(i%2==0){
				printf("%c  ",ch);
				ch++;
			}else{
				printf("%d  ",x);
				x++;
			}
		}
		printf("\n");
	}
}
