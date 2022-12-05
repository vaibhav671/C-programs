#include<stdio.h>
void main(){
// int x = 10,20,30;   This is error of identifier
int y={10,20,30};
printf ("the value of y in {} is :%d\n",y);
int z=(10,20,30);
printf ("the value of z in () is :%d\n",z);
}
