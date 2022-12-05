#include<stdio.h>
void main(){
	int row,x=1;
	printf("Enter the no. of row : ");
	scanf("%d",&row);
        for(int i=1;i<=row;i++){
		for(int j=1;j<=row;j++){
			if(i%2==0){
				if(j%2==1){
					printf("%d ",x*x);
				}else{
					printf("%d ",x);
				}

			}else{
				if(j%2==0){
					printf("%d ",x*x);
				}else{
					printf("%d ",x);
				}

			}
			x++;
		}
		printf("\n");
	}
}
