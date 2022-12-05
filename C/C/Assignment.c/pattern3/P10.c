#include<stdio.h>
void main(){
	int x=0,row;
	
	printf("Enter the no. of row : ");
	scanf("%d",&row);

	char ch;
	char ch1;
	
	
	for(int i=1;i<=row;i++){
		ch=63+row;
		ch1=95+row;
		ch=ch+i;
		ch1=ch1+i;
		for(int j=1;j<=row;j++){
			if(i%2==0){
				printf("%c%d  ",ch1,x);
				x--;
				ch1++;

			}else{
				x++;
				printf("%c%d  ",ch,x);
				ch--;
				
			}
		}
		printf("\n");
		x++;
	 
		
	}
}
