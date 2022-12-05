#include<stdio.h>
void main(){
	int row,count=0;
	int x=2;
	printf("Enter the no. of row : ");
	scanf("%d",&row);
	for(int i=1;i<=row;i++){
		for(int j=1;j<=row;j++){
			for(int k=1;k>0;k++){
				if((x%2==0&&x<3)||(x%2==1)||(x%3==0 && x>6)){
					printf("%d ",x);
					count=count+1;
					x++;

				}else if(count==row){
					break;
				}
			
			}
			
		}
		printf("\n");
	
	}
}
