#include <stdio.h>
  int main(){
  	int f=0 ,s= 1, next= 0, i, no;
  	system("color d");
  	printf("********** Enter number terms********** :");
  	
  	scanf("%d",&no);
  	
  	for(i=0;i<no;i++) {
  	if(i<=1){ /* because 0 to 1 value will print if condition true and your value next variable store but 1 or greater than then if condition false after that else condition */
  	next=i;}
  	else{
  	next=f+s;
  	f=s;
  	s=next;}
  
  	printf("%d",next);}
  	
    printf("\n");
    return 0;
  
  
  } 
