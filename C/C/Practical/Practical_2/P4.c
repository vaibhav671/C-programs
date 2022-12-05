#include <stdio.h>
void main(){
	int x,count=0;
	printf("Enter a no. :\n");
	scanf("%d",&x);
	for(int i=1;i<=x;i++){
		
		if(x%i==0){
			count=count+1;
		}
	}
	if(count<=2){
		printf("It is a prime no.\n");
	}else{
		printf("It is not a prime no.\n");
	}
}
