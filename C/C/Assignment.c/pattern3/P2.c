#include<stdio.h>
void main(){
	int row;
	printf("Enter the row :\n");
	scanf("%d",&row);

	for(int i=1;i<=row;i++){
		int x=0;
		char ch='a';
		for(int j=row;j>=1;j--){
			if(i%2==1){
				if(j%2==0){
					x=j-1;
					printf("%d ",x);
				}else{
					ch++;
					printf("%c ",ch);
					ch++;
				}
			}else{
				if(j%2==0){
					printf("%c ",ch);
					ch++;
				}else{
					x=j-1;
					printf("%d ",x);
				}
			}
		}

			
		printf("\n");
	}
}
