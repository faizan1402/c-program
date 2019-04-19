#include <stdio.h>
#include <conio.h>
void main(){
	int x=5, *j;
	j=&x;

	printf ("%d\n",x);/*this is a ordinary variable value*/  
	printf ("%u\n",j); /*this is a pointers value of address define */
	
	
	printf ("%d\n",*j); /*whenever before *j then total address varible points address variable to ordinary value or x*/ 
	printf ("%u\n",&x);
	printf ("%u\n",*&j);
	return (0);
}
