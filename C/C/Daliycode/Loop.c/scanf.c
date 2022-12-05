#include<stdio.h>
void main(){
	int x,add=0;
	printf("Enter 5 subjects marks :");
	for(int i=0;i<=5;i++){
		scanf("%d",&x);
		add=add+x;
	}
	printf("addition :%d\n ",add);
}
