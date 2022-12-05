#include<stdio.h>
void main(){
	int y=1,x=1,row;
	printf("Enter the no. of row : ");
	scanf("%d",&row);

	for(int i=1;i<=row;i++){
		for(int j=row;j>=1;j--){
			if(x%2==0){
				y=x*x;
				printf("%d ",y);
			}else{
				y=x*x*x;
				printf("%d ",y);
			}
			x=x+1;
		}
		printf("\n");
		x=i+1;
	}
}
