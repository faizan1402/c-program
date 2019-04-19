#include<stdio.h>
   int main(){
   	int a,b,c;
   	float x,y,z;
   	printf("Enter number a and b\n");
   	printf("Enter number x and y\n");
   	scanf("%d%d",&a,&b);
   	c=a+b;
   	c=a-b;
   	scanf("%f%f",&x,&y);
   	z=x+y;
   	z=x-y;
   	printf("sum and difference  integer is %d\n",c);
   	printf("sum and difference  float is %f\n",z);
   	printf("\n");
   	return 0;
   }

