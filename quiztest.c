#include<stdio.h>
#include<conio.h>
main(){
	char ques[100];
	char opt[4][20];
	char ans;
	printf("Enter your questions -");
	printf("\n\nqu.1");
	fflush(stdin);
	gets(ques);
	printf("\n options--");
	printf("\n\na)");
	printf("stdin");
	gets(opt[0]);
	printf("\nb");
	fflush (stdin);
	gets(opt[1]);
	printf("\nc)");
	fflush(stdin);
	gets(opt[2]);
	printf("\nd)");
	fflush(stdin);
	gets(opt[3]);
	printf("\nAnswer");
	fflush(stdin);
	scanf("%c",&ans);

	
}
