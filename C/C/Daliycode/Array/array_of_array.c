#include<stdio.h>
void main(){
	char arr1[]={'A','B','C'};
	char arr2[]={'D','E','F'};
	char arr3[]={'G','H','I'};

	char *cparr[]={arr1,arr2,arr3};

	printf("Adresss of hole array :\n");
	printf("%p\n",*cparr);
	printf("%p\n",*cparr+1);
	printf("%p\n",*cparr+2);

	cparr[0]=arr1+1;
	cparr[1]=arr2+2;
	cparr[2]=arr3;

	printf("Incrememt of hole array :\n");
	printf("%c\n",*(cparr[0]));
	printf("%c\n",*(cparr[1]));
	printf("%c\n",*(cparr[2]));
}
