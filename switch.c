#include<stdio.h>
  int main(){
  	int i;
  	printf("Enter a no :");
  	scanf("%d",&i);
  	switch(i){
  	case 1:
	  printf("one");
	  break;
	  case 2:
	  printf("two");
	  break;
	  default :
	  	printf("Invalid no");

	  	break;
	  }
	  return 0;
  }
