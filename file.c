
#include <stdio.h> 

int main()
{
   FILE *fileAddress;
   fileAddress = fopen("FAIZAN2ND.txt", "w");
   char name[50];
	
   if (fileAddress != NULL) {
	printf("\n please enter the String that you want to write to the File :\n");
	gets(name);

	// Let us use our fputs
	fputs (name, fileAddress);
	printf("\n We have written the Name successfully");
	fclose(fileAddress);		
   }
   else {
     	printf("\n Unable to Create or Open the Sample.txt File");
   }
   return 0;
}











