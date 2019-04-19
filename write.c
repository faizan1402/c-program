#include<stdio.h>
    int main(){
    	int i;
    	file *fp;
    	char s[100];
    	fp =fopen("faizan.txt","w");
    	if(fp==null){
    		printf("file can not open");
    		exit(1);
		}
		printf("Enter a string");
		gets(s);
		for(i=0;i<strlen(s);i++)
		fputc(s[i],fp)
		getch();
		fclose(fp);
		getch();
			}
