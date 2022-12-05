#include<stdio.h>
void main(){
	int x,y,div,ans=0;
	printf("Enter the range :\n");
	scanf("%d",&x);
	scanf("%d",&y);
	printf("Enter the divisor :\n");
	scanf("%d",&div);
	for(int i=x;i<=y;i++){
		if(i%div==0){
			ans=ans+i;
		}
	}
	printf("The sum of divisor is %d\n",ans);
}
