#include <stdio.h>
void main(){
	int x;
	printf("Enter the no. which you want factors :\n");
	scanf("%d",&x);
	printf("The Factors are :\n");
	for(int i=1;i<=x;i++){
		if(x%i==0){
			printf("%d\n",i);
		}
	}
}
