#include<stdio.h>
int rev(int);
void main(){
	int x;
	int reve;
	printf("Enter more than 2 digit number : ");
	scanf("%d ",&x);
	reve=rev(x);
	printf("\nThe reverse of %d is %d",x,reve);
}
int rev(int x){
	int num=0,rev=1;
	while(rev!=0){

		rev=x%10;
		num=num*10+rev;
		rev=rev/10;
	}
	return num;
}

