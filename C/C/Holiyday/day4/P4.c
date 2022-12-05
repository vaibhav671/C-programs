#include<stdio.h>
void prime(int);
void main(){
	int x;
	printf("Enter the +ve intger :\n");
	scanf("%d",&x);
	prime(x);

}
void prime(int x){
	if((x==1||x==2||x==3)||(x%2!=0&&x%3!=0)){
		printf("%d is a Prime number\n",x);
	}else{
		printf("%d is not a Prime number\n",x);
	}
}
		
