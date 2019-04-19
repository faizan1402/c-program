#include<stdio.h>
   struct book{
   	int bookid;
   	char book title[20];
   	float book price;
   };
   void main(){
   	struct book b1;
   	file *fp;
   	fp=fopen("myfile.txt","rb");
    if(fp==null){ /*we are check the file available or not  and no data available so this is true*/
    printf("File not found");
    exit(1);
}
    fread(&b1,size of (b1),1),fp);
    printf("%d %c %f",b1.bookid,b1.book title,b1.book price);
    fclose=(fp);
}
