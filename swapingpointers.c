#include <stdio.h>
#include <conio.h>
void swap (int*,int*);/*function declare in pointers*/
main (){
	int a,b;
	clrscr ();
	printf ("enter two numbers");/*swaping of two numbers in pointers*/
	scanf  ("%d%d",&a,&b);
	swap(&a,&b)/*this is a function call and adress pass through swap function*/
	printf("%d%d",a,b);
	
	getch ();
	
	}
	
	void swap (int *x,int *y)/*pointers is the base address denoted */
{
	int t;
	t=*x;
	*x=*y;
	*y=t;
}
	
