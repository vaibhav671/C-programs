#include<stdio.h>
#include<stdlib.h>

struct player{
	char Pname[20];
	int jno;
	float rev;
};

void main(){

	struct player obj1={"virat",11,9.8};
	struct player obj2={"dhoni",7,8.7};
	// Array of struct obj
	struct player arr[]={obj1,obj2};
	for(int i=0;i<2;i++){
		printf("%s\n",arr[i].Pname);
		printf("%d\n",arr[i].jno);
		printf("%f\n",arr[i].rev);
	}
}
