#include <stdio.h>
void main(){
	int x,y;
	printf("Enter the size of two arays :\n");
	scanf("%d\n%d",&x,&y);

	int arr1[x];
	int arr2[y];

	int flage=1;
	if(x==y){	
		printf("Enter the elements of 1st array :\n");
	
		for(int i=0;i<x;i++){
			scanf("%d",&arr1[i]);
		}
		
		printf("Enter the elements of 2nd array:\n");
	
		for(int i=0;i<y;i++){
			scanf("%d",&arr2[i]);
		}
		
		
		for(int i=0;i<x;i++){
			if(arr1[i]!=arr2[i]){
				flage=0;
				break;
			}else{
				flage=1;
			}
		}
                if(flage==0){
			printf("Arrays are not equal\n");
		}else{
			printf("Arrays are equal\n");
		}
	}else{
		printf("Arrays are not equal\n");
	}

}


