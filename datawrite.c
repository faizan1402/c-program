#include<stdio.h>
#include <stdlib.h>  /* For exit() function */
int main()
{
   char sentence[1000];
   FILE *fptr;
   system("color A3");

   fptr = fopen("program.txt", "w");
   if(fptr == NULL)
   {
      printf("Error");
      exit(1);
   }
   
   printf("Enter a sentence:\n");
   fgets(sentence,1000,stdin);

   fprintf(fptr,"%s\n", sentence);
   fclose(fptr);

   return 0;
}
