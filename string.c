#include <stdio.h>
#include <conio.h>
 main()
 {
 char s[3][10];
 int i;
 clrscr();
 printf ("enter three strings");
 for(i=0;i<=2;i++)
 gets(&s[i][0])	;//gets(s[i])s
 for(i=0;i<=2;i++)
 printf ("s%",s[i]);
 getch();
 }
