#include<stdio.h>
void main(){
	for(int i=1;i<=128;i++){
		if(i%2==0){
			printf("The even ASCII value of Characters are %c = %d\n",i,i);
		}
	}
}
